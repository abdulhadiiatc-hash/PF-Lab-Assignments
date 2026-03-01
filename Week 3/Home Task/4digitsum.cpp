#include<iostream>
using namespace std;
main()
{
int number;
int digit1;
int digit2;
int number2;
int digit3;
int number3;
int digit4;
int number4;
int sum;

cout<<"Enter a 4-Digit number: ";
cin>>number;

digit1 = number % 10;
number2 = number / 10;
digit2 = number2 % 10;
number3 = number2 / 10;
digit3 = number3 % 10;
number4 = number3 / 10;
digit4 = number4 % 10;

sum = digit1 + digit2 + digit3 + digit4;

cout<<"Sum of Individual Digits: "<<sum;

}