#include <iostream>
using namespace std;

#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
	Mat src = imread("lll.png", 1);
	Mat dst = src.clone();
	double alpha = 2.0;
	int beta = 30;
	for(int i = 0; i < src.rows; i++)
		for(int j = 0; j < src.cols; j++)
			for(int k = 0; k < 3; k++)
				dst.at<Vec3b>(i,j)[k]  = saturate_cast<uchar>(alpha*(src.at<Vec3b>(i,j)[k]) + beta);
	imshow("anh goc", src);
	imshow("anh moi", dst);		
	waitKey(0);
	return 0;
}
