#include<iostream>
using namespace std;
main()
{
    int num, fact = 1;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"Factorial("<<num<<") = ";
    for (int i = num; i >=1; i--)
    {
        cout<<num;
        fact = fact * num;
        num = num - 1;
        if (i>1)
        {
            cout<<" x ";
        }
    }
    cout<<" = "<<fact;

}
