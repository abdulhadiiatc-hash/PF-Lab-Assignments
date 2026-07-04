#include <iostream>
using namespace std;
void input(string &line)
{
    cout << "Enter a line: ";
    getline(cin, line);
}
int lengthofstring(int &length, string line)
{
    int count = 0;
    for (int i = 0; line[i] != '\0'; i++) // null character (/0) ky dono side '' imp hai ku ky yeh ik character hai
    {
        count++;
    }
    length = count;
}
int main()
{
    string line;
    input(line);
    int length;
    lengthofstring(length, line);
    cout << "Length = " << length;
    return 0;
}