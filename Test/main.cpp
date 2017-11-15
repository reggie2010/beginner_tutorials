/**
 * @file    main.cpp
 * @brief   main test file
 * @author  Vontrelle Collins
 * @copyright 2017 Vontrelle Collins
 * @license MIT
 */

#include <ros/ros.h>
#include <gtest/gtest.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "Test");

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}