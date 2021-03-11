#include "subscriber.cpp"
#include "publisher.cpp"
#include "rclcpp/rclcpp.hpp"

#define DllExport   __declspec( dllexport )

extern "C"             //No name mangling
__declspec(dllexport)  //Tells the compiler to export the function
int                    //Function return type     
__cdecl                //Specifies calling convention, cdelc is default, so this can be omitted

main(const char* info)
{
    rclcpp::init(0, nullptr);
    auto pubnode = std::make_shared<MinimalPublisher>();
    auto subnode = std::make_shared<MinimalSubscriber>();
    while (rclcpp::ok())
    {
        //std::string info = "test";
        pubnode->publish(info);
    }
    rclcpp::shutdown();
    return 0;
}


class __declspec(dllexport) NxRosConnector
{
public:
    NxRosConnector() {
        MinimalPublisher::SharedPtr pubnode = std::make_shared<MinimalPublisher>();
        MinimalSubscriber::SharedPtr subnode = std::make_shared<MinimalSubscriber>();
        void publish(std::string info);
    };

    void publish(const char* info)
    {
        pubnode->publish(info);
    }
private:
    std::shared_ptr<MinimalPublisher> pubnode;
    std::shared_ptr<MinimalSubscriber> subnode;

};


extern "C" __declspec(dllexport) NxRosConnector * NxRosConnectorCreate() { return new NxRosConnector(); }
extern "C" __declspec(dllexport) void NxRosConnector_Publish(NxRosConnector * pNxRosConnector, const char* info) { pNxRosConnector->publish(info); }
extern "C" __declspec(dllexport) void NxRosConnectorDelete(NxRosConnector * pNxRosConnector) { delete pNxRosConnector; }


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