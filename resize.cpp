#include<iostream>
using namespace std;
#include<opencv2/opencv.hpp>
using namespace cv;
int main(){
	Mat img = imread("lll.png", IMREAD_COLOR);
	Mat img_resize;
	resize(img, img_resize, Size(200,100));
	imwrite("anhmoi.png", img_resize);
	imshow("anhgoc", img);	
	imshow("anhmoi", img_resize);
	waitKey(0);
}
