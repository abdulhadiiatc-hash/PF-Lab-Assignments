#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int totalStudents = 100; // total size
    int index = 14;
    // data structure
    string nameArray[totalStudents] = {"ali", "ammar", "ayesha", "noor", "usman", "sana", "bilal", "hira", "talha", "zara", "hamza", "sara", "fahad", "maryam", "omer"};
    int agesArray[totalStudents] = {19, 20, 18, 17, 21, 19, 20, 18, 22, 19, 20, 18, 21, 19, 20};
    float matricMarksArray[totalStudents] = {800, 900, 1015, 1099, 850, 950, 780, 1020, 920, 860, 990, 1050, 810, 970, 1080};
    float interMarksArray[totalStudents] = {345, 390, 415, 485, 360, 420, 330, 440, 400, 370, 410, 460, 350, 430, 470};
    float ecatMarksArray[totalStudents] = {200, 230, 267, 310, 220, 280, 190, 295, 240, 210, 260, 300, 205, 275, 320};
    string preferences1Array[totalStudents] = {"CS", "CE", "EE", "CS", "CS", "EE", "CE", "CS", "EE", "CS", "CE", "CS", "EE", "CE", "CS"};
    string preferences2Array[totalStudents] = {"CE", "EE", "CS", "CE", "EE", "CS", "CS", "CE", "CS", "CE", "CS", "EE", "CS", "CS", "CE"};
    string preferences3Array[totalStudents] = {"EE", "CS", "CE", "EE", "CE", "CE", "EE", "EE", "CE", "EE", "EE", "CE", "CE", "EE", "EE"};
    float aggregatesArray[totalStudents];

    while (true)
    {
        // main header of the ums
        system("cls");
        cout << "|------------------------------------------------------ --|" << endl;
        cout << "|----------University Admission Managment System----------|" << endl;
        cout << "|---------------------------------------------------------|" << endl;

        cout << "User Menu " << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. to Exit" << endl;
        cout << "Choose Option: ";
        int userOption;
        cin >> userOption;

        cout << "You Choose " << userOption << endl;
        if (userOption == 1)
        {
            // write the admin code here
            for (int i = 0; i < 3; i++)
            {

                system("cls");
                cout << "---Welcome to UMS---\n-----Admin Menu-----" << endl;
                cout << "Login Attempt " << i + 1 << endl;
                cout << "Enter Username: ";
                string username;
                cin >> username;
                cout << "Enter Password: ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Logged in successfully" << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students" << endl;
                        cout << "2. Search Students" << endl;
                        cout << "3. Update Student Record" << endl;
                        cout << "4. Generate Merit List" << endl;
                        cout << "5. Delete Student Record" << endl;
                        cout << "6. Log out" << endl;
                        cout << "Choose any Option: ";
                        int adminOption;
                        cin >> adminOption;
                        if (adminOption == 1)
                        {
                            // show student record
                            cout << "Name\tAge\tMatric\tInter\tECAT\tPref1\tPref2\tPref3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << agesArray[i] << "\t" << matricMarksArray[i] << "\t" << interMarksArray[i] << "\t" << ecatMarksArray[i] << "\t" << preferences1Array[i] << "\t" << preferences2Array[i] << "\t" << preferences3Array[i] << "\t" << endl;
                                }
                            }
                        }
                        else if (adminOption == 2)
                        {
                            // search student by name funcition
                            cout << "Enter the Students's Name whom you want to search: ";
                            string name;
                            cin >> name;
                            bool namefound = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    namefound = true;
                                }
                            }
                            if (namefound == false)
                            {
                                cout << "Record not found against the name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tInter\tECAT\tPref1\tPref2\tPref3" << endl;
                                cout << nameArray[foundindex] << "\t" << agesArray[foundindex] << "\t" << matricMarksArray[foundindex] << "\t" << interMarksArray[foundindex] << "\t" << ecatMarksArray[foundindex] << "\t" << preferences1Array[foundindex] << "\t" << preferences2Array[foundindex] << "\t" << preferences3Array[foundindex] << "\t" << endl;
                            }
                        }
                        else if (adminOption == 3)
                        {
                            // update student record
                            cout << "Enter the Students's Name whom you want to update: ";
                            string name;
                            cin >> name;
                            bool namefound = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    namefound = true;
                                }
                            }
                            if (namefound == true)
                            {
                                cout << "-----Old Record-----" << endl;
                                cout << "Name\tAge\tMatric\tInter\tECAT\tPref1\tPref2\tPref3" << endl;
                                cout << nameArray[foundindex] << "\t" << agesArray[foundindex] << "\t" << matricMarksArray[foundindex] << "\t" << interMarksArray[foundindex] << "\t" << ecatMarksArray[foundindex] << "\t" << preferences1Array[foundindex] << "\t" << preferences2Array[foundindex] << "\t" << preferences3Array[foundindex] << "\t" << endl;

                                cout << "Enter the new details to update record" << endl;
                                cout << "Enter your Name: ";
                                string name;
                                cin >> name;
                                cout << "Enter Age: ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks: ";
                                float matricMarks;
                                cin >> matricMarks;
                                cout << "Enter Intermediate Marks: ";
                                float interMarks;
                                cin >> interMarks;
                                cout << "Enter ECAT Marks: ";
                                float ecatMarks;
                                cin >> ecatMarks;

                                string preference1;
                                string preference2;
                                string preference3;

                                cout << "Enter CS, CE or EE as your preferences" << endl;
                                while (true)
                                {
                                    cout << "Enter Your 1st Preference: ";
                                    cin >> preference1;
                                    if (preference1 == "CS" || preference1 == "CE" || preference1 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "Wrong Input, Please enter CS, CE or EE" << endl;
                                    }
                                }
                                while (true)
                                {
                                    cout << "Enter Your 2nd Preference: ";
                                    cin >> preference2;
                                    if (preference2 == "CS" || preference2 == "CE" || preference2 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "Wrong Input, Please enter CS, CE or EE" << endl;
                                    }
                                }
                                while (true)
                                {
                                    cout << "Enter Your 3rd Preference: ";
                                    cin >> preference3;
                                    if (preference3 == "CS" || preference3 == "CE" || preference3 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "Wrong Input, Please enter CS, CE or EE" << endl;
                                    }
                                }
                                nameArray[foundindex] = name;
                                agesArray[foundindex] = age;
                                matricMarksArray[foundindex] = matricMarks;
                                interMarksArray[foundindex] = interMarks;
                                ecatMarksArray[foundindex] = ecatMarks;
                                preferences1Array[foundindex] = preference1;
                                preferences2Array[foundindex] = preference2;
                                preferences3Array[foundindex] = preference3;

                                cout << "The Student's data has been updated successfully" << endl;
                            }
                            else
                            {
                                cout << "Record not found against the name " << name;
                            }
                        }
                        else if (adminOption == 4)
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggregate = (matricMarksArray[i] / 1100.0 * 100.0 * 0.17) + (interMarksArray[i] / 550.0 * 100.0 * 0.50) + (ecatMarksArray[i] / 400.0 * 100.0 * 0.33);
                                aggregatesArray[i] = aggregate;
                            }
                            
                            // code to display sorted data
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggregatesArray[i] < aggregatesArray[j])
                                    {
                                        // swapping of name
                                        string tempName = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = tempName;

                                        // swapping of age
                                        int tempAge = agesArray[i];
                                        agesArray[i] = agesArray[j];
                                        agesArray[j] = tempAge;

                                        // swapping of matric
                                        float tempMatric = matricMarksArray[i];
                                        matricMarksArray[i] = matricMarksArray[j];
                                        matricMarksArray[j] = tempMatric;

                                        // swapping of inter
                                        float tempInter = interMarksArray[i];
                                        interMarksArray[i] = interMarksArray[j];
                                        interMarksArray[j] = tempInter;

                                        // swapping of ecat
                                        float tempEcat = ecatMarksArray[i];
                                        ecatMarksArray[i] = ecatMarksArray[j];
                                        ecatMarksArray[j] = tempEcat;

                                        // swapping of preference1
                                        string tempPref1 = preferences1Array[i];
                                        preferences1Array[i] = preferences1Array[j];
                                        preferences1Array[j] = tempPref1;

                                        // swapping of preference2
                                        string tempPref2 = preferences2Array[i];
                                        preferences2Array[i] = preferences2Array[j];
                                        preferences2Array[j] = tempPref2;

                                        // swapping of preference3
                                        string tempPref3 = preferences3Array[i];
                                        preferences3Array[i] = preferences3Array[j];
                                        preferences3Array[j] = tempPref3;

                                        // swapping of aggregate
                                        float tempAggregate = aggregatesArray[i];
                                        aggregatesArray[i] = aggregatesArray[j];
                                        aggregatesArray[j] = tempAggregate;
                                    }
                                }
                            }
                            cout << "Name\tAge\tMatric\tInter\tECAT\tPref1\tPref2\tPref3\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                cout << nameArray[i] << "\t" << agesArray[i] << "\t" << matricMarksArray[i] << "\t" << interMarksArray[i] << "\t" << ecatMarksArray[i] << "\t" << preferences1Array[i] << "\t" << preferences2Array[i] << "\t" << preferences3Array[i] << "\t" << aggregatesArray[i] << "%" << endl;
                            }
                        }
                        else if (adminOption == 5)
                        {
                            // delete student record
                            cout << "Enter the Students's Name whom you want to delete: ";
                            string name;
                            cin >> name;
                            bool namefound = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    namefound = true;
                                }
                            }
                            if (namefound == true)
                            {
                                nameArray[foundindex] = "";
                                agesArray[foundindex] = 0;
                                matricMarksArray[foundindex] = 0;
                                interMarksArray[foundindex] = 0;
                                ecatMarksArray[foundindex] = 0;
                                preferences1Array[foundindex] = "";
                                preferences2Array[foundindex] = "";
                                preferences3Array[foundindex] = "";
                                cout << endl
                                     << "Record of " << name << " deleted successfully." << endl;
                            }
                            else
                            {
                                cout << "Record not found against the name " << name << endl;
                            }
                        }
                        else if (adminOption == 6)
                        {
                            // back to login page
                            break;
                        }
                        else
                        {
                            cout << "Invalid Option, Please choose one of the options mentioned above." << endl;
                        }
                        cout << endl
                             << "Press any Key to Continue..." << endl;
                        getch();
                    }
                    cout << endl
                         << "Press any Key to Continue..." << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Username and Password is Invalid" << endl;
                }
                cout << "Press any key to continue...";

                getch();
            }
        }
        else if (userOption == 2)
        {
            // write the student code here
            system("cls");
            cout << "---Welcome to UMS---\n----Student Menu----" << endl;
            cout << "Enter your Name: ";
            string name;
            cin >> name;
            cout << "Enter Age: ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks: ";
            float matricMarks;
            cin >> matricMarks;
            cout << "Enter Intermediate Marks: ";
            float interMarks;
            cin >> interMarks;
            cout << "Enter ECAT Marks: ";
            float ecatMarks;
            cin >> ecatMarks;

            string preference1;
            string preference2;
            string preference3;

            cout << "Enter CS, CE or EE as your preferences" << endl;
            while (true)
            {
                cout << "Enter Your 1st Preference: ";
                cin >> preference1;
                if (preference1 == "CS" || preference1 == "CE" || preference1 == "EE")
                {
                    break;
                }
                else
                {
                    cout << "Wrong Input, Please enter CS, CE or EE" << endl;
                }
            }
            while (true)
            {
                cout << "Enter Your 2nd Preference: ";
                cin >> preference2;
                if (preference2 == "CS" || preference2 == "CE" || preference2 == "EE")
                {
                    break;
                }
                else
                {
                    cout << "Wrong Input, Please enter CS, CE or EE" << endl;
                }
            }
            while (true)
            {
                cout << "Enter Your 3rd Preference: ";
                cin >> preference3;
                if (preference3 == "CS" || preference3 == "CE" || preference3 == "EE")
                {
                    break;
                }
                else
                {
                    cout << "Wrong Input, Please enter CS, CE or EE" << endl;
                }
            }

            nameArray[index] = name;
            agesArray[index] = age;
            matricMarksArray[index] = matricMarks;
            interMarksArray[index] = interMarks;
            ecatMarksArray[index] = ecatMarks;
            preferences1Array[index] = preference1;
            preferences2Array[index] = preference2;
            preferences3Array[index] = preference3;
            index++;

            cout << "Your Data has been stored successfully" << endl;
            cout << "Press any key to continue...";

            getch();
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << "You choose the wrong option" << endl;
        }
    }
    cout << "Thanks for using this software" << endl;
}