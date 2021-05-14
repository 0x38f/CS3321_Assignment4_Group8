//
//  UserInterfaceClass.hpp
//  FinalAssignment_Testing
//
//  Created by Phillip Sanders on 5/13/21.
//

#ifndef UserInterfaceClass_hpp
#define UserInterfaceClass_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class UserInterface {

private:

    //UI for logging in
    void loginScreen();

   //UI for Registration
    void uiRegister(string user);

    //displays the menu options
    int uiOptions();

    //selects which ui to run depending on the option chose.
    void uiSelector(int selection);

    //UI Responsible for scheduling deposition
    void scheduleUI();

    //UI for searching for Depositions by name
    void searchUI();

    //UI displays all the depos by firms
    void calendarUI();

    //UI that displays invoicing
    void invoicingUI();

    //UI that displays help portal
    void requestUI();


public:

    //Brings up login UI
    void loginUI();

    //Clears screen
    void clearScreen();

    //Displays site menu after login
    void siteMenu();

};



#endif /* UserInterfaceClass_hpp */
