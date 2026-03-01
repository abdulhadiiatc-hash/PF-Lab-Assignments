#include<iostream>
using namespace std;
main()
{
float vegecost;
float fruitcost;
int vegekg;
int fruitkg;
float rupee = 1.94;
float totalcoins;
float totalearninrupee;

cout<<"Enter vegetable price per kilograms(in coins): ";
cin>>vegecost;
cout<<"Enter fruit price per kilograms(in coins): ";
cin>>fruitcost;
cout<<"Enter total kilograms of vegetables: ";
cin>>vegekg;
cout<<"Enter total kilograms of fruits: ";
cin>>fruitkg;

totalcoins = (vegecost*vegekg) + (fruitcost*fruitkg);
totalearninrupee = totalcoins / rupee;

cout<<"Total earnings in Rupees (Rps): "<<totalearninrupee;


}