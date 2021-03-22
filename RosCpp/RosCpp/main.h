#pragma once

//#include "subscriber.h"
#include "publisher.h"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "mcd_interfaces/msg/mcd.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include <iostream>


class  NxRos : public rclcpp::Node
{
    public:
        NxRos();
        ~NxRos();
        void publishString(const wchar_t* info);
        void publishInt(const int num);
        void publishDouble(const double num);
        void publishFloat(const float num);
        void publishIntArray(const int nums[], const int size);
        void publishDoubleArray(const double nums[], const int size);
        void publishFloatArray(const float nums[], const int size);
        void publishLaserScan(float min_angle, float max_angle, float angle_increment, float time_increment, float scan_time, float range_min, float range_max, float ranges[], int range_size, float intensities[], int intensity_size);
    private:
        void publish(mcd_interfaces::msg::MCD msg);
        rclcpp::Publisher<mcd_interfaces::msg::MCD>::SharedPtr publisher_;
        rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr laser_pub;
        rclcpp::Clock::SharedPtr NodeClock;
        rclcpp::Rate NodeRate;
        rclcpp::Time LastScan;
};
