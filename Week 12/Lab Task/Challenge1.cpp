#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp = 0;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    swap(*ptr1, *ptr2);
    cout << a << " " << b;
}