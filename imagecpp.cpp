#include <stdio.h>
#include "opencv2\core\mat.hpp"
#include "opencv2\opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
int main(void)
{

	Mat a;

	a = imread("C:\\Users\\botan\\Desktop\\kappa.jpg");

	namedWindow("imagine", WINDOW_NORMAL);
	
	imshow("imagine", a);

	waitKey(-1);

	
}