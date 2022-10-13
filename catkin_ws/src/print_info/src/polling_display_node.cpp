#include <ros/ros.h>
#include <std_msgs/String.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <cv_bridge/rgb_colors.h>
#include <vector>
#include <iostream>

class PollingDisplay
{
public:
    PollingDisplay():it(n), index(0)
    {
        msgs_vec = {"/d415/color/tag_detections_image", "/d435/color/tag_detections_image"};
        // msgs_vec = {"/d415/color/image_raw", "/d435/color/image_raw"};
        cv::namedWindow("view");
        cv::startWindowThread();

        image_transport::Subscriber ImageSub_0 = it.subscribe(msgs_vec[0], 20, &PollingDisplay::imageCallback1, this);
        image_transport::Subscriber ImageSub_1 = it.subscribe(msgs_vec[1], 20, &PollingDisplay::imageCallback2, this);
        timer = n.createTimer(ros::Duration(0.5), &PollingDisplay::timerCallback, this);
        while (ros::ok())
        {
            ros::spinOnce();
            if(!img2show.empty())
            {
                cv::imshow("view", img2show);
            }
        }
    }

    void timerCallback(const ros::TimerEvent&)
    {
        index = (index+1) % msgs_number;
        ROS_INFO("Polling Show! ");
    }

    void imageCallback1(const sensor_msgs::ImageConstPtr& img_msg)
    {
        if (index == 0)
            cv_bridge::toCvCopy(img_msg, sensor_msgs::image_encodings::BGR8)->image.copyTo(img2show);
    }

    void imageCallback2(const sensor_msgs::ImageConstPtr& img_msg)
    {
        if (index == 1)
            cv_bridge::toCvCopy(img_msg, sensor_msgs::image_encodings::BGR8)->image.copyTo(img2show);
    }

    ~PollingDisplay()
    {
        cv::destroyWindow("view");
    }

private:
    static int msgs_number;

    int index;
    ros::NodeHandle n; 
    image_transport::ImageTransport it;
    std::vector<std::string> msgs_vec;
    std::vector<cv::Mat> img_vec;
    cv::Mat img2show;
    ros::Timer timer;
};

int PollingDisplay::msgs_number = 2;
 

int main(int argc, char **argv)
{
    ros::init(argc, argv, "image_listener");

    PollingDisplay polling_display;

    return 0;
}