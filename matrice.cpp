#include <stdio.h>
#include "opencv2\core\mat.hpp"
#include "opencv2\opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
int main(void)
{

	Mat a(2, 2, CV_32FC1, Scalar(1));
	Mat b(2, 2, CV_32FC1, Scalar(2));


	Mat c = a*b;
	cout << c;

	getchar();
}