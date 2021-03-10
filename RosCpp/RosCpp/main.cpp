#include "subscriber.cpp"
#include "publisher.cpp"
#include "rclcpp/rclcpp.hpp"

extern "C"             //No name mangling
__declspec(dllexport)  //Tells the compiler to export the function
int                    //Function return type     
__cdecl                //Specifies calling convention, cdelc is default, so this can be omitted

main()
{
    rclcpp::init(0, nullptr);
    auto pubnode = std::make_shared<MinimalPublisher>();
    auto subnode = std::make_shared<MinimalSubscriber>();
    while (rclcpp::ok())
    {
        std::string info = "test";
        pubnode->publish(info);
    }
    rclcpp::shutdown();
    return 0;
}

/* main()
{
    rclcpp::init(0, nullptr);
    rclcpp::executors::MultiThreadedExecutor executor;
    auto pubnode = std::make_shared<MinimalPublisher>();
    auto subnode = std::make_shared<MinimalSubscriber>();
    executor.add_node(pubnode);
    executor.add_node(subnode);
    executor.spin();
    rclcpp::shutdown();
    return 0;
}
*/