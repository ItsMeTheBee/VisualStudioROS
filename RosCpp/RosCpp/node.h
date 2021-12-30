#pragma once

#include "rclcpp/rclcpp.hpp"
#include <rclcpp/clock.hpp>

#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/int16.hpp"
#include "std_msgs/msg/float32.hpp"
#include "std_msgs/msg/float64.hpp"
#include "std_msgs/msg/int16_multi_array.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"


class  SampleNode : public rclcpp::Node
{
public:
    SampleNode(std::string Nodename = "SampleNode");
    ~SampleNode();

    void publishString(std::string data);
    void publishInt(const int num);
    void publishDouble(const double num);
    void publishFloat(const float num);
    void publishIntArray(const int nums[], const int size);
    void publishIntArray(std::vector<int16_t> data);
    void publishDoubleArray(const double nums[], const int size);
    void publishFloatArray(const float nums[], const int size);


private:

    rclcpp::Clock::SharedPtr NodeClock;
    rclcpp::Rate NodeRate;
    rclcpp::TimerBase::SharedPtr Timer;

};

