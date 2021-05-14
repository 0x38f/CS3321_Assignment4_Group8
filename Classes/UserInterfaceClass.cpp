//
//  UserInterfaceClass.cpp
//  FinalAssignment_Testing
//
//  Created by Phillip Sanders on 5/13/21.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "UserInterfaceClass.hpp"
#include "RegisterClass.hpp"
#include "ScheduleClass.hpp"

using namespace std;

//UI for logging in
void UserInterface::loginScreen() {
    
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
void UserInterface::uiRegister(string user) {
    
    Registration Registration;
    
    string email;
    string uName;
    string pass;
    
    if (user == "test") {
        
        clearScreen();
        
        cout << "Password is incorrect.\n";
        
        loginScreen();
        
    } else {
        
        cout << "Enter the following to register for a new account: \n";
        cout << "Email: ";
        getline(cin, email);
        cout << "Username: ";
        getline(cin, user);
        cout << "Create Password:";
        getline(cin, pass);
        
        Registration.registerAccount();
        
        clearScreen();
        
        cout << "Account Created";
        
        loginScreen();
        
        
    }
    
};

//displays the menu options
int UserInterface::uiOptions() {
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
void UserInterface::uiSelector(int selection) {
    
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
void UserInterface::scheduleUI() {
    
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
    
    cout << "Deposition Scheduled.";
    
};

//UI for searching for Depositions by name
void UserInterface::searchUI() {
    
    // Search depoSearch;
    
    string depoName;
    
    cout << "Search by Deposition name: ";
    cin >> depoName;
    
    //    depoSearch.searchResults(depoName);
    
};

//UI displays all the depos by firms
void UserInterface::calendarUI() {
    
    //  Search firmDepos;
    // UserData currentUser;
    
    cout << "View Scheduled Depositions.\n\n";
    
    //  firmDepos.searchResults(currentUser.getUserData);
    
};

//UI that displays invoicing
void UserInterface::invoicingUI() {
    
    //  InvoiceReport invoice;
    
    cout << "View Invoices here.\n\n";
    
    //    invoice.printReport();
    
};

//UI that displays help portal
void UserInterface::requestUI() {
    
    //   Communication helpSession;
    
    string chat;
    
    cout << "Please explain the issue you are having: ";
    cin >> chat;
    
    //   helpSession.chatTranscription;
    
};




//Brings up login UI
void UserInterface::loginUI() {
    loginScreen();
};

//Clears screen
void UserInterface::clearScreen() {
    system("cls");
};

//Displays site menu after login
void UserInterface::siteMenu() {
    uiSelector(uiOptions());
};


