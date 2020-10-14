#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	cv::Mat dispMat = imread("D:\\1233.jpg");

	Mat dispMat_gray;//彩色图像转化成灰度图  
	cvtColor(dispMat, dispMat_gray, COLOR_BGR2GRAY);
	cv::Mat dispMat_gray_1;
	cv::Mat dispMat_gray_2;
	threshold(dispMat_gray, dispMat_gray_1, 100, 255, THRESH_BINARY);//两种不同的二值化
	imshow("gray1", dispMat_gray_1);
	adaptiveThreshold(dispMat_gray, dispMat_gray_2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
	imshow("gray2", dispMat_gray_2);
	imshow("yuantu", dispMat);
	imshow("huidu", dispMat_gray);
	waitKey(0);
	return 0;
}