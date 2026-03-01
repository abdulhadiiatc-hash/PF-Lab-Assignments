#include <iostream>
using namespace std;

main()
{
string name;
float obtainmatric;
float percentmatric;
float obtaininter;
float percentinter;
float obtainecat;
float percentecat;
float aggregate;

cout<<"Enter the Student's name: ";
cin>>name;
cout<<"Enter matriculation marks (out of 1100): ";
cin>>obtainmatric;
cout<<"Enter intermediate marks (out of 550): ";
cin>>obtaininter;
cout<<"Enter ECAT Marks (out of 400): ";
cin>>obtainecat;
percentmatric=(obtainmatric/1100) * 100 * 0.1 ;
percentinter=(obtaininter/550) * 100 * 0.5 ;
percentecat=(obtainecat/400) * 100 * 0.4;

aggregate = (percentmatric + percentinter + percentecat);

cout<<"Aggregate score for "<<name<<" is "<<aggregate<<"%";

}
