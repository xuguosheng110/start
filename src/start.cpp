#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
using namespace std;

class HelloPublisher : public rclcpp::Node
{
public:
    HelloPublisher()
        : Node("hello_publisher")
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("start", 10);

        auto publish_message = [this]() -> void {
            auto message = std_msgs::msg::String();
            message.data = "Hello, World,i am start!!!!";
            RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
            publisher_->publish(message);
            std::cout<<"start"<<std::endl;
            std::cout<<"============="<<std::endl;
            std::cout<<"============="<<std::endl;
            std::cout<<"============="<<std::endl;
            std::cout<<"finish"<<std::endl;

        };

        // 发布 "Hello, World!" 每秒一次
        timer_ = this->create_wall_timer(std::chrono::seconds(1), publish_message);
    }

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HelloPublisher>());
    rclcpp::shutdown();
    return 0;
}
