#include <iostream>
using namespace std;

main()
{
string name;
int adulttkt;
int childtkt;
int adultcost;
int childcost;
float percent;
int total;
float donation;
int totalafterdonation;

cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>adultcost;
cout<<"Enter the child ticket price: $";
cin>>childcost;
cout<<"Enter the number of adult tickets sold: ";
cin>>adulttkt;
cout<<"Enter the number of child tickets sold: ";
cin>>childtkt;
cout<<"Enter the percentage of amount to be donated to charity: %";
cin>>percent;

total = (adulttkt*adultcost) + (childtkt*childcost);
donation = total*(percent/100);
totalafterdonation = total - donation;

cout<<"------------------------------------"<<endl;
cout<<"Total Amount Generated from ticket sales: $"<<total<<endl;
cout<<"Donation to Charity("<<percent<<"): $"<<donation<<endl;
cout<<"Remaining amount after the donation: $"<<totalafterdonation;
}

