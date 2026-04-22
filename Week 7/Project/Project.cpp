#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // Data Structure
    int index = 0;
    int historyIndex = 0;
    int clientHistoryIndex = 0;

    string nameArray[100];
    string fatherNameArray[100];
    string birthDateArray[100];
    int birthYearArray[100];
    int ageArray[100];
    string ageGroupArray[100];
    string passportNumberArray[100];
    string expiryDateArray[100];
    char packageOptionArray[100];
    string historyArray[6];
    string clientHistoryArray[6];

    char userOption;

    while (true)
    {
        system("cls");

        // Main Menu
        cout << "|---------------------------------------------|" << endl;
        cout << "|-------Umrah Booking Management System-------|" << endl;
        cout << "|---------------------------------------------|" << endl;
        cout << "\nUser Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Client" << endl;
        cout << "3. Exit Application" << endl;
        cout << "Choose an Option: ";
        cin >> userOption;

        if (userOption == '1')
        {
            // Admin Login
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "|-------------------------------|" << endl;
                cout << "|--------Welcome to UBMS--------|" << endl;
                cout << "|-------------------------------|" << endl;
                cout << "Login attempt - " << i + 1 << endl;
                cout << "Enter Username: ";
                string username;
                cin >> username;
                cout << "Enter Password: ";
                string password;
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    cout << "Logged in Successfully" << endl;
                    getch();

                    while (true)
                    {
                        system("cls");

                        // Admin Menu
                        cout << "|-------------------------------|" << endl;
                        cout << "|----------Admin Menu-----------|" << endl;
                        cout << "|-------------------------------|" << endl;
                        cout << "1. Show All Clients" << endl;
                        cout << "2. Search Client" << endl;
                        cout << "3. Add Client Record" << endl;
                        cout << "4. Update Client Record" << endl;
                        cout << "5. Delete Client Record" << endl;
                        cout << "6. Generate Sorted List" << endl;
                        cout << "7. View Package Summary" << endl;
                        cout << "8. View Action History" << endl;
                        cout << "9. Export Report" << endl;
                        cout << "0. Logout" << endl;
                        cout << "Choose an Option: ";
                        char adminOption;
                        cin >> adminOption;
                        cin.ignore();

                        if (adminOption == '1')
                        {
                            system("cls");

                            // Show All Clients
                            cout << "|-------------------------------|" << endl;
                            cout << "|--------All Clients------------|" << endl;
                            cout << "|-------------------------------|" << endl;

                            if (index == 0)
                            {
                                cout << "No records found." << endl;
                            }
                            else
                            {
                                for (int i = 0; i < index; i++)
                                {
                                    cout << "\n#" << i + 1 << endl;
                                    cout << "Name     : " << nameArray[i] << endl;
                                    cout << "Father   : " << fatherNameArray[i] << endl;
                                    cout << "DOB      : " << birthDateArray[i] << endl;
                                    cout << "Age      : " << ageArray[i] << " (" << ageGroupArray[i] << ")" << endl;
                                    cout << "Passport : " << passportNumberArray[i] << endl;
                                    cout << "Expiry   : " << expiryDateArray[i] << endl;
                                    cout << "Package  : " << packageOptionArray[i] << endl;
                                    cout << "----------------------------" << endl;
                                }
                            }

                            historyArray[historyIndex] = "Viewed All Clients";
                            historyIndex++;
                            if (historyIndex >= 6) { historyIndex = 0; }

                            getch();
                        }
                        else if (adminOption == '2')
                        {
                            system("cls");

                            // Search Client
                            cout << "|-------------------------------|" << endl;
                            cout << "|--------Search Client----------|" << endl;
                            cout << "|-------------------------------|" << endl;
                            cout << "1. Search by Name" << endl;
                            cout << "2. Search by Passport Number" << endl;
                            cout << "Choose: ";
                            char searchOption;
                            cin >> searchOption;
                            cin.ignore();

                            cout << "Enter Search Term: ";
                            string searchTerm;
                            getline(cin, searchTerm);

                            int foundIndex = -1;

                            if (searchOption == '1')
                            {
                                for (int i = 0; i < index; i++)
                                {
                                    if (nameArray[i] == searchTerm)
                                    {
                                        foundIndex = i;
                                    }
                                }
                            }
                            else if (searchOption == '2')
                            {
                                for (int i = 0; i < index; i++)
                                {
                                    if (passportNumberArray[i] == searchTerm)
                                    {
                                        foundIndex = i;
                                    }
                                }
                            }
                            else
                            {
                                cout << "Wrong Input! Please Try Again" << endl;
                            }

                            if (foundIndex != -1)
                            {
                                cout << "\nRecord Found!" << endl;
                                cout << "Name     : " << nameArray[foundIndex] << endl;
                                cout << "Father   : " << fatherNameArray[foundIndex] << endl;
                                cout << "Age      : " << ageArray[foundIndex] << " (" << ageGroupArray[foundIndex] << ")" << endl;
                                cout << "Passport : " << passportNumberArray[foundIndex] << endl;
                                cout << "Package  : " << packageOptionArray[foundIndex] << endl;
                            }
                            else if (searchOption == '1' || searchOption == '2')
                            {
                                cout << "Record Not Found." << endl;
                            }

                            historyArray[historyIndex] = "Searched Client";
                            historyIndex++;
                            if (historyIndex >= 6) { historyIndex = 0; }

                            getch();
                        }
                        else if (adminOption == '3')
                        {
                            system("cls");

                            // Add Client Record
                            cout << "|-------------------------------|" << endl;
                            cout << "|------Add Client Record--------|" << endl;
                            cout << "|-------------------------------|" << endl;

                            cout << "Enter Name: ";
                            getline(cin, nameArray[index]);
                            cout << "Enter Father Name: ";
                            getline(cin, fatherNameArray[index]);
                            cout << "Enter Date of Birth: ";
                            getline(cin, birthDateArray[index]);
                            cout << "Enter Birth Year: ";
                            cin >> birthYearArray[index];
                            cin.ignore();

                            ageArray[index] = 2026 - birthYearArray[index];

                            if (ageArray[index] >= 0 && ageArray[index] <= 2)
                            {
                                ageGroupArray[index] = "Infant";
                            }
                            else if (ageArray[index] > 2 && ageArray[index] <= 12)
                            {
                                ageGroupArray[index] = "Child";
                            }
                            else
                            {
                                ageGroupArray[index] = "Adult";
                            }

                            cout << "Enter Passport Number: ";
                            getline(cin, passportNumberArray[index]);
                            cout << "Enter Expiry Date: ";
                            getline(cin, expiryDateArray[index]);

                            while (true)
                            {
                                cout << "\n1. Economy  - PKR 250,000" << endl;
                                cout << "2. 3 Star   - PKR 350,000" << endl;
                                cout << "3. 4 Star   - PKR 500,000" << endl;
                                cout << "4. 5 Star   - PKR 800,000" << endl;
                                cout << "Select Package (1-4): ";
                                cin >> packageOptionArray[index];
                                cin.ignore();

                                if (packageOptionArray[index] == '1' || packageOptionArray[index] == '2' ||
                                    packageOptionArray[index] == '3' || packageOptionArray[index] == '4')
                                {
                                    break;
                                }
                                else
                                {
                                    cout << "Wrong Input! Please Try Again" << endl;
                                }
                            }

                            index++;
                            cout << "\nClient added successfully!" << endl;

                            historyArray[historyIndex] = "Added Client Record";
                            historyIndex++;
                            if (historyIndex >= 6) { historyIndex = 0; }

                            getch();
                        }
                        else if (adminOption == '4')
                        {
                            system("cls");

                            // Update Client Record
                            cout << "|-------------------------------|" << endl;
                            cout << "|-----Update Client Record------|" << endl;
                            cout << "|-------------------------------|" << endl;

                            if (index == 0)
                            {
                                cout << "No records found." << endl;
                            }
                            else
                            {
                                cout << "Enter Record Number (1 to " << index << "): ";
                                int recordNum;
                                cin >> recordNum;
                                cin.ignore();

                                if (recordNum >= 1 && recordNum <= index)
                                {
                                    int pos = recordNum - 1;

                                    cout << "Enter Name: ";
                                    getline(cin, nameArray[pos]);
                                    cout << "Enter Father Name: ";
                                    getline(cin, fatherNameArray[pos]);
                                    cout << "Enter Date of Birth: ";
                                    getline(cin, birthDateArray[pos]);
                                    cout << "Enter Birth Year: ";
                                    cin >> birthYearArray[pos];
                                    cin.ignore();

                                    ageArray[pos] = 2026 - birthYearArray[pos];

                                    if (ageArray[pos] >= 0 && ageArray[pos] <= 2)
                                    {
                                        ageGroupArray[pos] = "Infant";
                                    }
                                    else if (ageArray[pos] > 2 && ageArray[pos] <= 12)
                                    {
                                        ageGroupArray[pos] = "Child";
                                    }
                                    else
                                    {
                                        ageGroupArray[pos] = "Adult";
                                    }

                                    cout << "Enter Passport Number: ";
                                    getline(cin, passportNumberArray[pos]);
                                    cout << "Enter Expiry Date: ";
                                    getline(cin, expiryDateArray[pos]);

                                    while (true)
                                    {
                                        cout << "Select Package (1-4): ";
                                        cin >> packageOptionArray[pos];
                                        cin.ignore();
                                        if (packageOptionArray[pos] == '1' || packageOptionArray[pos] == '2' ||
                                            packageOptionArray[pos] == '3' || packageOptionArray[pos] == '4')
                                        {
                                            break;
                                        }
                                        else
                                        {
                                            cout << "Wrong Input! Please Try Again" << endl;
                                        }
                                    }

                                    cout << "\nRecord updated successfully!" << endl;
                                }
                                else
                                {
                                    cout << "Wrong Input! Please Try Again" << endl;
                                }
                            }

                            historyArray[historyIndex] = "Updated Client Record";
                            historyIndex++;
                            if (historyIndex >= 6) { historyIndex = 0; }

                            getch();
                        }
                        else if (adminOption == '5')
                        {
                            system("cls");

                            // Delete Client Record
                            cout << "|-------------------------------|" << endl;
                            cout << "|-----Delete Client Record------|" << endl;
                            cout << "|-------------------------------|" << endl;

                            if (index == 0)
                            {
                                cout << "No records found." << endl;
                            }
                            else
                            {
                                cout << "Enter Record Number to Delete (1 to " << index << "): ";
                                int recordNum;
                                cin >> recordNum;
                                cin.ignore();

                                if (recordNum >= 1 && recordNum <= index)
                                {
                                    int pos = recordNum - 1;

                                    for (int i = pos; i < index - 1; i++)
                                    {
                                        nameArray[i]           = nameArray[i + 1];
                                        fatherNameArray[i]     = fatherNameArray[i + 1];
                                        birthDateArray[i]      = birthDateArray[i + 1];
                                        birthYearArray[i]      = birthYearArray[i + 1];
                                        ageArray[i]            = ageArray[i + 1];
                                        ageGroupArray[i]       = ageGroupArray[i + 1];
                                        passportNumberArray[i] = passportNumberArray[i + 1];
                                        expiryDateArray[i]     = expiryDateArray[i + 1];
                                        packageOptionArray[i]  = packageOptionArray[i + 1];
                                    }

                                    index--;
                                    cout << "\nRecord deleted successfully!" << endl;
                                }
                                else
                                {
                                    cout << "Wrong Input! Please Try Again" << endl;
                                }
                            }

                            historyArray[historyIndex] = "Deleted Client Record";
                            historyIndex++;
                            if (historyIndex >= 6) { historyIndex = 0; }

                            getch();
                        }
                        else if (adminOption == '6')
                        {
                            system("cls");

                            // Generate Sorted List
                            cout << "|-------------------------------|" << endl;
                            cout << "|-----Sorted Passenger List-----|" << endl;
                            cout << "|-------------------------------|" << endl;
                            cout << "1. Sort by Name" << endl;
                            cout << "2. Sort by Age" << endl;
                            cout << "3. Sort by Package" << endl;
                            cout << "Choose: ";
                            char sortOption;
                            cin >> sortOption;
                            cin.ignore();

                            for (int i = 0; i < index - 1; i++)
                            {
                                for (int j = 0; j < index - i - 1; j++)
                                {
                                    bool doSwap = false;

                                    if (sortOption == '1' && nameArray[j] > nameArray[j + 1])
                                    {
                                        doSwap = true;
                                    }
                                    else if (sortOption == '2' && ageArray[j] > ageArray[j + 1])
                                    {
                                        doSwap = true;
                                    }
                                    else if (sortOption == '3' && packageOptionArray[j] > packageOptionArray[j + 1])
                                    {
                                        doSwap = true;
                                    }

                                    if (doSwap == true)
                                    {
                                        string tempStr;
                                        int tempInt;
                                        char tempChar;

                                        tempStr = nameArray[j]; nameArray[j] = nameArray[j+1]; nameArray[j+1] = tempStr;
                                        tempStr = fatherNameArray[j]; fatherNameArray[j] = fatherNameArray[j+1]; fatherNameArray[j+1] = tempStr;
                                        tempStr = birthDateArray[j]; birthDateArray[j] = birthDateArray[j+1]; birthDateArray[j+1] = tempStr;
                                        tempInt = birthYearArray[j]; birthYearArray[j] = birthYearArray[j+1]; birthYearArray[j+1] = tempInt;
                                        tempInt = ageArray[j]; ageArray[j] = ageArray[j+1]; ageArray[j+1] = tempInt;
                                        tempStr = ageGroupArray[j]; ageGroupArray[j] = ageGroupArray[j+1]; ageGroupArray[j+1] = tempStr;
                                        tempStr = passportNumberArray[j]; passportNumberArray[j] = passportNumberArray[j+1]; passportNumberArray[j+1] = tempStr;
                                        tempStr = expiryDateArray[j]; expiryDateArray[j] = expiryDateArray[j+1]; expiryDateArray[j+1] = tempStr;
                                        tempChar = packageOptionArray[j]; packageOptionArray[j] = packageOptionArray[j+1]; packageOptionArray[j+1] = tempChar;
                                    }
                                }
                            }

                            for (int i = 0; i < index; i++)
                            {
                                cout << i + 1 << ". " << nameArray[i] << " | Age: " << ageArray[i] << " (" << ageGroupArray[i] << ") | Pkg: " << packageOptionArray[i] << endl;
                            }

                            historyArray[historyIndex] = "Generated Sorted List";
                            historyIndex++;
                            if (historyIndex >= 6) { historyIndex = 0; }

                            getch();
                        }
                        else if (adminOption == '7')
                        {
                            system("cls");

                            // View Package Summary
                            cout << "|-------------------------------|" << endl;
                            cout << "|------Package Summary----------|" << endl;
                            cout << "|-------------------------------|" << endl;

                            int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

                            for (int i = 0; i < index; i++)
                            {
                                if (packageOptionArray[i] == '1') { c1++; }
                                else if (packageOptionArray[i] == '2') { c2++; }
                                else if (packageOptionArray[i] == '3') { c3++; }
                                else if (packageOptionArray[i] == '4') { c4++; }
                            }

                            cout << "\nEconomy : " << c1 << " clients | PKR " << c1 * 250000 << endl;
                            cout << "3 Star  : " << c2 << " clients | PKR " << c2 * 350000 << endl;
                            cout << "4 Star  : " << c3 << " clients | PKR " << c3 * 500000 << endl;
                            cout << "5 Star  : " << c4 << " clients | PKR " << c4 * 800000 << endl;
                            cout << "Total Revenue : PKR " << (c1*250000 + c2*350000 + c3*500000 + c4*800000) << endl;

                            historyArray[historyIndex] = "Viewed Package Summary";
                            historyIndex++;
                            if (historyIndex >= 6) { historyIndex = 0; }

                            getch();
                        }
                        else if (adminOption == '8')
                        {
                            system("cls");

                            // View Action History
                            cout << "|-------------------------------|" << endl;
                            cout << "|--------Action History---------|" << endl;
                            cout << "|-------------------------------|" << endl;

                            for (int i = 0; i < 6; i++)
                            {
                                if (historyArray[i] != "")
                                {
                                    cout << i + 1 << ". " << historyArray[i] << endl;
                                }
                            }

                            getch();
                        }
                        else if (adminOption == '9')
                        {
                            system("cls");

                            // Export Report
                            cout << "|-------------------------------|" << endl;
                            cout << "|--------Booking Report---------|" << endl;
                            cout << "|-------------------------------|" << endl;
                            cout << "Total Records: " << index << endl;
                            cout << "===============================" << endl;

                            for (int i = 0; i < index; i++)
                            {
                                cout << "#" << i+1 << " " << nameArray[i] << " | " << ageGroupArray[i] << " | Pkg: " << packageOptionArray[i] << endl;
                            }

                            historyArray[historyIndex] = "Exported Report";
                            historyIndex++;
                            if (historyIndex >= 6) { historyIndex = 0; }

                            getch();
                        }
                        else if (adminOption == '0')
                        {
                            // Logout
                            break;
                        }
                        else
                        {
                            cout << "Wrong Input! Please Try Again" << endl;
                            getch();
                        }
                    }
                }
                else
                {
                    cout << "Wrong Credentials! Please Try Again..." << endl;
                    getch();
                }
            }
        }
        else if (userOption == '2')
        {
            while (true)
            {
                system("cls");

                // Client Menu
                cout << "|------------------------------------|" << endl;
                cout << "|----------Client Dashboard----------|" << endl;
                cout << "|------------------------------------|" << endl;
                cout << "1. Enter Passenger Details" << endl;
                cout << "2. View My Passenger Details" << endl;
                cout << "3. View Package Details" << endl;
                cout << "4. Change Package Selection" << endl;
                cout << "5. View Booking Summary" << endl;
                cout << "6. Register Another Passenger" << endl;
                cout << "7. View Age Group Information" << endl;
                cout << "8. View Action History" << endl;
                cout << "9. Clear My Details" << endl;
                cout << "0. Exit" << endl;
                cout << "Choose any option: ";
                char clientOption;
                cin >> clientOption;
                cin.ignore();

                if (clientOption == '1' || clientOption == '6')
                {
                    system("cls");

                    // Enter Passenger Details
                    cout << "|------------------------------------|" << endl;
                    cout << "|------Enter Passenger Details-------|" << endl;
                    cout << "|------------------------------------|" << endl;

                    cout << "Enter Name: ";
                    getline(cin, nameArray[index]);
                    cout << "Enter Father Name: ";
                    getline(cin, fatherNameArray[index]);
                    cout << "Enter Date of Birth: ";
                    getline(cin, birthDateArray[index]);
                    cout << "Enter Birth Year: ";
                    cin >> birthYearArray[index];
                    cin.ignore();

                    ageArray[index] = 2026 - birthYearArray[index];

                    if (ageArray[index] >= 0 && ageArray[index] <= 2)
                    {
                        ageGroupArray[index] = "Infant";
                    }
                    else if (ageArray[index] > 2 && ageArray[index] <= 12)
                    {
                        ageGroupArray[index] = "Child";
                    }
                    else
                    {
                        ageGroupArray[index] = "Adult";
                    }

                    cout << "Enter Passport Number: ";
                    getline(cin, passportNumberArray[index]);
                    cout << "Enter Expiry Date: ";
                    getline(cin, expiryDateArray[index]);

                    while (true)
                    {
                        cout << "\n1. Economy  - PKR 250,000" << endl;
                        cout << "2. 3 Star   - PKR 350,000" << endl;
                        cout << "3. 4 Star   - PKR 500,000" << endl;
                        cout << "4. 5 Star   - PKR 800,000" << endl;
                        cout << "Select Package (1-4): ";
                        cin >> packageOptionArray[index];
                        cin.ignore();

                        if (packageOptionArray[index] == '1' || packageOptionArray[index] == '2' ||
                            packageOptionArray[index] == '3' || packageOptionArray[index] == '4')
                        {
                            break;
                        }
                        else
                        {
                            cout << "Invalid Option! Please select 1 to 4." << endl;
                        }
                    }

                    index++;
                    cout << "\nYour details have been entered successfully" << endl;

                    clientHistoryArray[clientHistoryIndex] = "Entered Passenger Details";
                    clientHistoryIndex++;
                    if (clientHistoryIndex >= 6) { clientHistoryIndex = 0; }

                    cout << "Press any Button to continue..." << endl;
                    getch();
                }
                else if (clientOption == '2')
                {
                    system("cls");

                    // View My Passenger Details
                    cout << "|------------------------------------|" << endl;
                    cout << "|--------Passenger Details-----------|" << endl;
                    cout << "|------------------------------------|" << endl;

                    if (index == 0)
                    {
                        cout << "No details entered yet." << endl;
                    }
                    else
                    {
                        cout << "\nName     : " << nameArray[index-1] << endl;
                        cout << "Father   : " << fatherNameArray[index-1] << endl;
                        cout << "DOB      : " << birthDateArray[index-1] << endl;
                        cout << "Age      : " << ageArray[index-1] << " (" << ageGroupArray[index-1] << ")" << endl;
                        cout << "Passport : " << passportNumberArray[index-1] << endl;
                        cout << "Expiry   : " << expiryDateArray[index-1] << endl;
                        cout << "Package  : " << packageOptionArray[index-1] << endl;
                    }

                    clientHistoryArray[clientHistoryIndex] = "Viewed Passenger Details";
                    clientHistoryIndex++;
                    if (clientHistoryIndex >= 6) { clientHistoryIndex = 0; }

                    getch();
                }
                else if (clientOption == '3')
                {
                    system("cls");

                    // View Package Details
                    cout << "Economy : 10 Days | PIA | Shuttle Inn Makkah | PKR 250,000" << endl;
                    cout << "3 Star  : 14 Days | Emirates | Al Massa Makkah | PKR 350,000" << endl;
                    cout << "4 Star  : 17 Days | Saudi Airlines | Conrad Makkah | PKR 500,000" << endl;
                    cout << "5 Star  : 21 Days | Qatar Airways | Swissotel Makkah | PKR 800,000" << endl;

                    clientHistoryArray[clientHistoryIndex] = "Viewed Package Details";
                    clientHistoryIndex++;
                    if (clientHistoryIndex >= 6) { clientHistoryIndex = 0; }

                    getch();
                }
                else if (clientOption == '4')
                {
                    system("cls");

                    // Change Package Selection
                    cout << "|------------------------------------|" << endl;
                    cout << "|-----Change Package Selection-------|" << endl;
                    cout << "|------------------------------------|" << endl;

                    if (index == 0)
                    {
                        cout << "No records found." << endl;
                    }
                    else
                    {
                        cout << "Enter Record Number (1 to " << index << "): ";
                        int recordNum;
                        cin >> recordNum;
                        cin.ignore();

                        if (recordNum >= 1 && recordNum <= index)
                        {
                            int pos = recordNum - 1;
                            while (true)
                            {
                                cout << "Select Package (1-4): ";
                                cin >> packageOptionArray[pos];
                                cin.ignore();
                                if (packageOptionArray[pos] == '1' || packageOptionArray[pos] == '2' ||
                                    packageOptionArray[pos] == '3' || packageOptionArray[pos] == '4')
                                {
                                    cout << "Package updated!" << endl;
                                    break;
                                }
                                else
                                {
                                    cout << "Wrong Input! Please Try Again" << endl;
                                }
                            }
                        }
                        else
                        {
                            cout << "Wrong Input! Please Try Again" << endl;
                        }
                    }

                    clientHistoryArray[clientHistoryIndex] = "Changed Package";
                    clientHistoryIndex++;
                    if (clientHistoryIndex >= 6) { clientHistoryIndex = 0; }

                    getch();
                }
                else if (clientOption == '5')
                {
                    system("cls");

                    // View Booking Summary
                    cout << "|------------------------------------|" << endl;
                    cout << "|--------Booking Summary-------------|" << endl;
                    cout << "|------------------------------------|" << endl;

                    if (index == 0)
                    {
                        cout << "No details entered yet." << endl;
                    }
                    else
                    {
                        cout << "Name    : " << nameArray[index-1] << endl;
                        cout << "Age     : " << ageArray[index-1] << " (" << ageGroupArray[index-1] << ")" << endl;
                        cout << "Passport: " << passportNumberArray[index-1] << endl;

                        if (packageOptionArray[index-1] == '1') { cout << "Package : Economy - PKR 250,000" << endl; }
                        else if (packageOptionArray[index-1] == '2') { cout << "Package : 3 Star - PKR 350,000" << endl; }
                        else if (packageOptionArray[index-1] == '3') { cout << "Package : 4 Star - PKR 500,000" << endl; }
                        else if (packageOptionArray[index-1] == '4') { cout << "Package : 5 Star - PKR 800,000" << endl; }

                        cout << "\nThank you for choosing us!" << endl;
                    }

                    clientHistoryArray[clientHistoryIndex] = "Viewed Booking Summary";
                    clientHistoryIndex++;
                    if (clientHistoryIndex >= 6) { clientHistoryIndex = 0; }

                    getch();
                }
                else if (clientOption == '7')
                {
                    system("cls");

                    // View Age Group Information
                    cout << "Infant : 0-2 years   (No seat)" << endl;
                    cout << "Child  : 3-12 years  (Child fare)" << endl;
                    cout << "Adult  : 13+ years   (Full fare)" << endl;
                    cout << "Age = 2026 - Birth Year" << endl;

                    clientHistoryArray[clientHistoryIndex] = "Viewed Age Group Info";
                    clientHistoryIndex++;
                    if (clientHistoryIndex >= 6) { clientHistoryIndex = 0; }

                    getch();
                }
                else if (clientOption == '8')
                {
                    system("cls");

                    // View Action History
                    cout << "|------------------------------------|" << endl;
                    cout << "|--------Action History--------------|" << endl;
                    cout << "|------------------------------------|" << endl;

                    for (int i = 0; i < 6; i++)
                    {
                        if (clientHistoryArray[i] != "")
                        {
                            cout << i + 1 << ". " << clientHistoryArray[i] << endl;
                        }
                    }

                    getch();
                }
                else if (clientOption == '9')
                {
                    system("cls");

                    // Clear My Details
                    if (index == 0)
                    {
                        cout << "No details to clear." << endl;
                    }
                    else
                    {
                        nameArray[index-1]           = "";
                        fatherNameArray[index-1]     = "";
                        birthDateArray[index-1]      = "";
                        birthYearArray[index-1]      = 0;
                        ageArray[index-1]            = 0;
                        ageGroupArray[index-1]       = "";
                        passportNumberArray[index-1] = "";
                        expiryDateArray[index-1]     = "";
                        packageOptionArray[index-1]  = '0';
                        index--;
                        cout << "Details cleared." << endl;
                    }

                    clientHistoryArray[clientHistoryIndex] = "Cleared Details";
                    clientHistoryIndex++;
                    if (clientHistoryIndex >= 6) { clientHistoryIndex = 0; }

                    getch();
                }
                else if (clientOption == '0')
                {
                    // Exit
                    cout << "Thank you for choosing us for your prestigious journey!" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Wrong Input! Please Try Again" << endl;
                    getch();
                }
            }
        }
        else if (userOption == '3')
        {
            system("cls");

            // Exit Application
            cout << "Thank you for using Umrah Booking Management Application" << endl;
            getch();
            break;
        }
        else
        {
            cout << "Wrong Input! Please try Again" << endl;
            getch();
        }
    }

    return 0;
}