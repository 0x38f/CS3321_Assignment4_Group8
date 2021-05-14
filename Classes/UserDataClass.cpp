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
  Database db;
  Registration registration;

private:
    string user;
    //Retreives Users from database
    void retrieve() {
        Base db;
        db.setUsersPrint();
        db.getUsersPrint();
        db.getStaffPrint();
        db.setStaffPrint();
    }

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

        db.getUsersPrint();
        vector<string> usersNew;
        for (int i = 0; i < usersNew.size(); i++) {
            users.swap(usersNew);
            usersNew.clear();
        }
    }
    void userStaff(vector<string> staff) {
        
        db.getStaffPrint();
        for (int i = 0; i < staff.size(); i++) {
            cout << staff.front();
        }
    }
    string userData() {

        registration.getRegisterAccount();
        ifstream myfile("newaccountfile.txt");
        for (int i = 0; i >= myfile.eof(); i++) {
            cout << i << endl;
        }
    }
public:

    //setters and getters
    void setUserStaff(string u) {
       string users = u;
    }
    void setUpdate(string d) {
        string users = d;
    }
    void setAppend(string a) {
        string users = a;
    }
    void setUserData(string u) {
        string users = u;
    }
    string getUpdate() {
        string users;
        return users;
    }
    string getAppend() {
        string users;
        return users;
    }
    string getUserStaff() {
        string users;
        return users;
    }
    string getUserData() {
        string users;
        return users;
    }
};
