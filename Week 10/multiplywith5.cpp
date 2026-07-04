#include<iostream>
using namespace std;
void multiplyby5(int);

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    multiplyby5(number);
    return 0;
}

void multiplyby5(int number){
    cout<<"Result: "<<number*5;
}