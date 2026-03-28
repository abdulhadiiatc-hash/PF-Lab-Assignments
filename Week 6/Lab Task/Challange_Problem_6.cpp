#include <iostream>
using namespace std;
int main()
{
    string correct_user = "admin";
    int correct_pass = 1234;
    string usernames[3];
    bool login = false;

    for (int i = 0; i < 3; i++)
    {
        string uname;
        int pass;
        cout << "Enter username: ";
        cin >> uname;
        cout << "Enter password: ";
        cin >> pass;
        usernames[i] = uname;
        if (uname == correct_user && pass == correct_pass)
        {
            cout << "Login Successful!" << endl;
            login = true;
            break;
        }
        else
            cout << "Invalid credentials!" << endl;
    }

    if (login)
    {
        string student_names[3];
        int student_ages[3];
        string courses[3];
        int s_count = 0, c_count = 0;
        int choice;

        while (true)
        {
            cout << "\n--- University Menu ---" << endl;
            cout << "1. Add Student" << endl;
            cout << "2. View Students" << endl;
            cout << "3. Add Course" << endl;
            cout << "4. View Courses" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 1)
            {
                if (s_count < 3)
                {
                    cout << "Enter student name: ";
                    cin >> student_names[s_count];
                    cout << "Enter student age: ";
                    cin >> student_ages[s_count];
                    s_count++;
                }
                else
                    cout << "Student limit reached!" << endl;
            }
            else if (choice == 2)
            {
                for (int i = 0; i < s_count; i++)
                    cout << student_names[i] << " - Age: " << student_ages[i] << endl;
            }
            else if (choice == 3)
            {
                if (c_count < 3)
                {
                    cout << "Enter course name: ";
                    cin >> courses[c_count];
                    c_count++;
                }
                else
                    cout << "Course limit reached!" << endl;
            }
            else if (choice == 4)
            {
                for (int i = 0; i < c_count; i++)
                    cout << courses[i] << endl;
            }
            else if (choice == 5)
            {
                cout << "Goodbye!" << endl;
                break;
            }
            else
                cout << "Invalid choice!" << endl;
        }
    }
    else
        cout << "Access Denied." << endl;
}