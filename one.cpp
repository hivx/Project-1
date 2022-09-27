#include<iostream>
#include<opencv2/opencv.hpp>
int main(int argc, char** argv){
  cv::Mat img;
  img = cv::imread("lll.png", cv::IMREAD_COLOR);
  cv::imshow("anhmoi", img);
  cv::waitKey(0);
}
