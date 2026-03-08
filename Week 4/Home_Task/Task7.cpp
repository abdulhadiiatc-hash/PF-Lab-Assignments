#include<iostream>
using namespace std;
main(){
    string shape;
    float area;
    cout<<"Enter the type of the geometric figure: ";
    cin>>shape;
    if(shape=="square"){
        int side;
        cout<<"Enter the length of it's side: ";
        cin>>side;
        area=side*side;
        cout<<"Area of the Square is "<<area;
    }if(shape=="rectangle"){
        float length,width;
        cout<<"Enter the length: ";
        cin>>length;
        cout<<"Enter the width: ";
        cin>>width;
        area=length*width;
        cout<<"Area of the Rectangle is "<<area;
    }if(shape=="circle"){
        float radius,pi=3.141;
        cout<<"Enter it's radius: ";
        cin>>radius;
        area=pi*(radius*radius);
        cout<<"Area of the Circle is "<<area;
    }if(shape=="triangle"){
        float base,height;
        cout<<"Enter the length of it's base: ";
        cin>>base;
        cout<<"Enter the length of it's height: ";
        cin>>height;
        area=0.5*base*height;
        cout<<"Area of the Triangle is "<<area;
    }
}