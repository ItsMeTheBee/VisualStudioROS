#pragma once

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
    public:
        MinimalPublisher();
        ~MinimalPublisher();
        void publish(std::string info);

    private:
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};



