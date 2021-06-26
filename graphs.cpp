#include <opencv2/opencv.hpp> 
#include <fstream> 
using namespace cv; 
 
float data1[][3]={-1,0,1, 
                  -2,0,2, 
                  -1,0,1}; 
float data2[][3]={1,2,1, 
                  0,0,0, 
                  -1,-2,-1}; 
 
int main() 
{ 
    Mat frame; 
    VideoCapture cap(0); 
    Mat kernel1(3,3,CV_32FC1,&data1); 
    Mat kernel2(3,3,CV_32FC1,&data2); 
    kernel1 = kernel1*2; 
    kernel2 = kernel2*2; 
    while(1) 
    { 
        cap>>frame; 
        cvtColor(frame,frame,COLOR_BGR2GRAY); 
        Mat out1,out2,out; 
        filter2D(frame,out1,-1,kernel1); 
        filter2D(frame,out2,-1,kernel2); 
        out = out1/2+out2/2; 
        threshold(out,out,80,255,THRESH_BINARY); 
        imshow("Input",frame); 
        imshow("Output",out); 
        waitKey(1); 
    } 
} 