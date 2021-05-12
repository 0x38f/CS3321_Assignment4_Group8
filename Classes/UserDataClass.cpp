/*This class is responsible for obtaining required information about
Staff, Firms, and Depositions in the database. It does this by taking the information entered into a form by a staff member which is saved as a RandomAccessFile.txt. With the help of the Database class it takes the file and updates the correct table of the database. */

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "DatabaseClass.cpp"
#include "RegistrationClass.cpp"

using namespace std;

class UserData {



private:

    string users;
    //Retreives Users from database
    void retrieve() {

        Database db;

        db.setUsersPrint();

        db.getUsersPrint();
        db.getStaffPrint();
        db.setStaffPrint();


    }
    Database db;
    vector<string> users = db.getUsersPrint();


    //Saves updated depositions	to database
    void update(vector<string> users) {

        for (int i = 0; i < unsigned(users.size()); i++) {
            for (int j = 0; j < unsigned(users[i].size()); j++) {
                cout << users[i][j] << " ";
                cout << endl;
            }
        }
    }

    //Allows modifications to saved depositions
    void append(vector<string> users) {
        Database db;
        db.getUsersPrint();
        vector<string> usersNew;

        for (int i = 0; i < usersNew.size(); i++) {
            users.swap(usersNew);
            usersNew.clear();
        }


    }


    void userStaff(vector<string> staff) {
        Database db;
        db.getStaffPrint();

        for (int i = 0; i < staff.size(); i++) {
            cout << staff.front();
        }

    }

   string userData() {
        Registration registration;
        registration.getRegisterAccount();
        ifstream myfile("newaccountfile.txt");

        for (int i = 0; i >= myfile.eof();  i++) {
            cout << i << endl;
        }
    }

public:

    //setters and getters
    void setUserStaff(string u) {
        users = u;
    }

    void setUpdate(string d) {
        users = d;
    }

    void setAppend(string a) {
        users = a;
    }
    void setUserData(string u) {
        users = u;
    }

    string getUpdate() {
        return users;
    }

    string getAppend() {
        return users;
    }
    string getUserStaff() {
        return users;
    }
    string getUserData() {
        return users;
    }
};
