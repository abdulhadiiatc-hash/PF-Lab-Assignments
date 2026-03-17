#include <iostream>
using namespace std;
int main()
{
    string username = "admin", name, course;
    int age, password = 1234, option;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter your Username: ";
        cin >> username;
        cout << "Enter your Password: ";
        cin >> password;
        if (username == "admin" && password == 1234)
        {
            cout << "Login Successfull\n" << endl;
            break;
        }
        if (i == 3 && !(username == "admin" && password == 1234))
        {
            cout << "Invalid Credentials! User Blocked" << endl;
            cout << "Program Ends" << endl;
            return 0;
        }
    }
    for (int j = 1; j <= 5; j++)
    {
        cout << "----University Management System----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Student" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Exit" << endl;
        cout << "\nChoose an option: ";
        cin >> option;
        if (option == 1)
        {
            cout << "\nEnter Student's Name: ";
            cin >> name;
            cout << "Enter Student's Age: ";
            cin >> age;
            cout << "Student Successfully added!\n"
                 << endl;
        }
        else if (option == 2)
        {
            cout << "\nStudent Name: " << name << endl;
            cout << "Student Age: " << age << "\n"
                 << endl;
        }
        else if (option == 3)
        {
            cout << "\nAdd Course: ";
            cin >> course;
            cout << "Course added successfully\n"
                 << endl;
        }
        else if (option == 4)
        {
            cout << "\nProgram Ends" << endl;
            break;
        }
    }
}