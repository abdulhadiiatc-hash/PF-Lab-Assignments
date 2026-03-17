#include <iostream>
using namespace std;
main()
{
    int multiple, table;
    cout<<"Enter the Number for table: ";
    cin>>table;
    for (int i = 1; i <=20; i++)
    {
        multiple = table * i;
        cout<<table<<" x "<<i<<" = "<<multiple<<endl;
    }
    
}
