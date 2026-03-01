#include <iostream>
using namespace std;

main()
{
string name;
int weightloss;
int days;

cout<<"Enter the Name of the Person: ";
cin>>name;

cout<<"Enter the target weight loss in kilograms: ";
cin>>weightloss;

days = weightloss * 15;

cout<<name<<" will need "<<days<<" to lose "<<weightloss<<" kg of weight by following the doctos's sugguestions.";


}

