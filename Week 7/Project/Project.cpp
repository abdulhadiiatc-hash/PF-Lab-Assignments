#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int index = 0;

    // data structure
    string nameArray[100];
    string fatherNameArray[100];
    string birthDateArray[100];
    int birthYearArray[100];
    int ageArray[100];
    string ageGroupArray[100];
    string passportNumberArray[100];
    string expiryDateArray[100];
    int packageOptionArray[100];

    while (true)
    {
        system("cls");
        cout << "---Umrah Booking Management System---" << endl;

        cout << "User Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Client" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose Option: ";
        int userOption;
        cin >> userOption;

        if (userOption == 1)
        {
            // admin login
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "---Welcome to UBMS---\n-----Admin Menu-----" << endl;
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
                        cout << "1. Show All Clients" << endl;
                        cout << "2. Search Client" << endl;
                        cout << "3. Add Client Record" << endl;
                        cout << "4. Update Client Record" << endl;
                        cout << "5. Delete Client Record" << endl;
                        cout << "6. Sort Clients by Name" << endl;
                        cout << "7. Package Summary" << endl;
                        cout << "8. Export Report" << endl;
                        cout << "9. Logout" << endl;
                        cout << "Choose any Option: ";
                        int adminOption;
                        cin >> adminOption;

                        if (adminOption == 1)
                        {
                            // show all clients
                            if (index == 0)
                            {
                                cout << "No records found." << endl;
                            }
                            else
                            {
                                cout << "Name\tFather\tDOB\tAge\tGroup\tPassport\tExpiry\tPackage" << endl;
                                for (int i = 0; i < index; i++)
                                {
                                    if (nameArray[i] != "")
                                    {
                                        cout << nameArray[i] << "\t" << fatherNameArray[i] << "\t" << birthDateArray[i] << "\t" << ageArray[i] << "\t" << ageGroupArray[i] << "\t" << passportNumberArray[i] << "\t" << expiryDateArray[i] << "\t" << packageOptionArray[i] << endl;
                                    }
                                }
                            }
                        }
                        else if (adminOption == 2)
                        {
                            // search client by name
                            cout << "Enter the Client's Name whom you want to search: ";
                            cin.ignore();
                            string name;
                            getline(cin, name);
                            bool namefound = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    namefound = true;
                                    break;
                                }
                            }
                            if (namefound == false)
                            {
                                cout << "Record not found against the name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tFather\tDOB\tAge\tGroup\tPassport\tExpiry\tPackage" << endl;
                                cout << nameArray[foundindex] << "\t" << fatherNameArray[foundindex] << "\t" << birthDateArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << ageGroupArray[foundindex] << "\t" << passportNumberArray[foundindex] << "\t" << expiryDateArray[foundindex] << "\t" << packageOptionArray[foundindex] << endl;
                            }
                        }
                        else if (adminOption == 3)
                        {
                            // add client record
                            cin.ignore();
                            cout << "Enter Name: ";
                            string name;
                            getline(cin, name);
                            cout << "Enter Father Name: ";
                            string fatherName;
                            getline(cin, fatherName);
                            cout << "Enter Date of Birth: ";
                            string birthDate;
                            getline(cin, birthDate);

                            int birthYear;
                            while (true)
                            {
                                cout << "Enter Birth Year: ";
                                cin >> birthYear;
                                if (2026 - birthYear < 0)
                                {
                                    cout << "Invalid Birth Year! Try Again." << endl;
                                }
                                else
                                {
                                    break;
                                }
                            }

                            int age = 2026 - birthYear;
                            string ageGroup;
                            if (age >= 0 && age <= 2)
                            {
                                ageGroup = "Infant";
                            }
                            else if (age > 2 && age <= 12)
                            {
                                ageGroup = "Child";
                            }
                            else
                            {
                                ageGroup = "Adult";
                            }

                            cin.ignore();
                            cout << "Enter Passport Number: ";
                            string passportNumber;
                            getline(cin, passportNumber);
                            cout << "Enter Expiry Date: ";
                            string expiryDate;
                            getline(cin, expiryDate);

                            cout << "1. Economy  - PKR 250,000" << endl;
                            cout << "2. 3 Star   - PKR 350,000" << endl;
                            cout << "3. 4 Star   - PKR 500,000" << endl;
                            cout << "4. 5 Star   - PKR 800,000" << endl;
                            int packageOption;
                            while (true)
                            {
                                cout << "Select Package (1-4): ";
                                cin >> packageOption;
                                if (packageOption == 1 || packageOption == 2 || packageOption == 3 || packageOption == 4)
                                {
                                    break;
                                }
                                else
                                {
                                    cout << "Wrong Input, Please choose 1 to 4" << endl;
                                }
                            }

                            nameArray[index] = name;
                            fatherNameArray[index] = fatherName;
                            birthDateArray[index] = birthDate;
                            birthYearArray[index] = birthYear;
                            ageArray[index] = age;
                            ageGroupArray[index] = ageGroup;
                            passportNumberArray[index] = passportNumber;
                            expiryDateArray[index] = expiryDate;
                            packageOptionArray[index] = packageOption;
                            index++;

                            cout << "Client added successfully!" << endl;
                        }
                        else if (adminOption == 4)
                        {
                            // update client record
                            cout << "Enter the Client's Name whom you want to update: ";
                            cin.ignore();
                            string name;
                            getline(cin, name);
                            bool namefound = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    namefound = true;
                                    break;
                                }
                            }
                            if (namefound == true)
                            {
                                cout << "-----Old Record-----" << endl;
                                cout << "Name\tFather\tDOB\tAge\tGroup\tPassport\tExpiry\tPackage" << endl;
                                cout << nameArray[foundindex] << "\t" << fatherNameArray[foundindex] << "\t" << birthDateArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << ageGroupArray[foundindex] << "\t" << passportNumberArray[foundindex] << "\t" << expiryDateArray[foundindex] << "\t" << packageOptionArray[foundindex] << endl;

                                cout << "Enter the new details to update record" << endl;
                                cout << "Enter Name: ";
                                string newName;
                                getline(cin, newName);
                                cout << "Enter Father Name: ";
                                string newFatherName;
                                getline(cin, newFatherName);
                                cout << "Enter Date of Birth: ";
                                string newBirthDate;
                                getline(cin, newBirthDate);

                                int newBirthYear;
                                while (true)
                                {
                                    cout << "Enter Birth Year: ";
                                    cin >> newBirthYear;
                                    if (2026 - newBirthYear < 0)
                                    {
                                        cout << "Invalid Birth Year! Try Again." << endl;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }

                                int newAge = 2026 - newBirthYear;
                                string newAgeGroup;
                                if (newAge >= 0 && newAge <= 2)
                                {
                                    newAgeGroup = "Infant";
                                }
                                else if (newAge > 2 && newAge <= 12)
                                {
                                    newAgeGroup = "Child";
                                }
                                else
                                {
                                    newAgeGroup = "Adult";
                                }

                                cin.ignore();
                                cout << "Enter Passport Number: ";
                                string newPassportNumber;
                                getline(cin, newPassportNumber);
                                cout << "Enter Expiry Date: ";
                                string newExpiryDate;
                                getline(cin, newExpiryDate);

                                cout << "1. Economy  - PKR 250,000" << endl;
                                cout << "2. 3 Star   - PKR 350,000" << endl;
                                cout << "3. 4 Star   - PKR 500,000" << endl;
                                cout << "4. 5 Star   - PKR 800,000" << endl;
                                int newPackageOption;
                                while (true)
                                {
                                    cout << "Select Package (1-4): ";
                                    cin >> newPackageOption;
                                    if (newPackageOption == 1 || newPackageOption == 2 || newPackageOption == 3 || newPackageOption == 4)
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "Wrong Input, Please choose 1 to 4" << endl;
                                    }
                                }

                                nameArray[foundindex] = newName;
                                fatherNameArray[foundindex] = newFatherName;
                                birthDateArray[foundindex] = newBirthDate;
                                birthYearArray[foundindex] = newBirthYear;
                                ageArray[foundindex] = newAge;
                                ageGroupArray[foundindex] = newAgeGroup;
                                passportNumberArray[foundindex] = newPassportNumber;
                                expiryDateArray[foundindex] = newExpiryDate;
                                packageOptionArray[foundindex] = newPackageOption;

                                cout << "The Client's data has been updated successfully" << endl;
                            }
                            else
                            {
                                cout << "Record not found against the name " << name << endl;
                            }
                        }
                        else if (adminOption == 5)
                        {
                            // delete client record
                            cout << "Enter the Client's Name whom you want to delete: ";
                            cin.ignore();
                            string name;
                            getline(cin, name);
                            bool namefound = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    namefound = true;
                                    break;
                                }
                            }
                            if (namefound == true)
                            {
                                for (int i = foundindex; i < index - 1; i++)
                                {
                                    nameArray[i] = nameArray[i + 1];
                                    fatherNameArray[i] = fatherNameArray[i + 1];
                                    birthDateArray[i] = birthDateArray[i + 1];
                                    birthYearArray[i] = birthYearArray[i + 1];
                                    ageArray[i] = ageArray[i + 1];
                                    ageGroupArray[i] = ageGroupArray[i + 1];
                                    passportNumberArray[i] = passportNumberArray[i + 1];
                                    expiryDateArray[i] = expiryDateArray[i + 1];
                                    packageOptionArray[i] = packageOptionArray[i + 1];
                                }
                                index--;
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
                            // sort clients by name
                            if (index == 0)
                            {
                                cout << "No records found." << endl;
                            }
                            else
                            {
                                for (int i = 0; i < index; i++)
                                {
                                    for (int j = i + 1; j < index; j++)
                                    {
                                        if (nameArray[i] > nameArray[j])
                                        {
                                            string tempName = nameArray[i];
                                            nameArray[i] = nameArray[j];
                                            nameArray[j] = tempName;

                                            string tempFather = fatherNameArray[i];
                                            fatherNameArray[i] = fatherNameArray[j];
                                            fatherNameArray[j] = tempFather;

                                            string tempDOB = birthDateArray[i];
                                            birthDateArray[i] = birthDateArray[j];
                                            birthDateArray[j] = tempDOB;

                                            int tempBirthYear = birthYearArray[i];
                                            birthYearArray[i] = birthYearArray[j];
                                            birthYearArray[j] = tempBirthYear;

                                            int tempAge = ageArray[i];
                                            ageArray[i] = ageArray[j];
                                            ageArray[j] = tempAge;

                                            string tempAgeGroup = ageGroupArray[i];
                                            ageGroupArray[i] = ageGroupArray[j];
                                            ageGroupArray[j] = tempAgeGroup;

                                            string tempPassport = passportNumberArray[i];
                                            passportNumberArray[i] = passportNumberArray[j];
                                            passportNumberArray[j] = tempPassport;

                                            string tempExpiry = expiryDateArray[i];
                                            expiryDateArray[i] = expiryDateArray[j];
                                            expiryDateArray[j] = tempExpiry;

                                            int tempPackage = packageOptionArray[i];
                                            packageOptionArray[i] = packageOptionArray[j];
                                            packageOptionArray[j] = tempPackage;
                                        }
                                    }
                                }

                                cout << "Clients sorted by Name (A to Z):" << endl;
                                cout << "Name\tFather\tAge\tGroup\tPackage" << endl;
                                for (int i = 0; i < index; i++)
                                {
                                    cout << nameArray[i] << "\t" << fatherNameArray[i] << "\t" << ageArray[i] << "\t" << ageGroupArray[i] << "\t" << packageOptionArray[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == 7)
                        {
                            // package summary
                            int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
                            for (int i = 0; i < index; i++)
                            {
                                if (packageOptionArray[i] == 1)
                                {
                                    c1++;
                                }
                                else if (packageOptionArray[i] == 2)
                                {
                                    c2++;
                                }
                                else if (packageOptionArray[i] == 3)
                                {
                                    c3++;
                                }
                                else if (packageOptionArray[i] == 4)
                                {
                                    c4++;
                                }
                            }
                            cout << "Total Clients : " << index << endl;
                            cout << "Economy : " << c1 << " clients" << endl;
                            cout << "3 Star  : " << c2 << " clients" << endl;
                            cout << "4 Star  : " << c3 << " clients" << endl;
                            cout << "5 Star  : " << c4 << " clients" << endl;
                        }
                        else if (adminOption == 8)
                        {
                            // export report
                            cout << "Total Records: " << index << endl;
                            if (index == 0)
                            {
                                cout << "No records to export." << endl;
                            }
                            else
                            {
                                for (int i = 0; i < index; i++)
                                {
                                    if (nameArray[i] != "")
                                    {
                                        cout << i + 1 << ". " << nameArray[i] << " | " << ageGroupArray[i] << " | Package " << packageOptionArray[i] << endl;
                                    }
                                }
                            }
                        }
                        else if (adminOption == 9)
                        {
                            // logout
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
            // client menu
            while (true)
            {
                system("cls");
                cout << "---Welcome to UBMS---\n----Client Menu----" << endl;
                cout << "1. Enter My Details" << endl;
                cout << "2. View My Details" << endl;
                cout << "3. View Package Details" << endl;
                cout << "4. Change My Package" << endl;
                cout << "5. View Booking Summary" << endl;
                cout << "6. View Age Group Info" << endl;
                cout << "7. Exit" << endl;
                cout << "Choose any Option: ";
                int clientOption;
                cin >> clientOption;

                if (clientOption == 1)
                {
                    // enter client details
                    system("cls");
                    cout << "---Enter Your Details---" << endl;
                    cin.ignore();
                    cout << "Enter Name: ";
                    string name;
                    getline(cin, name);
                    cout << "Enter Father Name: ";
                    string fatherName;
                    getline(cin, fatherName);
                    cout << "Enter Date of Birth: ";
                    string birthDate;
                    getline(cin, birthDate);

                    int birthYear;
                    while (true)
                    {
                        cout << "Enter Birth Year: ";
                        cin >> birthYear;
                        if (2026 - birthYear < 0)
                        {
                            cout << "Invalid Birth Year! Try Again." << endl;
                        }
                        else
                        {
                            break;
                        }
                    }

                    int age = 2026 - birthYear;
                    string ageGroup;
                    if (age >= 0 && age <= 2)
                    {
                        ageGroup = "Infant";
                    }
                    else if (age > 2 && age <= 12)
                    {
                        ageGroup = "Child";
                    }
                    else
                    {
                        ageGroup = "Adult";
                    }

                    cin.ignore();
                    cout << "Enter Passport Number: ";
                    string passportNumber;
                    getline(cin, passportNumber);
                    cout << "Enter Expiry Date: ";
                    string expiryDate;
                    getline(cin, expiryDate);

                    cout << "1. Economy  - PKR 250,000" << endl;
                    cout << "2. 3 Star   - PKR 350,000" << endl;
                    cout << "3. 4 Star   - PKR 500,000" << endl;
                    cout << "4. 5 Star   - PKR 800,000" << endl;
                    int packageOption;
                    while (true)
                    {
                        cout << "Select Package (1-4): ";
                        cin >> packageOption;
                        if (packageOption == 1 || packageOption == 2 || packageOption == 3 || packageOption == 4)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong Input, Please choose 1 to 4" << endl;
                        }
                    }

                    nameArray[index] = name;
                    fatherNameArray[index] = fatherName;
                    birthDateArray[index] = birthDate;
                    birthYearArray[index] = birthYear;
                    ageArray[index] = age;
                    ageGroupArray[index] = ageGroup;
                    passportNumberArray[index] = passportNumber;
                    expiryDateArray[index] = expiryDate;
                    packageOptionArray[index] = packageOption;
                    index++;

                    cout << "Your details have been stored successfully" << endl;
                }
                else if (clientOption == 2)
                {
                    // view my details
                    system("cls");
                    if (index == 0)
                    {
                        cout << "No details entered yet." << endl;
                    }
                    else
                    {
                        cout << "Name     : " << nameArray[index - 1] << endl;
                        cout << "Father   : " << fatherNameArray[index - 1] << endl;
                        cout << "DOB      : " << birthDateArray[index - 1] << endl;
                        cout << "Age      : " << ageArray[index - 1] << " (" << ageGroupArray[index - 1] << ")" << endl;
                        cout << "Passport : " << passportNumberArray[index - 1] << endl;
                        cout << "Expiry   : " << expiryDateArray[index - 1] << endl;
                        cout << "Package  : " << packageOptionArray[index - 1] << endl;
                    }
                }
                else if (clientOption == 3)
                {
                    // view package details
                    system("cls");
                    cout << "Economy : 10 Days | PIA | Shuttle Inn Makkah | PKR 250,000" << endl;
                    cout << "3 Star  : 14 Days | Emirates | Al Massa Makkah | PKR 350,000" << endl;
                    cout << "4 Star  : 17 Days | Saudi Airlines | Conrad Makkah | PKR 500,000" << endl;
                    cout << "5 Star  : 21 Days | Qatar Airways | Swissotel Makkah | PKR 800,000" << endl;
                }
                else if (clientOption == 4)
                {
                    // change my package
                    system("cls");
                    if (index == 0)
                    {
                        cout << "No records found." << endl;
                    }
                    else
                    {
                        int packageOption;
                        while (true)
                        {
                            cout << "Select New Package (1-4): ";
                            cin >> packageOption;
                            if (packageOption == 1 || packageOption == 2 || packageOption == 3 || packageOption == 4)
                            {
                                packageOptionArray[index - 1] = packageOption;
                                cout << "Package updated successfully!" << endl;
                                break;
                            }
                            else
                            {
                                cout << "Wrong Input, Please choose 1 to 4" << endl;
                            }
                        }
                    }
                }
                else if (clientOption == 5)
                {
                    // view booking summary
                    system("cls");
                    if (index == 0)
                    {
                        cout << "No details entered yet." << endl;
                    }
                    else
                    {
                        cout << "Name    : " << nameArray[index - 1] << endl;
                        cout << "Age     : " << ageArray[index - 1] << " (" << ageGroupArray[index - 1] << ")" << endl;
                        cout << "Passport: " << passportNumberArray[index - 1] << endl;
                        if (packageOptionArray[index - 1] == 1)
                        {
                            cout << "Package : Economy - PKR 250,000" << endl;
                        }
                        else if (packageOptionArray[index - 1] == 2)
                        {
                            cout << "Package : 3 Star - PKR 350,000" << endl;
                        }
                        else if (packageOptionArray[index - 1] == 3)
                        {
                            cout << "Package : 4 Star - PKR 500,000" << endl;
                        }
                        else if (packageOptionArray[index - 1] == 4)
                        {
                            cout << "Package : 5 Star - PKR 800,000" << endl;
                        }
                        cout << endl
                             << "Thank you for choosing us!" << endl;
                    }
                }
                else if (clientOption == 6)
                {
                    // view age group info
                    system("cls");
                    cout << "Infant : 0-2 years   (No seat)" << endl;
                    cout << "Child  : 3-12 years  (Child fare)" << endl;
                    cout << "Adult  : 13+ years   (Full fare)" << endl;
                    cout << "Age = 2026 - Birth Year" << endl;
                }
                else if (clientOption == 7)
                {
                    // exit client menu
                    cout << "Thank you for choosing us for your prestigious journey!" << endl;
                    getch();
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
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << "You chose the wrong option" << endl;
        }
    }

    cout << "Thanks for using Umrah Booking Management System" << endl;
}