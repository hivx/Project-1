#include<opencv2/opencv.hpp>
using namespace cv;

#include<iostream>
using namespace std;

int main(){

	Mat image = imread("lll.png");
	imshow("anhgoc", image);


	// let's downscale the image using new  width and height
	int down_width = 300;
	int down_height = 200;
	Mat resized_down;
	//resize down
	resize(image, resized_down, Size(down_width, down_height), INTER_LINEAR);
	int up_width = 600;
	int up_height = 400;
	Mat resized_up;
	//resize up
	resize(image, resized_up, Size(up_width, up_height), INTER_LINEAR);
	
	imshow("small", resized_down);
	imshow("Big", resized_up);
	waitKey();
	return 0;
}

