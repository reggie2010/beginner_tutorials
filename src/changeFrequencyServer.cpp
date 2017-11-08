/**
 * @file    changeFrequencyServer.cpp
 * @brief   Provides service to change node rate 
 * @author  Vontrelle Collins
 * @copyright 2017 Vontrelle Collins
 */

#include "ros/ros.h"
#include "beginner_tutorials/changeFrequency.h"

bool change(beginner_tutorials::changeFrequency::Request &req,
            beginner_tutorials::changeFrequency::Response &res) {
  res.frequencyOut = req.frequencyIn;
  return true;
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "frequency_server");
  ros::NodeHandle n;
  ros::ServiceServer server = n.advertiseService("change_frequency", change);
  ros::spin();

  return 0;
}
