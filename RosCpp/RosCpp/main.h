#pragma once

//#include "subscriber.cpp"
//#include "publisher.cpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <iostream>


class  NxRos : public rclcpp::Node
{
    public:
        NxRos();
        ~NxRos();
        void publish(const wchar_t* info);
    private:
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};
