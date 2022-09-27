#include <iostream>
using namespace std;
#include<opencv2/opencv.hpp>
using namespace cv;

int main(int, char**) 
{
	Mat img = imread("lll.png");
	imshow("anhgoc", img);
	double goc = 90;

	Point2f tam((img.cols - 1) / 2.0, (img.rows - 1) / 2.0);
	Mat rotation_matix = getRotationMatrix2D(tam, goc, 1.0);
	Mat rotated_img;
	warpAffine(img, rotated_img, rotation_matix, img.size());
	 
	imshow("anhmoi", rotated_img);
   	waitKey(0);

	return 0;
}

