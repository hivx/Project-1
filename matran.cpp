#include <iostream>
using namespace std;

#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
	Mat src = imread("xam.jpeg");
	Mat img(src.rows, src.cols, CV_8UC3);
	for (int i=0; i<src.rows; i++){
		for(int j=0; j<src.cols; j++){
			for(int k=0; k<3; k++){
			img.at<Vec3b>(i, j)[k] = src.at<Vec3b>(i, j)[k];
			}
		}
	}
	imwrite("anhmoi.png", img);
	imshow("anhmoi", img);
	waitKey(0);
	destroyAllWindows();
	return 0;
}
