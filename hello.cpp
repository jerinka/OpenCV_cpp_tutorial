#include <opencv2/highgui.hpp>
#include <iostream>


int main(){

	cv::Mat image;
	image = cv::imread("1.jpg");

	if(! image.data){
		std::cout << "No image data" << std::endl;
		return -1;
	}

	cv::namedWindow("Display window", cv::WINDOW_NORMAL);
	cv::imshow("Display window", image);
	cv::waitKey(0);

	return 0;
}

//http://www.codebind.com/linux-tutorials/how-to-install-opencv-in-ubuntu-20-04-lts-for-c-c/?utm_source=rss&utm_medium=rss&utm_campaign=how-to-install-opencv-in-ubuntu-20-04-lts-for-c-c


// g++ hello.cpp -o output -std=c++11 `pkg-config --cflags --libs opencv4`

// ./output