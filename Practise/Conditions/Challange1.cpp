#include<iostream>
using namespace std;
int main(){
    int price, total;
    cout<<"Enter your bill: ";
    cin>>price;
    if(price<=5000){
        total = price - (price * 0.05);
    }else if(price>5000){
        total = price - (price * 0.1);
    }
    cout<<"Your discounted Bill is "<<total;
}