#pragma once
#include "node.h"



SampleNode::SampleNode(std::string Nodename) : rclcpp::Node(Nodename), NodeRate(10), NodeClock{ std::make_shared<rclcpp::Clock>(RCL_ROS_TIME) }
{
};

SampleNode::~SampleNode()
{
}


void SampleNode::publishString(std::string data)
{
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub = this->create_publisher<std_msgs::msg::String>("/test/string", 1);
    std_msgs::msg::String message = std_msgs::msg::String();
    message.data = data;
    pub->publish(message);
}

void SampleNode::publishInt(const int num)
{
    rclcpp::Publisher<std_msgs::msg::Int16>::SharedPtr pub = this->create_publisher<std_msgs::msg::Int16>("/test/int", 1);
    std_msgs::msg::Int16 message = std_msgs::msg::Int16();
    message.data = num;
    pub->publish(message);
}

void SampleNode::publishDouble(const double num)
{
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr pub = this->create_publisher<std_msgs::msg::Float32>("/test/double", 1);
    std_msgs::msg::Float32 message = std_msgs::msg::Float32();
    message.data = num;
    pub->publish(message);
}

void SampleNode::publishFloat(const float num)
{
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr pub = this->create_publisher<std_msgs::msg::Float64>("/test/float", 1);
    std_msgs::msg::Float64 message = std_msgs::msg::Float64();
    message.data = num;
    pub->publish(message);
}

void SampleNode::publishIntArray(const int nums[], const int size)
{
    rclcpp::Publisher<std_msgs::msg::Int16MultiArray>::SharedPtr pub = this->create_publisher<std_msgs::msg::Int16MultiArray>("/test/intarray", 1);
    std_msgs::msg::Int16MultiArray message = std_msgs::msg::Int16MultiArray();
    std::vector<int16_t> num_vec(nums, nums + size);
    message.data = num_vec;
    pub->publish(message);
}

void SampleNode::publishIntArray(std::vector<int16_t> data)
{
    rclcpp::Publisher<std_msgs::msg::Int16MultiArray>::SharedPtr pub = this->create_publisher<std_msgs::msg::Int16MultiArray>("/test/intarray", 1);
    std_msgs::msg::Int16MultiArray message = std_msgs::msg::Int16MultiArray();
    message.data = data;
    pub->publish(message);
}

void SampleNode::publishDoubleArray(const double nums[], const int size)
{
    rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr pub = this->create_publisher<std_msgs::msg::Float32MultiArray>("/test/doublearray", 1);
    std_msgs::msg::Float32MultiArray message = std_msgs::msg::Float32MultiArray();
    std::vector<float> num_vec(nums, nums + size);
    message.data = num_vec;
    pub->publish(message);
}

void SampleNode::publishFloatArray(const float nums[], const int size)
{
    rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr pub = this->create_publisher<std_msgs::msg::Float32MultiArray>("/test/floatarray", 1);
    std_msgs::msg::Float32MultiArray message = std_msgs::msg::Float32MultiArray();
    std::vector<float> num_vec(nums, nums + size);
    message.data = num_vec;
    pub->publish(message);
}