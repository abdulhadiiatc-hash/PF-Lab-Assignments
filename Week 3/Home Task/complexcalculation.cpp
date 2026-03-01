#include<iostream>
using namespace std;
main()
{
int number1;
int number2;
int number3;
int number4;
int number5;
int number6;
int number7;
int number8;
int number9;
int number10;
int number11;
int number12;
int number13;
int number14;
int number15;
int sum5;
int multiply5;
int sub5;
int totalsum;
int total;

cout<<"Number 1: ";
cin>>number1;
cout<<"Number 2: ";
cin>>number2;
cout<<"Number 3: ";
cin>>number3;
cout<<"Number 4: ";
cin>>number4;
cout<<"Number 5: ";
cin>>number5;
cout<<"Number 6: ";
cin>>number6;
cout<<"Number 7: ";
cin>>number7;
cout<<"Number 8: ";
cin>>number8;
cout<<"Number 9: ";
cin>>number9;
cout<<"Number 10: ";
cin>>number10;
cout<<"Number 11: ";
cin>>number11;
cout<<"Number 12: ";
cin>>number12;
cout<<"Number 13: ";
cin>>number13;
cout<<"Number 14: ";
cin>>number14;
cout<<"Number 15: ";
cin>>number15;

sum5 = number1 + number2 + number3 + number4 + number5;
multiply5 = number6 * number7 * number8 * number9 * number10;
sub5 = number11 - number12 - number13 - number14 - number15;

totalsum = sum5 + multiply5;
total = totalsum - sub5;

cout<<"The final result is: "<<total;
}