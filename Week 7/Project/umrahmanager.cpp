#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char userOption;
    int totalclients = 100;
    int index = 0;

    // Data Structure
    string nameArray[totalclients];
    string fatherNameArray[totalclients];
    string birthDateArray[totalclients];
    int birthYearArray[totalclients];
    int ageArray[totalclients];
    string ageGroupArray[totalclients];
    string passportNumberArray[totalclients];
    string expiryDateArray[totalclients];
    char packageOptionArray[totalclients];

    while (true)
    {
        system("cls");

        // Login Page
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
            for (int i = 0; i < 3; i++)
            {
                system("cls");

                // Admin Menu
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
                    cout << "Logged in Success Fully" << endl;
                    while (true)
                    {
                        cout << "|------------------------------|" << endl;
                        cout << "|----------Admin Menu----------|" << endl;
                        cout << "|------------------------------|" << endl;
                        cout << "1. Show all Clients"<<endl;
                        cout<<"2. Search Client"<<endl;
                        cout<<"3. Update Client Record"<<endl;
                        cout<<"4. Generate Sorted List of Passengers"<<endl;
                        cout<<"5. Delete Student Record"<<endl;
                        cout<<"6. Log Out"<<endl;
                        cout<<"Choose any of the options above: "<<endl;
                        char adminOption;
                        cin>>adminOption;
                        cin.ignore();
                        if(adminOption == '1'){
                            // Show All CLients
                        }else if(adminOption == '2'){
                            //Search Clients
                        }else if(adminOption == '3'){
                            //Update Client Record
                        }else if(adminOption == '4'){
                            //Generate Sorted List of Passengers
                        }else if(adminOption == '5'){
                            //Delete Client Record
                        }else if(adminOption == '6'){
                            //Back to the Login Page
                        }else{
                            //Wrong Input Error
                            cout<<"Wrong input! Please Try Again";
                        }
                    }
                    getch();
                }
                else
                {
                    cout << "Wrong Credentials! Please Try Again..." << endl;
                }
                cout << "Press any key to continue..." << endl;

                getch();
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
                cout << "2. Check Passenger Details" << endl;
                cout << "3. Exit Application" << endl;
                cout << "Choose any option: ";
                char clientOption;
                cin >> clientOption;
                cin.ignore();

                char packageOption;

                if (clientOption == '1')
                {
                    // Enter Passenger Details

                    cout << "Enter Passenger Details" << endl;

                    cout << "Enter Name: "; // Passenger Name
                    string name;
                    getline(cin, name);

                    cout << "Enter Father Name :"; // Passenger's Father Name
                    string fatherName;
                    getline(cin, fatherName);

                    cout << "Enter Date of Birth: ";
                    string birthDate;
                    getline(cin, birthDate);

                    cout << "Enter Birth Year: "; // Passenger's Birth Year
                    int birthYear;
                    cin >> birthYear;
                    cin.ignore();

                    int age = 2026 - birthYear; // Age Group Identification
                    string ageGroup;
                    if (age >= 0 && age <= 2)
                    {
                        ageGroup = "Infant";
                    }
                    else if (age > 2 && age <= 12)
                    {
                        ageGroup = "child";
                    }
                    else if (age > 12)
                    {
                        ageGroup = "Adult";
                    }

                    cout << "Enter Passport Number: "; // Passenger's Passport Number
                    string passportNumber;
                    getline(cin, passportNumber);

                    cout << "Enter Passport's Expiry Date: "; // Passenger's Passport's Expiry Date
                    string expiryDate;
                    getline(cin, expiryDate);

                    while (true)
                    {
                        cout << "\n|========================================|" << endl;
                        cout << "  |-----------UMRAH PACKAGES MENU----------|" << endl;
                        cout << "  |========================================|" << endl;
                        cout << "  1. Economy Package        - PKR 250,000" << endl;
                        cout << "  2. 3 Star Package         - PKR 350,000" << endl;
                        cout << "  3. 4 Star Package         - PKR 500,000" << endl;
                        cout << "  4. 5 Star Package         - PKR 800,000" << endl;
                        cout << "  |========================================|" << endl;
                        cout << "Select Package (1-4): ";
                        cin >> packageOption;
                        if (packageOption == '1')
                        {
                            cout << "\n======================================" << endl;
                            cout << "          ECONOMY PACKAGE             " << endl;
                            cout << "   Category: Budget / Economy Class   " << endl;
                            cout << "======================================" << endl;
                            cout << "Days     : 10 Days / 9 Nights" << endl;
                            cout << "Flight   : PIA - Lahore to Jeddah" << endl;
                            cout << "Class    : Economy Class" << endl;
                            cout << "Transport: Shared Shuttle Bus" << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Hotel Makkah : Shuttle Inn Hotel **" << endl;
                            cout << "             : 800m from Haram" << endl;
                            cout << "Hotel Madinah: Shuttle Palace Hotel **" << endl;
                            cout << "             : 900m from Masjid Nabawi" << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Price    : PKR 250,000 per person" << endl;
                            cout << "======================================" << endl;
                            getch();
                            break;
                        }
                        else if (packageOption == '2')
                        {
                            cout << "\n======================================" << endl;
                            cout << "          3 STAR PACKAGE              " << endl;
                            cout << "   Category: Standard / 3 Star        " << endl;
                            cout << "======================================" << endl;
                            cout << "Days     : 14 Days / 13 Nights" << endl;
                            cout << "Flight   : Emirates - Lahore to Jeddah" << endl;
                            cout << "Class    : Economy Class" << endl;
                            cout << "Transport: Private Van (Small Group)" << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Hotel Makkah : Al Massa Hotel ***" << endl;
                            cout << "             : 400m from Haram" << endl;
                            cout << "Hotel Madinah: Dallah Taibah Hotel ***" << endl;
                            cout << "             : 350m from Masjid Nabawi" << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Price    : PKR 350,000 per person" << endl;
                            cout << "======================================" << endl;
                            getch();
                            break;
                        }
                        else if (packageOption == '3')
                        {
                            cout << "\n======================================" << endl;
                            cout << "          4 STAR PACKAGE              " << endl;
                            cout << "   Category: Comfort / 4 Star         " << endl;
                            cout << "======================================" << endl;
                            cout << "Days     : 17 Days / 16 Nights" << endl;
                            cout << "Flight   : Saudi Airlines - Lahore to Madinah" << endl;
                            cout << "Class    : Economy Class" << endl;
                            cout << "Transport: Private Family Van" << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Hotel Makkah : Conrad Makkah ****" << endl;
                            cout << "             : 100m from Haram" << endl;
                            cout << "Hotel Madinah: Al Rawda Royal Inn ****" << endl;
                            cout << "             : 150m from Masjid Nabawi" << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Price    : PKR 500,000 per person" << endl;
                            cout << "======================================" << endl;
                            getch();
                            break;
                        }
                        else if (packageOption == '4')
                        {
                            cout << "\n======================================" << endl;
                            cout << "          5 STAR PACKAGE                " << endl;
                            cout << "   Category: Luxury / 5 Star            " << endl;
                            cout << "========================================" << endl;
                            cout << "Days         : 21 Days / 20 Nights" << endl;
                            cout << "Flight       : Qatar Airways - Lahore to Jeddah" << endl;
                            cout << "Class        : Business Class" << endl;
                            cout << "Transport    : Dedicated Private Car" << endl;
                            cout << "----------------------------------------" << endl;
                            cout << "Hotel Makkah : Swissotel Clock Tower *****" << endl;
                            cout << "             : Directly Connected to Haram" << endl;
                            cout << "Hotel Madinah: Movenpick Hotel *****" << endl;
                            cout << "             : 50m from Masjid Nabawi" << endl;
                            cout << "----------------------------------------" << endl;
                            cout << "Price        : PKR 800,000 per person" << endl;
                            cout << "========================================" << endl;
                            getch();
                            break;
                        }
                        else
                        {
                            cout << "Invalid Option! Please select 1 to 4." << endl;
                            getch();
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

                    cout << "Your details have been entered successfully" << endl;
                    cout << "Press any Button to continue..." << endl;
                }
                else if (clientOption == '2')
                {
                    system("cls");
                    // Check Passenger Details
                    cout << "Passenger Details" << endl;
                    cout << "\nName:\t" << nameArray[index - 1] << endl;
                    cout << "Father Name:\t" << fatherNameArray[index - 1] << endl;
                    cout << "Date of Birth:\t" << birthDateArray[index - 1] << endl;
                    cout << "Age:\t" << ageArray[index - 1] << " Years" << endl;
                    cout << "Age Group:\t" << ageGroupArray[index - 1] << endl;
                    cout << "Passport Number:\t" << passportNumberArray[index - 1] << endl;
                    cout << "Passport's Expiry Date:\t" << expiryDateArray[index - 1] << endl;
                    cout << "\nUmrah Package Details"
                         << endl;
                    if (packageOption == '1')
                    {
                        cout << "\n======================================" << endl;
                        cout << "          ECONOMY PACKAGE             " << endl;
                        cout << "   Category: Budget / Economy Class   " << endl;
                        cout << "======================================" << endl;
                        cout << "Days     : 10 Days / 9 Nights" << endl;
                        cout << "Flight   : PIA - Lahore to Jeddah" << endl;
                        cout << "Class    : Economy Class" << endl;
                        cout << "Transport: Shared Shuttle Bus" << endl;
                        cout << "--------------------------------------" << endl;
                        cout << "Hotel Makkah : Shuttle Inn Hotel **" << endl;
                        cout << "             : 800m from Haram" << endl;
                        cout << "Hotel Madinah: Shuttle Palace Hotel **" << endl;
                        cout << "             : 900m from Masjid Nabawi" << endl;
                        cout << "--------------------------------------" << endl;
                        cout << "Price    : PKR 250,000 per person" << endl;
                        cout << "======================================" << endl;
                        getch();
                    }
                    else if (packageOption == '2')
                    {
                        cout << "\n======================================" << endl;
                        cout << "          3 STAR PACKAGE              " << endl;
                        cout << "   Category: Standard / 3 Star        " << endl;
                        cout << "======================================" << endl;
                        cout << "Days     : 14 Days / 13 Nights" << endl;
                        cout << "Flight   : Emirates - Lahore to Jeddah" << endl;
                        cout << "Class    : Economy Class" << endl;
                        cout << "Transport: Private Van (Small Group)" << endl;
                        cout << "--------------------------------------" << endl;
                        cout << "Hotel Makkah : Al Massa Hotel ***" << endl;
                        cout << "             : 400m from Haram" << endl;
                        cout << "Hotel Madinah: Dallah Taibah Hotel ***" << endl;
                        cout << "             : 350m from Masjid Nabawi" << endl;
                        cout << "--------------------------------------" << endl;
                        cout << "Price    : PKR 350,000 per person" << endl;
                        cout << "======================================" << endl;
                        getch();
                    }
                    else if (packageOption == '3')
                    {
                        cout << "\n======================================" << endl;
                        cout << "          4 STAR PACKAGE              " << endl;
                        cout << "   Category: Comfort / 4 Star         " << endl;
                        cout << "======================================" << endl;
                        cout << "Days     : 17 Days / 16 Nights" << endl;
                        cout << "Flight   : Saudi Airlines - Lahore to Madinah" << endl;
                        cout << "Class    : Economy Class" << endl;
                        cout << "Transport: Private Family Van" << endl;
                        cout << "--------------------------------------" << endl;
                        cout << "Hotel Makkah : Conrad Makkah ****" << endl;
                        cout << "             : 100m from Haram" << endl;
                        cout << "Hotel Madinah: Al Rawda Royal Inn ****" << endl;
                        cout << "             : 150m from Masjid Nabawi" << endl;
                        cout << "--------------------------------------" << endl;
                        cout << "Price    : PKR 500,000 per person" << endl;
                        cout << "======================================" << endl;
                        getch();
                    }
                    else if (packageOption == '4')
                    {
                        cout << "\n======================================" << endl;
                        cout << "          5 STAR PACKAGE                " << endl;
                        cout << "   Category: Luxury / 5 Star            " << endl;
                        cout << "========================================" << endl;
                        cout << "Days         : 21 Days / 20 Nights" << endl;
                        cout << "Flight       : Qatar Airways - Lahore to Jeddah" << endl;
                        cout << "Class        : Business Class" << endl;
                        cout << "Transport    : Dedicated Private Car" << endl;
                        cout << "----------------------------------------" << endl;
                        cout << "Hotel Makkah : Swissotel Clock Tower *****" << endl;
                        cout << "             : Directly Connected to Haram" << endl;
                        cout << "Hotel Madinah: Movenpick Hotel *****" << endl;
                        cout << "             : 50m from Masjid Nabawi" << endl;
                        cout << "----------------------------------------" << endl;
                        cout << "Price        : PKR 800,000 per person" << endl;
                        cout << "========================================" << endl;
                        getch();
                    }
                    getch();
                }
                else if (clientOption == '3')
                {
                    // Exit Application
                    cout << "Thank you for choosing us for your prestigious journey!";
                    getch();
                    break;
                }
                else
                {
                    // Wrong Input Error!
                    cout << "Wrong Input! Please Try Again" << endl;
                }

                getch();
            }
        }
        else if (userOption == '3')
        {
            system("cls");

            // exit
            cout << "Thank you for using Umrah Booking Management Application" << endl;
            break;
        }
        else
        {
            system("cls");

            // wrong input error!
            cout << "Wrong Input! Please try Again" << endl;

            getch();
        }
    }
}
