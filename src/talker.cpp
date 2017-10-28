#include <sstream>
#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char **argv) {

	ros::init(argc, argv, "talker");
	ros::NodeHandle n;
	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);
	ros::Rate loop_rate(10);

	int count = 0;
	while(ros::ok()) {
		std::stringstream ss;
		ss << "hello world " << count;
		std_msgs::String msg;
		msg.data = ss.str();

		chatter_pub.publish(msg);
		ROS::INFO("%s", msg.data.c_str());

		ros::spinOnce();

		++count;
	}

	return 0;
}