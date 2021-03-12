#pragma once

#include"publisher.h"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

MinimalPublisher::MinimalPublisher() : Node("minimal_publisher")
{
    publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);

    //void publish(std::string info);
}

void MinimalPublisher::publish(std::string info)
{
    auto message = std_msgs::msg::String();
    message.data = info;
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
}

MinimalPublisher::~MinimalPublisher()
{
}

