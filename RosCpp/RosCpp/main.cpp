#pragma once
#include "main.h"


NxRos::NxRos() : rclcpp::Node("sample_pub")
{
    publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);
};

NxRos::~NxRos()
{
}

void NxRos::publish(const wchar_t* info)
{
    std::wstring ws(info);
    std::string text(ws.begin(), ws.end());
    auto message = std_msgs::msg::String();
    message.data = text;
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
}

void init()
{
    rclcpp::init(0, nullptr);
}