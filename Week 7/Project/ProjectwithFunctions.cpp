#include <iostream>
#include <conio.h>
using namespace std;

// ============================================================
//   GLOBAL DATA - Parallel Arrays to store all client info
// ============================================================
const int MAX = 100;       // Maximum number of clients allowed

string nameArray[MAX];
string fatherNameArray[MAX];
string birthDateArray[MAX];
int    birthYearArray[MAX];
int    ageArray[MAX];
string ageGroupArray[MAX];
string passportNumberArray[MAX];
string expiryDateArray[MAX];
char   packageOptionArray[MAX];

int index = 0;             // Tracks how many clients are currently stored

// Admin action history (stores last 6 admin actions)
string historyArray[6];
int historyIndex = 0;

// Client action history (stores last 6 client actions)
string clientHistoryArray[6];
int clientHistoryIndex = 0;


// ============================================================
//   FUNCTION DECLARATIONS (Prototypes)
//   Listed here so functions can be used before they're defined
// ============================================================

// --- Utility Functions ---
void clearScreen();
void waitForKey();
void printHeader(string title);
void addToAdminHistory(string action);
void addToClientHistory(string action);

// --- Age Calculation ---
int  calculateAge(int birthYear);
string determineAgeGroup(int age);

// --- Package Input ---
char inputPackage();

// --- Client Data Input ---
void inputClientDetails(int pos);
void printClientDetails(int pos);

// --- Admin Login ---
bool adminLogin();

// --- Admin Menu Functions ---
void showMainMenu();
void showAdminMenu();
void adminShowAllClients();
void adminSearchClient();
void adminAddClient();
void adminUpdateClient();
void adminDeleteClient();
void adminSortList();
void adminPackageSummary();
void adminViewHistory();
void adminExportReport();
void runAdminPanel();

// --- Client Menu Functions ---
void showClientMenu();
void clientEnterDetails();
void clientViewDetails();
void clientViewPackageInfo();
void clientChangePackage();
void clientViewBookingSummary();
void clientViewAgeGroupInfo();
void clientViewHistory();
void clientClearDetails();
void runClientPanel();

// --- Main Menu ---
void runMainMenu();


// ============================================================
//   UTILITY FUNCTIONS
// ============================================================

// Clears the console screen
void clearScreen()
{
    system("cls");
}

// Waits for the user to press any key before continuing
void waitForKey()
{
    getch();
}

// Prints a formatted box header with a title
void printHeader(string title)
{
    cout << "|-------------------------------|" << endl;
    cout << "| " << title << endl;
    cout << "|-------------------------------|" << endl;
}

// Saves the latest admin action into the circular history array (max 6 entries)
void addToAdminHistory(string action)
{
    historyArray[historyIndex] = action;
    historyIndex++;
    if (historyIndex >= 6)
    {
        historyIndex = 0;   // Wrap around to overwrite oldest entry
    }
}

// Saves the latest client action into the circular history array (max 6 entries)
void addToClientHistory(string action)
{
    clientHistoryArray[clientHistoryIndex] = action;
    clientHistoryIndex++;
    if (clientHistoryIndex >= 6)
    {
        clientHistoryIndex = 0;  // Wrap around to overwrite oldest entry
    }
}


// ============================================================
//   AGE FUNCTIONS
// ============================================================

// Calculates age by subtracting birth year from current year (2026)
int calculateAge(int birthYear)
{
    return 2026 - birthYear;
}

// Returns age group label based on age value
// Infant: 0-2, Child: 3-12, Adult: 13+
string determineAgeGroup(int age)
{
    if (age >= 0 && age <= 2)
    {
        return "Infant";
    }
    else if (age > 2 && age <= 12)
    {
        return "Child";
    }
    else
    {
        return "Adult";
    }
}


// ============================================================
//   PACKAGE INPUT FUNCTION
// ============================================================

// Repeatedly asks the user to pick a package (1-4) until valid input is given
// Returns the valid package character chosen
char inputPackage()
{
    char pkg;

    while (true)
    {
        // Show the available packages with prices
        cout << "\n1. Economy  - PKR 250,000" << endl;
        cout << "2. 3 Star   - PKR 350,000" << endl;
        cout << "3. 4 Star   - PKR 500,000" << endl;
        cout << "4. 5 Star   - PKR 800,000" << endl;
        cout << "Select Package (1-4): ";
        cin >> pkg;
        cin.ignore();

        // Only accept options 1 through 4
        if (pkg == '1' || pkg == '2' || pkg == '3' || pkg == '4')
        {
            break;  // Valid input, exit loop
        }
        else
        {
            cout << "Wrong Input! Please Try Again" << endl;
        }
    }

    return pkg;
}


// ============================================================
//   CLIENT DETAILS INPUT / OUTPUT FUNCTIONS
// ============================================================

// Takes all passenger details from the user and stores them at position 'pos'
// Uses parallel arrays to store each piece of data separately
void inputClientDetails(int pos)
{
    cout << "Enter Name: ";
    getline(cin, nameArray[pos]);

    cout << "Enter Father Name: ";
    getline(cin, fatherNameArray[pos]);

    cout << "Enter Date of Birth: ";
    getline(cin, birthDateArray[pos]);

    cout << "Enter Birth Year: ";
    cin >> birthYearArray[pos];
    cin.ignore();

    // Calculate and store age and age group automatically
    ageArray[pos]      = calculateAge(birthYearArray[pos]);
    ageGroupArray[pos] = determineAgeGroup(ageArray[pos]);

    cout << "Enter Passport Number: ";
    getline(cin, passportNumberArray[pos]);

    cout << "Enter Expiry Date: ";
    getline(cin, expiryDateArray[pos]);

    // Get valid package choice using helper function
    packageOptionArray[pos] = inputPackage();
}

// Prints all stored details for the client at position 'pos'
void printClientDetails(int pos)
{
    cout << "\nName     : " << nameArray[pos] << endl;
    cout << "Father   : " << fatherNameArray[pos] << endl;
    cout << "DOB      : " << birthDateArray[pos] << endl;
    cout << "Age      : " << ageArray[pos] << " (" << ageGroupArray[pos] << ")" << endl;
    cout << "Passport : " << passportNumberArray[pos] << endl;
    cout << "Expiry   : " << expiryDateArray[pos] << endl;
    cout << "Package  : " << packageOptionArray[pos] << endl;
}


// ============================================================
//   ADMIN LOGIN FUNCTION
// ============================================================

// Gives admin 3 attempts to log in with correct username and password
// Returns true if login is successful, false if all 3 attempts fail
bool adminLogin()
{
    for (int i = 0; i < 3; i++)
    {
        clearScreen();
        printHeader("--------Welcome to UBMS--------");
        cout << "Login attempt - " << i + 1 << endl;

        string username, password;

        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        // Check against hardcoded admin credentials
        if (username == "admin" && password == "123")
        {
            cout << "Logged in Successfully" << endl;
            waitForKey();
            return true;  // Login passed
        }
        else
        {
            cout << "Wrong Credentials! Please Try Again..." << endl;
            waitForKey();
        }
    }

    return false;  // All 3 attempts failed
}


// ============================================================
//   ADMIN MENU DISPLAY FUNCTION
// ============================================================

// Prints the Admin Menu options on screen
void showAdminMenu()
{
    clearScreen();
    printHeader("----------Admin Menu-----------");
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
}


// ============================================================
//   ADMIN FEATURE FUNCTIONS
// ============================================================

// Displays all clients stored in the system
void adminShowAllClients()
{
    clearScreen();
    printHeader("--------All Clients------------");

    if (index == 0)
    {
        cout << "No records found." << endl;
    }
    else
    {
        // Loop through every stored client and print their details
        for (int i = 0; i < index; i++)
        {
            cout << "\n#" << i + 1 << endl;
            printClientDetails(i);
            cout << "----------------------------" << endl;
        }
    }

    addToAdminHistory("Viewed All Clients");
    waitForKey();
}

// Searches for a client by Name or Passport Number
void adminSearchClient()
{
    clearScreen();
    printHeader("--------Search Client----------");
    cout << "1. Search by Name" << endl;
    cout << "2. Search by Passport Number" << endl;
    cout << "Choose: ";

    char searchOption;
    cin >> searchOption;
    cin.ignore();

    cout << "Enter Search Term: ";
    string searchTerm;
    getline(cin, searchTerm);

    int foundIndex = -1;  // -1 means not found yet

    if (searchOption == '1')
    {
        // Search through nameArray for a matching name
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
        // Search through passportNumberArray for a matching number
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

    // Print result if found
    if (foundIndex != -1)
    {
        cout << "\nRecord Found!" << endl;
        printClientDetails(foundIndex);
    }
    else if (searchOption == '1' || searchOption == '2')
    {
        cout << "Record Not Found." << endl;
    }

    addToAdminHistory("Searched Client");
    waitForKey();
}

// Adds a new client record to the system
void adminAddClient()
{
    clearScreen();
    printHeader("------Add Client Record--------");

    // Store the new client at the current 'index' position
    inputClientDetails(index);
    index++;  // Move index forward so next client goes to the next slot

    cout << "\nClient added successfully!" << endl;
    addToAdminHistory("Added Client Record");
    waitForKey();
}

// Updates an existing client record chosen by record number
void adminUpdateClient()
{
    clearScreen();
    printHeader("-----Update Client Record------");

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

        // Validate the record number is within range
        if (recordNum >= 1 && recordNum <= index)
        {
            int pos = recordNum - 1;  // Convert to 0-based array position
            inputClientDetails(pos);  // Overwrite existing data at that position
            cout << "\nRecord updated successfully!" << endl;
        }
        else
        {
            cout << "Wrong Input! Please Try Again" << endl;
        }
    }

    addToAdminHistory("Updated Client Record");
    waitForKey();
}

// Deletes a client record and shifts remaining records up to fill the gap
void adminDeleteClient()
{
    clearScreen();
    printHeader("-----Delete Client Record------");

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

            // Shift all records after 'pos' one step backward to fill the gap
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

            index--;  // One less client now
            cout << "\nRecord deleted successfully!" << endl;
        }
        else
        {
            cout << "Wrong Input! Please Try Again" << endl;
        }
    }

    addToAdminHistory("Deleted Client Record");
    waitForKey();
}

// Sorts all client records using Bubble Sort by Name, Age, or Package
// All parallel arrays are swapped together to keep data aligned
void adminSortList()
{
    clearScreen();
    printHeader("-----Sorted Passenger List-----");
    cout << "1. Sort by Name" << endl;
    cout << "2. Sort by Age" << endl;
    cout << "3. Sort by Package" << endl;
    cout << "Choose: ";

    char sortOption;
    cin >> sortOption;
    cin.ignore();

    // Bubble Sort - compares adjacent elements and swaps if out of order
    for (int i = 0; i < index - 1; i++)
    {
        for (int j = 0; j < index - i - 1; j++)
        {
            bool doSwap = false;

            // Decide whether to swap based on chosen sort field
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
                // Swap ALL parallel arrays so every field stays matched correctly
                string tempStr;
                int    tempInt;
                char   tempChar;

                tempStr = nameArray[j];           nameArray[j] = nameArray[j+1];                     nameArray[j+1] = tempStr;
                tempStr = fatherNameArray[j];     fatherNameArray[j] = fatherNameArray[j+1];         fatherNameArray[j+1] = tempStr;
                tempStr = birthDateArray[j];      birthDateArray[j] = birthDateArray[j+1];           birthDateArray[j+1] = tempStr;
                tempInt = birthYearArray[j];      birthYearArray[j] = birthYearArray[j+1];           birthYearArray[j+1] = tempInt;
                tempInt = ageArray[j];            ageArray[j] = ageArray[j+1];                       ageArray[j+1] = tempInt;
                tempStr = ageGroupArray[j];       ageGroupArray[j] = ageGroupArray[j+1];             ageGroupArray[j+1] = tempStr;
                tempStr = passportNumberArray[j]; passportNumberArray[j] = passportNumberArray[j+1]; passportNumberArray[j+1] = tempStr;
                tempStr = expiryDateArray[j];     expiryDateArray[j] = expiryDateArray[j+1];         expiryDateArray[j+1] = tempStr;
                tempChar = packageOptionArray[j]; packageOptionArray[j] = packageOptionArray[j+1];   packageOptionArray[j+1] = tempChar;
            }
        }
    }

    // Print the sorted list
    for (int i = 0; i < index; i++)
    {
        cout << i + 1 << ". " << nameArray[i]
             << " | Age: " << ageArray[i] << " (" << ageGroupArray[i] << ")"
             << " | Pkg: " << packageOptionArray[i] << endl;
    }

    addToAdminHistory("Generated Sorted List");
    waitForKey();
}

// Counts how many clients are in each package and calculates total revenue
void adminPackageSummary()
{
    clearScreen();
    printHeader("------Package Summary----------");

    // Count clients per package
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    for (int i = 0; i < index; i++)
    {
        if      (packageOptionArray[i] == '1') { c1++; }
        else if (packageOptionArray[i] == '2') { c2++; }
        else if (packageOptionArray[i] == '3') { c3++; }
        else if (packageOptionArray[i] == '4') { c4++; }
    }

    // Show count and revenue for each package
    cout << "\nEconomy : " << c1 << " clients | PKR " << c1 * 250000 << endl;
    cout << "3 Star  : " << c2 << " clients | PKR " << c2 * 350000 << endl;
    cout << "4 Star  : " << c3 << " clients | PKR " << c3 * 500000 << endl;
    cout << "5 Star  : " << c4 << " clients | PKR " << c4 * 800000 << endl;

    // Total revenue = sum of all package earnings
    int totalRevenue = (c1 * 250000) + (c2 * 350000) + (c3 * 500000) + (c4 * 800000);
    cout << "Total Revenue : PKR " << totalRevenue << endl;

    addToAdminHistory("Viewed Package Summary");
    waitForKey();
}

// Shows the last 6 admin actions that were performed
void adminViewHistory()
{
    clearScreen();
    printHeader("--------Action History---------");

    for (int i = 0; i < 6; i++)
    {
        // Only print slots that have an entry
        if (historyArray[i] != "")
        {
            cout << i + 1 << ". " << historyArray[i] << endl;
        }
    }

    waitForKey();
}

// Exports a quick summary report of all clients
void adminExportReport()
{
    clearScreen();
    printHeader("--------Booking Report---------");
    cout << "Total Records: " << index << endl;
    cout << "===============================" << endl;

    for (int i = 0; i < index; i++)
    {
        cout << "#" << i + 1 << " "
             << nameArray[i] << " | "
             << ageGroupArray[i] << " | Pkg: "
             << packageOptionArray[i] << endl;
    }

    addToAdminHistory("Exported Report");
    waitForKey();
}

// Runs the full Admin Panel - login then menu loop
void runAdminPanel()
{
    // First, verify admin credentials (max 3 tries)
    if (adminLogin() == false)
    {
        return;  // Login failed all 3 times, go back to main menu
    }

    // Admin is logged in - show the menu in a loop until they log out
    while (true)
    {
        showAdminMenu();

        char adminOption;
        cin >> adminOption;
        cin.ignore();

        if      (adminOption == '1') { adminShowAllClients(); }
        else if (adminOption == '2') { adminSearchClient();   }
        else if (adminOption == '3') { adminAddClient();      }
        else if (adminOption == '4') { adminUpdateClient();   }
        else if (adminOption == '5') { adminDeleteClient();   }
        else if (adminOption == '6') { adminSortList();       }
        else if (adminOption == '7') { adminPackageSummary(); }
        else if (adminOption == '8') { adminViewHistory();    }
        else if (adminOption == '9') { adminExportReport();   }
        else if (adminOption == '0')
        {
            break;  // Logout - exit admin loop and go back to main menu
        }
        else
        {
            cout << "Wrong Input! Please Try Again" << endl;
            waitForKey();
        }
    }
}


// ============================================================
//   CLIENT MENU DISPLAY FUNCTION
// ============================================================

// Prints the Client Dashboard menu options on screen
void showClientMenu()
{
    clearScreen();
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
}


// ============================================================
//   CLIENT FEATURE FUNCTIONS
// ============================================================

// Lets the client enter their own passenger details
void clientEnterDetails()
{
    clearScreen();
    cout << "|------------------------------------|" << endl;
    cout << "|------Enter Passenger Details-------|" << endl;
    cout << "|------------------------------------|" << endl;

    inputClientDetails(index);  // Store at current index slot
    index++;                    // Increase count

    cout << "\nYour details have been entered successfully" << endl;
    addToClientHistory("Entered Passenger Details");

    cout << "Press any Button to continue..." << endl;
    waitForKey();
}

// Shows the most recently entered passenger details (last record)
void clientViewDetails()
{
    clearScreen();
    cout << "|------------------------------------|" << endl;
    cout << "|--------Passenger Details-----------|" << endl;
    cout << "|------------------------------------|" << endl;

    if (index == 0)
    {
        cout << "No details entered yet." << endl;
    }
    else
    {
        // Show the last entered record (index-1 is the most recent)
        printClientDetails(index - 1);
    }

    addToClientHistory("Viewed Passenger Details");
    waitForKey();
}

// Displays all available Umrah package options with their details
void clientViewPackageInfo()
{
    clearScreen();
    cout << "Economy : 10 Days | PIA | Shuttle Inn Makkah | PKR 250,000" << endl;
    cout << "3 Star  : 14 Days | Emirates | Al Massa Makkah | PKR 350,000" << endl;
    cout << "4 Star  : 17 Days | Saudi Airlines | Conrad Makkah | PKR 500,000" << endl;
    cout << "5 Star  : 21 Days | Qatar Airways | Swissotel Makkah | PKR 800,000" << endl;

    addToClientHistory("Viewed Package Details");
    waitForKey();
}

// Allows client to change the package for a specific passenger record
void clientChangePackage()
{
    clearScreen();
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

            // Keep asking until a valid package is chosen
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

    addToClientHistory("Changed Package");
    waitForKey();
}

// Shows a booking summary for the most recently entered passenger
void clientViewBookingSummary()
{
    clearScreen();
    cout << "|------------------------------------|" << endl;
    cout << "|--------Booking Summary-------------|" << endl;
    cout << "|------------------------------------|" << endl;

    if (index == 0)
    {
        cout << "No details entered yet." << endl;
    }
    else
    {
        int pos = index - 1;  // Most recent record

        cout << "Name    : " << nameArray[pos] << endl;
        cout << "Age     : " << ageArray[pos] << " (" << ageGroupArray[pos] << ")" << endl;
        cout << "Passport: " << passportNumberArray[pos] << endl;

        // Print the package name and price based on the stored package option
        if      (packageOptionArray[pos] == '1') { cout << "Package : Economy - PKR 250,000" << endl; }
        else if (packageOptionArray[pos] == '2') { cout << "Package : 3 Star - PKR 350,000"  << endl; }
        else if (packageOptionArray[pos] == '3') { cout << "Package : 4 Star - PKR 500,000"  << endl; }
        else if (packageOptionArray[pos] == '4') { cout << "Package : 5 Star - PKR 800,000"  << endl; }

        cout << "\nThank you for choosing us!" << endl;
    }

    addToClientHistory("Viewed Booking Summary");
    waitForKey();
}

// Shows what each age group means and how age is calculated
void clientViewAgeGroupInfo()
{
    clearScreen();
    cout << "Infant : 0-2 years   (No seat)"    << endl;
    cout << "Child  : 3-12 years  (Child fare)"  << endl;
    cout << "Adult  : 13+ years   (Full fare)"   << endl;
    cout << "Age = 2026 - Birth Year"            << endl;

    addToClientHistory("Viewed Age Group Info");
    waitForKey();
}

// Shows the last 6 client actions that were performed
void clientViewHistory()
{
    clearScreen();
    cout << "|------------------------------------|" << endl;
    cout << "|--------Action History--------------|" << endl;
    cout << "|------------------------------------|" << endl;

    for (int i = 0; i < 6; i++)
    {
        // Only print slots that have an entry
        if (clientHistoryArray[i] != "")
        {
            cout << i + 1 << ". " << clientHistoryArray[i] << endl;
        }
    }

    waitForKey();
}

// Clears the most recently entered passenger record
void clientClearDetails()
{
    clearScreen();

    if (index == 0)
    {
        cout << "No details to clear." << endl;
    }
    else
    {
        int pos = index - 1;  // Most recent record position

        // Reset all fields for that record to empty/default values
        nameArray[pos]           = "";
        fatherNameArray[pos]     = "";
        birthDateArray[pos]      = "";
        birthYearArray[pos]      = 0;
        ageArray[pos]            = 0;
        ageGroupArray[pos]       = "";
        passportNumberArray[pos] = "";
        expiryDateArray[pos]     = "";
        packageOptionArray[pos]  = '0';

        index--;  // Reduce count since one record was removed
        cout << "Details cleared." << endl;
    }

    addToClientHistory("Cleared Details");
    waitForKey();
}

// Runs the full Client Panel - shows menu in a loop until client exits
void runClientPanel()
{
    while (true)
    {
        showClientMenu();

        char clientOption;
        cin >> clientOption;
        cin.ignore();

        // Options 1 and 6 both enter passenger details (first or additional)
        if      (clientOption == '1' || clientOption == '6') { clientEnterDetails();       }
        else if (clientOption == '2') { clientViewDetails();        }
        else if (clientOption == '3') { clientViewPackageInfo();    }
        else if (clientOption == '4') { clientChangePackage();      }
        else if (clientOption == '5') { clientViewBookingSummary(); }
        else if (clientOption == '7') { clientViewAgeGroupInfo();   }
        else if (clientOption == '8') { clientViewHistory();        }
        else if (clientOption == '9') { clientClearDetails();       }
        else if (clientOption == '0')
        {
            cout << "Thank you for choosing us for your prestigious journey!" << endl;
            waitForKey();
            break;  // Exit the client panel loop
        }
        else
        {
            cout << "Wrong Input! Please Try Again" << endl;
            waitForKey();
        }
    }
}


// ============================================================
//   MAIN MENU FUNCTION
// ============================================================

// Displays the main menu and routes to Admin or Client panel
void runMainMenu()
{
    while (true)
    {
        clearScreen();

        // Print the application banner
        cout << "|---------------------------------------------|" << endl;
        cout << "|-------Umrah Booking Management System-------|" << endl;
        cout << "|---------------------------------------------|" << endl;

        cout << "\nUser Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Client" << endl;
        cout << "3. Exit Application" << endl;
        cout << "Choose an Option: ";

        char userOption;
        cin >> userOption;

        if (userOption == '1')
        {
            runAdminPanel();   // Go to Admin section
        }
        else if (userOption == '2')
        {
            runClientPanel();  // Go to Client section
        }
        else if (userOption == '3')
        {
            clearScreen();
            cout << "Thank you for using Umrah Booking Management Application" << endl;
            waitForKey();
            break;  // Exit the main loop and end the program
        }
        else
        {
            cout << "Wrong Input! Please try Again" << endl;
            waitForKey();
        }
    }
}


// ============================================================
//   MAIN FUNCTION
// ============================================================

// Entry point of the program - just calls runMainMenu()
// All real logic is now inside the individual functions above
int main()
{
    runMainMenu();
    return 0;
}