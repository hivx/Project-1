#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
	Mat goc = imread("lll.png", IMREAD_COLOR);
	Mat img = imread("lll.png", IMREAD_GRAYSCALE);
	Mat  img_2;
	adaptiveThreshold(img, img_2, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 35, 5);
	imshow("anhgoc", goc);
	imshow("anhmoi", img_2);
	waitKey(0);
}
