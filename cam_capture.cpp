#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
    Mat img;
    namedWindow("win", WINDOW_NORMAL);
    VideoCapture cap(0);
    if(!cap.isOpened()){
        cout << "Cannot open camera" << endl;
        return -1;
    }
    int frame_width = cap.get(cv::CAP_PROP_FRAME_WIDTH);
    int frame_height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);

    VideoWriter video("outcpp.avi",cv::VideoWriter::fourcc('M','J','P','G'),10, Size(frame_width,frame_height));

    while(1){
        cap >> img;
        if (img.empty()){
            cout << "No image data" << endl;
            return -1;
        }
        imshow("win", img);
        if(waitKey(30) >= 0) break;
        video.write(img);

    }
    cap.release();
    video.release();

    return 0;
}