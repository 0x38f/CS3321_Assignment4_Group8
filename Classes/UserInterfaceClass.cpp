//
//  UI.cpp
//  RegisterClass
//
//  Created by Phillip Sanders on 4/5/21.


#include <iostream>
#include <string>
#include <fstream>

#include "RegisterClass.cpp"
#include "ScheduleClass.cpp"

using namespace std;

class UserInterface {

private:

    //UI for logging in
    void loginScreen() {

        string uName;
        string pWord;

        cout << "Welcome to the DepoNet.\n";
        cout << "Log in with your username and password.\n";
        cout << "U: ";
        getline(cin, uName);
        cout << "P: ";
        getline(cin, pWord);

        if (uName == "test" && pWord == "!Temp123$?") {

            siteMenu();

        } else {

            uiRegister(uName);

        }

    };

   //UI for Registration
    void uiRegister(string user) {

        Registration Registration;

        string email;
        string uName;
        string pass;

        if (Registration.accountExists(uName)) {

            clearScreen();

            cout << "Password is incorrect.\n";

            loginScreen();

        } else {

            cout << "Enter the following to register for a new account: \n";
            cout << "Email";
            getline(cin, email);
            cout << "Username: ";
            getline(cin, uName);
            cout << "Create Password:";
            getline(cin, pass);

            Registration.registerAccount();

            clearScreen();

            cout << "Account Created";

            loginScreen();


        }

    };

    //displays the menu options
    int uiOptions() {
        int option;

        cout << "Please select an option\n";
        cout << "\t1. Schedule a deposition\n";
        cout << "\t2. Search for Deposition\n";
        cout << "\t3. View Calendar\n";
        cout << "\t4. Invoicing\n";
        cout << "\t5. Request Assistance.\n";
        cout << "\nEnter Selection: ";
        cin >> option;

        return option;

    };

    //selects which ui to run depending on the option chose.
    void uiSelector(int selection) {

        clearScreen();

        switch (selection) {
            case 1:
                scheduleUI();
                break;

            case 2:
                searchUI();
                break;

            case 3:
                calendarUI();
                break;

            case 4:
                invoicingUI();
                break;

            case 5:
                requestUI();
                break;

            default:
                uiSelector(uiOptions());
                break;
        }

    };

    //UI Responsible for scheduling deposition
    void scheduleUI() {

        Schedule scheduler;

        int depoDate;
        int depoTime;
        string depoName;
        string depoCity;
        string depoState;

        cout << "Schedule your deposition here.\n\n";
        cout << "Enter the Date of the deposition (MMDDYYYY): ";
        cin >> depoDate;
        cout << "Enter the Time of the deposition (HHMMSS): ";
        cin >> depoTime;
        cout << "Enter the Name of the deposition: ";
        cin >> depoName;
        cout << "Enter the City of the deposition: ";
        cin >> depoCity;
        cout << "Enter the State of the deposition: ";
        cin >> depoState;

        scheduler.scheduleDepo(depoDate, depoTime, depoName, depoName, depoCity);

    };

    //UI for searching for Depositions by name
    void searchUI() {

        Search depoSearch;

        string depoName;

        cout << "Search by Deposition name: ";
        cin >> depoName;

        depoSearch.searchResults(depoName);

    };

    //UI displays all the depos by firms
    void calendarUI() {

        Search firmDepos;
        UserData currentUser;

        cout << "View Scheduled Depositions.\n\n";

        firmDepos.searchResults(currentUser.getUserData);

    };

    //UI that displays invoicing
    void invoicingUI() {

        InvoiceReport invoice;

        cout << "View Invoices here.\n\n";

        invoice.printReport();

    };

    //UI that displays help portal
    void requestUI() {

        Communication helpSession;

        string chat;

        cout << "Please explain the issue you are having: ";
        cin >> chat;

        helpSession.chatTranscription;

    };


public:

    //Brings up login UI
    void loginUI() {
        loginScreen();
    };

    //Clears screen
    void clearScreen() {
        system("cls");
    };

    //Displays site menu after login
    void siteMenu() {
        uiSelector(uiOptions());
    };

};
