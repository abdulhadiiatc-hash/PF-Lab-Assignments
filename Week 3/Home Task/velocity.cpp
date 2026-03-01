#include <iostream>
using namespace std;

main()
{
int intvelocity;
int finalvelocity;
int acceleration;
int time;

cout<<"Enter Initial Velocity (m/s): ";
cin>>intvelocity;

cout<<"Enter Acceleration (m/s^2): ";
cin>>acceleration;

cout<<"Enter Time (s): ";
cin>>time;

finalvelocity = (acceleration * time) + intvelocity;

cout<<"Final Velocity (m/s) = "<<finalvelocity;

}

