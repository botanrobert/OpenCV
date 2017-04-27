#include <stdio.h>
#include "opencv2\core\mat.hpp"
#include "opencv2\opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
int main(void)
{

	Mat a;

	VideoCapture video(0);
	if (!video.isOpened()) {
		printf("cannot connect to camera");
		getchar();
		return 1;
	}

	CascadeClassifier c;
	c.load("E:\\Facultate\\Master An1Sem2\\Roboti inteligenti - Oltean M\\OpenCV\\opencv\\sources\\data\\haarcascades\\haarcascade_frontalface_alt.xml");
	namedWindow("camera");


	vector <Rect> capete;
	while (1) {

		video >> a;
		c.detectMultiScale(a, capete);

		for (int i = 0; i < capete.size(); i++)
			rectangle(a, capete[i], Scalar(255, 0, 0));

		imshow("camera", a);

		if (waitKey(1) ==  27)//asteptam o milisecunda pentru a se intampla ceva
			break;
	}


}