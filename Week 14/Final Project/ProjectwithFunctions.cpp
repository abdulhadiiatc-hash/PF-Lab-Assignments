#include <iostream>
#include <conio.h>
using namespace std;

// clears the console screen
void clearScreen()
{
    system("cls");
}

// prints pause message and waits for a key press
void pause()
{
    cout << endl
         << "Press any Key to Continue..." << endl;
    getch();
}

// calculates age by subtracting birth year from current year
int calculateAge(int birthYear)
{
    return 2026 - birthYear;
}

// returns age group based on age
string determineAgeGroup(int age)
{
    if (age >= 0 && age <= 2)
        return "Infant";
    else if (age > 2 && age <= 12)
        return "Child";
    else
        return "Adult";
}

// keeps asking for birth year until a valid one is entered
int getValidBirthYear()
{
    int birthYear;
    while (true)
    {
        cout << "Enter Birth Year: ";
        cin >> birthYear;
        if (2026 - birthYear < 0)
            cout << "Invalid Birth Year! Try Again." << endl;
        else
            break;
    }
    return birthYear;
}

// shows package options and keeps asking until a valid choice is made
int getValidPackage()
{
    cout << "1. Economy  - PKR 250,000" << endl;
    cout << "2. 3 Star   - PKR 350,000" << endl;
    cout << "3. 4 Star   - PKR 500,000" << endl;
    cout << "4. 5 Star   - PKR 800,000" << endl;
    int packageOption;
    while (true)
    {
        cout << "Select Package (1-4): ";
        cin >> packageOption;
        // only accept 1 to 4
        if (packageOption >= 1 && packageOption <= 4)
            break;
        else
            cout << "Wrong Input, Please choose 1 to 4" << endl;
    }
    return packageOption;
}

// returns the full package name and price as a string
string getPackageName(int packageOption)
{
    if (packageOption == 1)
        return "Economy - PKR 250,000";
    else if (packageOption == 2)
        return "3 Star - PKR 350,000";
    else if (packageOption == 3)
        return "4 Star - PKR 500,000";
    else
        return "5 Star - PKR 800,000";
}

// searches for a name in the array and returns its index, or -1 if not found
int searchByName(string nameArray[], int index, string name)
{
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] == name)
            return i;
    }
    return -1;
}

// sorts all arrays together by client name using sorting
void sortByName(string nameArray[], string fatherNameArray[], string birthDateArray[],
                int birthYearArray[], int ageArray[], string ageGroupArray[],
                string passportNumberArray[], string expiryDateArray[], int packageOptionArray[], int index)
{
    for (int i = 0; i < index; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
            // swap all parallel arrays together
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
}

// -------history functions-------

// adds a new entry to history, shifts old entries out if already full
void addToHistory(string historyArray[], int &historyCount, string message)
{
    if (historyCount < 6)
    {
        historyArray[historyCount] = message;
        historyCount++;
    }
    else
    {
        // shift all entries one step to the left to drop the oldest
        for (int i = 0; i < 5; i++)
        {
            historyArray[i] = historyArray[i + 1];
        }
        // place new entry at the end
        historyArray[5] = message;
    }
}

// prints all history entries
void showHistory(string historyArray[], int historyCount)
{
    if (historyCount == 0)
    {
        cout << "No history yet." << endl;
    }
    else
    {
        cout << "---Recent Activity---" << endl;
        for (int i = 0; i < historyCount; i++)
        {
            cout << i + 1 << ". " << historyArray[i] << endl;
        }
    }
}

// -------main-------

int main()
{
    // tracks how many clients are stored
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

    // history arrays for admin and client, max 6 entries each
    string adminHistory[6];
    int adminHistoryCount = 0;
    string clientHistory[6];
    int clientHistoryCount = 0;

    while (true)
    {
        clearScreen();
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
            // admin login - allow 3 attempts
            for (int i = 0; i < 3; i++)
            {
                clearScreen();
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
                    // record login in history
                    addToHistory(adminHistory, adminHistoryCount, "Logged in");

                    while (true)
                    {
                        clearScreen();
                        cout << "1. Show All Clients" << endl;
                        cout << "2. Search Client" << endl;
                        cout << "3. Add Client Record" << endl;
                        cout << "4. Update Client Record" << endl;
                        cout << "5. Delete Client Record" << endl;
                        cout << "6. Sort Clients by Name" << endl;
                        cout << "7. Package Summary" << endl;
                        cout << "8. Export Report" << endl;
                        cout << "9. View History" << endl;
                        cout << "10. Logout" << endl;
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
                                // print table header then all records
                                cout << "Name\tFather\tDOB\tAge\tGroup\tPassport\tExpiry\tPackage" << endl;
                                for (int i = 0; i < index; i++)
                                {
                                    // skip any empty slots
                                    if (nameArray[i] != "")
                                    {
                                        cout << nameArray[i] << "\t" << fatherNameArray[i] << "\t" << birthDateArray[i] << "\t" << ageArray[i] << "\t" << ageGroupArray[i] << "\t" << passportNumberArray[i] << "\t" << expiryDateArray[i] << "\t" << packageOptionArray[i] << endl;
                                    }
                                }
                            }
                            addToHistory(adminHistory, adminHistoryCount, "Viewed all clients");
                        }
                        else if (adminOption == 2)
                        {
                            // search client by name
                            cout << "Enter the Client's Name whom you want to search: ";
                            cin.ignore();
                            string name;
                            getline(cin, name);
                            // returns index if found, -1 if not
                            int foundindex = searchByName(nameArray, index, name);
                            if (foundindex == -1)
                            {
                                cout << "Record not found against the name " << name << endl;
                                addToHistory(adminHistory, adminHistoryCount, "Searched for " + name + " (not found)");
                            }
                            else
                            {
                                // print header then the matched record
                                cout << "Name\tFather\tDOB\tAge\tGroup\tPassport\tExpiry\tPackage" << endl;
                                cout << nameArray[foundindex] << "\t" << fatherNameArray[foundindex] << "\t" << birthDateArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << ageGroupArray[foundindex] << "\t" << passportNumberArray[foundindex] << "\t" << expiryDateArray[foundindex] << "\t" << packageOptionArray[foundindex] << endl;
                                addToHistory(adminHistory, adminHistoryCount, "Searched for " + name + " (found)");
                            }
                        }
                        else if (adminOption == 3)
                        {
                            // add client record
                            cin.ignore();
                            cout << "Enter Name: ";
                            getline(cin, nameArray[index]);
                            cout << "Enter Father Name: ";
                            getline(cin, fatherNameArray[index]);
                            cout << "Enter Date of Birth: ";
                            getline(cin, birthDateArray[index]);

                            // validate and store birth year, then calculate age and group
                            birthYearArray[index] = getValidBirthYear();
                            ageArray[index] = calculateAge(birthYearArray[index]);
                            ageGroupArray[index] = determineAgeGroup(ageArray[index]);

                            cin.ignore();
                            cout << "Enter Passport Number: ";
                            getline(cin, passportNumberArray[index]);
                            cout << "Enter Expiry Date: ";
                            getline(cin, expiryDateArray[index]);

                            // validate and store package choice
                            packageOptionArray[index] = getValidPackage();

                            // record before incrementing index so name is still accessible
                            addToHistory(adminHistory, adminHistoryCount, "Added client: " + nameArray[index]);
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
                            int foundindex = searchByName(nameArray, index, name);
                            if (foundindex == -1)
                            {
                                cout << "Record not found against the name " << name << endl;
                                addToHistory(adminHistory, adminHistoryCount, "Update failed for " + name + " (not found)");
                            }
                            else
                            {
                                // show old record before taking new input
                                cout << "-----Old Record-----" << endl;
                                cout << "Name\tFather\tDOB\tAge\tGroup\tPassport\tExpiry\tPackage" << endl;
                                cout << nameArray[foundindex] << "\t" << fatherNameArray[foundindex] << "\t" << birthDateArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << ageGroupArray[foundindex] << "\t" << passportNumberArray[foundindex] << "\t" << expiryDateArray[foundindex] << "\t" << packageOptionArray[foundindex] << endl;

                                cout << "Enter the new details to update record" << endl;
                                cout << "Enter Name: ";
                                getline(cin, nameArray[foundindex]);
                                cout << "Enter Father Name: ";
                                getline(cin, fatherNameArray[foundindex]);
                                cout << "Enter Date of Birth: ";
                                getline(cin, birthDateArray[foundindex]);

                                // recalculate age and group with new birth year
                                birthYearArray[foundindex] = getValidBirthYear();
                                ageArray[foundindex] = calculateAge(birthYearArray[foundindex]);
                                ageGroupArray[foundindex] = determineAgeGroup(ageArray[foundindex]);

                                cin.ignore();
                                cout << "Enter Passport Number: ";
                                getline(cin, passportNumberArray[foundindex]);
                                cout << "Enter Expiry Date: ";
                                getline(cin, expiryDateArray[foundindex]);

                                packageOptionArray[foundindex] = getValidPackage();
                                // show old name -> new name in history
                                addToHistory(adminHistory, adminHistoryCount, "Updated client: " + name + " -> " + nameArray[foundindex]);
                                cout << "The Client's data has been updated successfully" << endl;
                            }
                        }
                        else if (adminOption == 5)
                        {
                            // delete client record
                            cout << "Enter the Client's Name whom you want to delete: ";
                            cin.ignore();
                            string name;
                            getline(cin, name);
                            int foundindex = searchByName(nameArray, index, name);
                            if (foundindex == -1)
                            {
                                cout << "Record not found against the name " << name << endl;
                                addToHistory(adminHistory, adminHistoryCount, "Delete failed for " + name + " (not found)");
                            }
                            else
                            {
                                // shift all records after the deleted one to the left
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
                                // reduce total count
                                index--;
                                addToHistory(adminHistory, adminHistoryCount, "Deleted client: " + name);
                                cout << endl
                                     << "Record of " << name << " deleted successfully." << endl;
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
                                // sort then display the updated list
                                sortByName(nameArray, fatherNameArray, birthDateArray, birthYearArray, ageArray, ageGroupArray, passportNumberArray, expiryDateArray, packageOptionArray, index);
                                cout << "Clients sorted by Name (A to Z):" << endl;
                                cout << "Name\tFather\tAge\tGroup\tPackage" << endl;
                                for (int i = 0; i < index; i++)
                                {
                                    cout << nameArray[i] << "\t" << fatherNameArray[i] << "\t" << ageArray[i] << "\t" << ageGroupArray[i] << "\t" << packageOptionArray[i] << endl;
                                }
                                addToHistory(adminHistory, adminHistoryCount, "Sorted clients by name");
                            }
                        }
                        else if (adminOption == 7)
                        {
                            // package summary
                            // count clients in each package
                            int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
                            for (int i = 0; i < index; i++)
                            {
                                if (packageOptionArray[i] == 1)
                                    c1++;
                                else if (packageOptionArray[i] == 2)
                                    c2++;
                                else if (packageOptionArray[i] == 3)
                                    c3++;
                                else if (packageOptionArray[i] == 4)
                                    c4++;
                            }
                            cout << "Total Clients : " << index << endl;
                            cout << "Economy : " << c1 << " clients" << endl;
                            cout << "3 Star  : " << c2 << " clients" << endl;
                            cout << "4 Star  : " << c3 << " clients" << endl;
                            cout << "5 Star  : " << c4 << " clients" << endl;
                            addToHistory(adminHistory, adminHistoryCount, "Viewed package summary");
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
                                // print a numbered list of all clients
                                for (int i = 0; i < index; i++)
                                {
                                    if (nameArray[i] != "")
                                    {
                                        cout << i + 1 << ". " << nameArray[i] << " | " << ageGroupArray[i] << " | Package " << packageOptionArray[i] << endl;
                                    }
                                }
                            }
                            addToHistory(adminHistory, adminHistoryCount, "Exported report");
                        }
                        else if (adminOption == 9)
                        {
                            // view history
                            showHistory(adminHistory, adminHistoryCount);
                        }
                        else if (adminOption == 10)
                        {
                            // logout
                            addToHistory(adminHistory, adminHistoryCount, "Logged out");
                            break;
                        }
                        else
                        {
                            cout << "Invalid Option, Please choose one of the options mentioned above." << endl;
                        }

                        pause();
                    }

                    pause();
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
                clearScreen();
                cout << "---Welcome to UBMS---\n----Client Menu----" << endl;
                cout << "1. Enter My Details" << endl;
                cout << "2. View My Details" << endl;
                cout << "3. View Package Details" << endl;
                cout << "4. Change My Package" << endl;
                cout << "5. View Booking Summary" << endl;
                cout << "6. View Age Group Info" << endl;
                cout << "7. View History" << endl;
                cout << "8. Exit" << endl;
                cout << "Choose any Option: ";
                int clientOption;
                cin >> clientOption;

                if (clientOption == 1)
                {
                    // enter client details
                    clearScreen();
                    cout << "---Enter Your Details---" << endl;
                    cin.ignore();
                    cout << "Enter Name: ";
                    getline(cin, nameArray[index]);
                    cout << "Enter Father Name: ";
                    getline(cin, fatherNameArray[index]);
                    cout << "Enter Date of Birth: ";
                    getline(cin, birthDateArray[index]);

                    // validate and store birth year, then calculate age and group
                    birthYearArray[index] = getValidBirthYear();
                    ageArray[index] = calculateAge(birthYearArray[index]);
                    ageGroupArray[index] = determineAgeGroup(ageArray[index]);

                    cin.ignore();
                    cout << "Enter Passport Number: ";
                    getline(cin, passportNumberArray[index]);
                    cout << "Enter Expiry Date: ";
                    getline(cin, expiryDateArray[index]);

                    // validate and store package choice
                    packageOptionArray[index] = getValidPackage();

                    // record before incrementing index so name is still accessible
                    addToHistory(clientHistory, clientHistoryCount, "Entered details for " + nameArray[index]);
                    index++;

                    cout << "Your details have been stored successfully" << endl;
                }
                else if (clientOption == 2)
                {
                    // view my details
                    clearScreen();
                    if (index == 0)
                    {
                        cout << "No details entered yet." << endl;
                    }
                    else
                    {
                        // show the most recently entered record
                        cout << "Name     : " << nameArray[index - 1] << endl;
                        cout << "Father   : " << fatherNameArray[index - 1] << endl;
                        cout << "DOB      : " << birthDateArray[index - 1] << endl;
                        cout << "Age      : " << ageArray[index - 1] << " (" << ageGroupArray[index - 1] << ")" << endl;
                        cout << "Passport : " << passportNumberArray[index - 1] << endl;
                        cout << "Expiry   : " << expiryDateArray[index - 1] << endl;
                        cout << "Package  : " << packageOptionArray[index - 1] << endl;
                        addToHistory(clientHistory, clientHistoryCount, "Viewed details for " + nameArray[index - 1]);
                    }
                }
                else if (clientOption == 3)
                {
                    // view package details
                    clearScreen();
                    cout << "Economy : 10 Days | PIA | Shuttle Inn Makkah | PKR 250,000" << endl;
                    cout << "3 Star  : 14 Days | Emirates | Al Massa Makkah | PKR 350,000" << endl;
                    cout << "4 Star  : 17 Days | Saudi Airlines | Conrad Makkah | PKR 500,000" << endl;
                    cout << "5 Star  : 21 Days | Qatar Airways | Swissotel Makkah | PKR 800,000" << endl;
                    addToHistory(clientHistory, clientHistoryCount, "Viewed package details");
                }
                else if (clientOption == 4)
                {
                    // change my package
                    clearScreen();
                    if (index == 0)
                    {
                        cout << "No records found." << endl;
                    }
                    else
                    {
                        // save old package to show in history
                        int oldPackage = packageOptionArray[index - 1];
                        packageOptionArray[index - 1] = getValidPackage();
                        addToHistory(clientHistory, clientHistoryCount, "Changed package from " + getPackageName(oldPackage) + " to " + getPackageName(packageOptionArray[index - 1]));
                        cout << "Package updated successfully!" << endl;
                    }
                }
                else if (clientOption == 5)
                {
                    // view booking summary
                    clearScreen();
                    if (index == 0)
                    {
                        cout << "No details entered yet." << endl;
                    }
                    else
                    {
                        cout << "Name    : " << nameArray[index - 1] << endl;
                        cout << "Age     : " << ageArray[index - 1] << " (" << ageGroupArray[index - 1] << ")" << endl;
                        cout << "Passport: " << passportNumberArray[index - 1] << endl;
                        // show full package name instead of just the number
                        cout << "Package : " << getPackageName(packageOptionArray[index - 1]) << endl;
                        cout << endl
                             << "Thank you for choosing us!" << endl;
                        addToHistory(clientHistory, clientHistoryCount, "Viewed booking summary for " + nameArray[index - 1]);
                    }
                }
                else if (clientOption == 6)
                {
                    // view age group info
                    clearScreen();
                    cout << "Infant : 0-2 years   (No seat)" << endl;
                    cout << "Child  : 3-12 years  (Child fare)" << endl;
                    cout << "Adult  : 13+ years   (Full fare)" << endl;
                    cout << "Age = 2026 - Birth Year" << endl;
                    addToHistory(clientHistory, clientHistoryCount, "Viewed age group info");
                }
                else if (clientOption == 7)
                {
                    // view history
                    showHistory(clientHistory, clientHistoryCount);
                }
                else if (clientOption == 8)
                {
                    // exit client menu
                    addToHistory(clientHistory, clientHistoryCount, "Exited client menu");
                    cout << "Thank you for choosing us for your prestigious journey!" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Invalid Option, Please choose one of the options mentioned above." << endl;
                }

                pause();
            }
        }
        else if (userOption == 3)
        {
            // exit the program
            break;
        }
        else
        {
            cout << "You chose the wrong option" << endl;
        }
    }

    cout << "Thanks for using Umrah Booking Management System" << endl;
}
