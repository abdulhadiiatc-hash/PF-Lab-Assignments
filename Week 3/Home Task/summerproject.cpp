#include <iostream>
using namespace std;

main()
{
float cost;
int pound;
int area;
float fertilizerperpound;
float fertilizerpersqfeet;

cout<<"Enter the size of fertilizer bag in pounds: ";
cin>>pound;

cout<<"Enter the cost of the bag: $";
cin>>cost;

cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;

fertilizerperpound = cost / pound;
fertilizerpersqfeet = cost / area;

cout<<"Cost of fertilizer per pound: $"<<fertilizerperpound<<endl;
cout<<"Cost of fertilizing per square foot: $"<<fertilizerpersqfeet;

}

