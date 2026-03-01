#include <iostream>
using namespace std;

main()
{
int hour;
int min = 60;
int sec = 60;
int hourtosec;
cout<<"Enter the number of hours: ";
cin>>hour;
hourtosec = hour * min * sec;

cout<<hour<<" hours is equivalent to "<<hourtosec<<" seconds";

}
