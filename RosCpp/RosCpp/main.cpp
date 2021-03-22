#pragma once
#include "main.h"
#include <rclcpp/clock.hpp>


NxRos::NxRos() : rclcpp::Node("NxRos"), NodeRate(3), NodeClock{ std::make_shared<rclcpp::Clock>(RCL_ROS_TIME) }
{
    publisher_ = this->create_publisher<mcd_interfaces::msg::MCD>("chatter", 1);
    laser_pub = this->create_publisher<sensor_msgs::msg::LaserScan>("lazer", 10);
    LastScan = NodeClock->now();
};

NxRos::~NxRos()
{
}

void NxRos::publishString(const wchar_t* info)
{
    std::wstring ws(info);
    std::string text(ws.begin(), ws.end());
    auto message = mcd_interfaces::msg::MCD();
    message.word = text;
    publish(message);
}

void NxRos::publishInt(const int num)
{
    mcd_interfaces::msg::MCD message = mcd_interfaces::msg::MCD();
    message.hint = num;
    publish(message);
}

void NxRos::publishDouble(const double num)
{
    mcd_interfaces::msg::MCD message = mcd_interfaces::msg::MCD();
    message.trouble = num;
    publish(message);
}

void NxRos::publishFloat(const float num)
{
    mcd_interfaces::msg::MCD message = mcd_interfaces::msg::MCD();
    message.flood = num;
    publish(message);
}

void NxRos::publishIntArray(const int nums[], const int size)
{
    auto message = mcd_interfaces::msg::MCD();
    std::vector<int> num_vec(nums, nums + size);  
    message.hint_arr = num_vec;
    publish(message);
}

void NxRos::publishDoubleArray(const double nums[], const int size)
{
    auto message = mcd_interfaces::msg::MCD();
    std::vector<double> num_vec(nums, nums + size);
    message.trouble_arr = num_vec;
    publish(message);
}

void NxRos::publishFloatArray(const float nums[], const int size)
{
    auto message = mcd_interfaces::msg::MCD();
    std::vector<float> num_vec(nums, nums + size);
    //for (std::vector<float>::const_iterator i = num_vec.begin(); i != num_vec.end(); ++i)
    //    std::cout << *i << ' ';
    message.flood_arr = num_vec;
    publish(message);
}

void NxRos::publishLaserScan(float min_angle, float max_angle, float angle_increment, float time_increment, float scan_time, float range_min, float range_max, float ranges[], int range_size, float intensities[], int intensity_size)
{
    sensor_msgs::msg::LaserScan message = sensor_msgs::msg::LaserScan();
    message.header.frame_id = "laser_frame";
    message.angle_min = min_angle;      // start angle of the scan[rad]
    message.angle_max = max_angle;      // end angle of the scan[rad]
    message.angle_increment = angle_increment;      // angular distance between measurements[rad]
    message.time_increment = time_increment;        // time between measurements [seconds] (used to interpolate position of 3D points if scanner is moving)
    if (scan_time == 0)
    {
        rclcpp::Time now = NodeClock->now();
        message.scan_time = (now - LastScan).seconds();
        LastScan = now;
    }
    else
        message.scan_time = scan_time;      // time between scans [seconds]
    //std::cout << "Intervall " << message.scan_time << std::endl;
    message.range_min = range_min;      // minimum range value [m]
    message.range_max = range_max;      // maximum range value [m]
    std::vector<float> range_vec(ranges, ranges + range_size);
    message.ranges = range_vec;         // range data [m] (min and max should be discarded)
    if (intensity_size == 0)
    {
        std::vector<float> intensitiy_vec = {};
        message.intensities = intensitiy_vec;       // intensity data [device-specific units] (can be left empty)
    }
    else
    {
        std::vector<float> intensitiy_vec(intensities, intensities + intensity_size);
        message.intensities = intensitiy_vec;       // intensity data [device-specific units] (can be left empty)
    }
    laser_pub->publish(message);
    NodeRate.sleep();
}


void NxRos::publish(mcd_interfaces::msg::MCD msg)
{
    publisher_->publish(msg);
}

void init()
{
    rclcpp::init(0, nullptr);
}

void main()
{
    init();
    rclcpp::executors::MultiThreadedExecutor executor;
    auto pubnode = std::make_shared<MinimalPublisher>();
    executor.add_node(pubnode);
    executor.spin();
    rclcpp::shutdown();
}