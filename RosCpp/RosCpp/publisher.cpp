#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
public:
    MinimalPublisher()
        : Node("minimal_publisher")
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);

        void publish(std::string info);
    }
    void publish(std::string info)
    {
        auto message = std_msgs::msg::String();
        message.data = info;
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
        publisher_->publish(message);
    }


private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};