//
//  DatabaseClass.cpp
//  FinalAssignment_Testing
//
//  Created by Phillip Sanders on 5/13/21.
//



#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>

#include "DatabaseClass.hpp"

using namespace std;

//getter and setters

void Database::setConfrmPrint() {
    confrmVec = confrm();
}

void Database::setDepoPrint() {
    depoVec = depo();
}

void Database::setFirmPrint() {
    firmVec = firm();
}

void Database::setOfficesPrint() {
    officesVec = offices();
}

void Database::setSchedPrint() {
    schedVec = scheddepo();
}

void Database::setStaffPrint() {
    staffVec = staff();
}

void Database::setUsersPrint() {
    usersVec = users();
}

vector<string> Database::getUsersPrint() {
    return usersVec;
}

vector<string> Database::getStaffPrint() {
    return staffVec;
}

vector<string> Database::getDepoPrint() {
    return depoVec;
}

vector<string> Database::getFirmPrint() {
    return firmVec;
}

vector<string> Database::getOfficesPrint() {
    return officesVec;
}

vector<string> Database::getSchedPrint() {
    return schedVec;
}

vector<string> Database::getConfrmPrint() {
    return confrmVec;
}

//Construct Vector based on contents of csv file
vector<string> Database::confrm() {
    //open file
    ifstream myfile("ConferenceRoom.csv");
    //Construct vector
    vector<string> vec1{
        istream_iterator<string>(myfile),
        istream_iterator<string>()
    };
    
    return vec1;
}

//Displays vector contents
void Database::confrmPrint(vector<string> vec1) {
    
    for (int i = 0; i != vec1.size(); i++) {
        cout << vec1[i] << " ";
        cout << endl;
    }
}

//Construct Vector based on contents of csv file
vector<string> Database::depo() {
    //open file
    ifstream myfile("Deposition.csv");
    //Construct vector
    vector<string> vec2{
        istream_iterator<string>(myfile),
        istream_iterator<string>()
    };
    
    return vec2;
}

//Displays vector contents
void Database::depoPrint(vector<string> vec2) {
    
    for (int i = 0; i != vec2.size(); i++) {
        cout << vec2[i] << " ";
        cout << endl;
    }
}

//Construct Vector based on contents of csv file
vector<string> Database::firm() {
    //open file
    ifstream myfile("Firm.csv");
    //Construct vector
    vector<string> vec3{
        istream_iterator<string>(myfile),
        istream_iterator<string>()
    };
    
    return vec3;
}

//Displays vector contents
void Database::firmPrint(vector<string> vec3) {
    
    for (int i = 0; i != vec3.size(); i++) {
        cout << vec3[i] << " ";
        cout << endl;
    }
}

//Construct Vector based on contents of csv file
vector<string> Database::offices() {
    //open file
    ifstream myfile("Offices.csv");
    //Construct vector
    vector<string> vec4{
        istream_iterator<string>(myfile),
        istream_iterator<string>()
    };
    
    return vec4;
}

//Displays vector contents
void Database::officesPrint(vector<string> vec4) {
    
    for (int i = 0; i != vec4.size(); i++) {
        cout << vec4[i] << " ";
        cout << endl;
    }
}

//Construct Vector based on contents of csv file
vector<string> Database::scheddepo() {
    //open file
    ifstream myfile("ScheduledDepo.csv");
    //Construct vector
    vector<string> vec5{
        istream_iterator<string>(myfile),
        istream_iterator<string>()
    };
    
    return vec5;
}

//Displays vector contents
void Database::schedPrint(vector<string> vec5) {
    
    for (int i = 0; i != vec5.size(); i++) {
        cout << vec5[i] << " ";
        cout << endl;
    }
}

//Construct Vector based on contents of csv file
vector<string> Database::staff() {
    //open file
    ifstream myfile("Staff.csv");
    //Construct vector
    vector<string> vec6{
        istream_iterator<string>(myfile),
        istream_iterator<string>()
    };
    
    return vec6;
}

//Displays vector contents
void Database::staffPrint(vector<string> vec6) {
    
    for (int i = 0; i != vec6.size(); i++) {
        cout << vec6[i] << " ";
        cout << endl;
    }
}

//Construct Vector based on contents of csv file
vector<string> Database::users() {
    //open file
    ifstream myfile("Users.csv");
    //Construct vector
    vector<string> vec7 {
        istream_iterator<string>(myfile),
        istream_iterator<string>()
    };
    
    return vec7;
}

//Displays vector contents
void Database::usersPrint(vector<string> vec7) {
    
    for (int i = 0; i != vec7.size(); i++) {
        cout << vec7[i] << " ";
        cout << endl;
    }
}

<<<<<<< HEAD
=======
class Database {

private:
    vector<string> confrmVec, depoVec, firmVec, officesVec, schedVec, staffVec, usersVec;

public:
    //getter and setters

    void setConfrmPrint() {
        confrmVec = confrm();
    }
    void setDepoPrint() {
        depoVec = depo();
    }
    void setFirmPrint() {
        firmVec = firm();
    }
    void setOfficesPrint() {
        officesVec = offices();
    }
    void setSchedPrint() {
        schedVec = scheddepo();
    }
    void setStaffPrint() {
        staffVec = staff();
    }
    void setUsersPrint() {
        usersVec = users();
    }

    vector<string> getUsersPrint() {
        return usersVec;
    }
    vector<string> getStaffPrint() {
        return staffVec;
    }
    vector<string> getDepoPrint() {
        return depoVec;
    }
    vector<string> getFirmPrint() {
        return firmVec;
    }
    vector<string> getOfficesPrint() {
        return officesVec;
    }
    vector<string> getSchedPrint() {
        return schedVec;
    }
    vector<string> getConfrmPrint() {
        return confrmVec;
    }




private:
    //Construct Vector based on contents of csv file
    vector<string> confrm() {
        //open file
        ifstream myfile("ConferenceRoom.csv");
        //Construct vector
        vector<string> vec1{
                istream_iterator<string>(myfile),
                istream_iterator<string>()
        };

        return vec1;
    }

    //Displays vector contents
    void confrmPrint(vector<string> vec1) {

        for (int i = 0; i != vec1.size(); i++) {
            cout << vec1[i] << " ";
            cout << endl;
        }
    }

    //Construct Vector based on contents of csv file
    vector<string> depo() {
        //open file
        ifstream myfile("Deposition.csv");
        //Construct vector
        vector<string> vec2{
                istream_iterator<string>(myfile),
                istream_iterator<string>()
        };

        return vec2;
    }

    //Displays vector contents
    void depoPrint(vector<string> vec2) {

        for (int i = 0; i != vec2.size(); i++) {
            cout << vec2[i] << " ";
            cout << endl;
        }
    }

    //Construct Vector based on contents of csv file
    vector<string> firm() {
        //open file
        ifstream myfile("Firm.csv");
        //Construct vector
        vector<string> vec3{
                istream_iterator<string>(myfile),
                istream_iterator<string>()
        };

        return vec3;
    }
    //Displays vector contents
    void firmPrint(vector<string> vec3) {

        for (int i = 0; i != vec3.size(); i++) {
            cout << vec3[i] << " ";
            cout << endl;
        }
    }
    //Construct Vector based on contents of csv file
    vector<string> offices() {
        //open file
        ifstream myfile("Offices.csv");
        //Construct vector
        vector<string> vec4{
                istream_iterator<string>(myfile),
                istream_iterator<string>()
        };

        return vec4;
    }
    //Displays vector contents
    void officesPrint(vector<string> vec4) {

        for (int i = 0; i != vec4.size(); i++) {
            cout << vec4[i] << " ";
            cout << endl;
        }
    }
    //Construct Vector based on contents of csv file
    vector<string> scheddepo() {
        //open file
        ifstream myfile("ScheduledDepo.csv");
        //Construct vector
        vector<string> vec5{
                istream_iterator<string>(myfile),
                istream_iterator<string>()
        };

        return vec5;
    }
    //Displays vector contents
    void schedPrint(vector<string> vec5) {

        for (int i = 0; i != vec5.size(); i++) {
            cout << vec5[i] << " ";
            cout << endl;
        }
    }
    //Construct Vector based on contents of csv file
    vector<string> staff() {
        //open file
        ifstream myfile("Staff.csv");
        //Construct vector
        vector<string> vec6{
                istream_iterator<string>(myfile),
                istream_iterator<string>()
        };

        return vec6;
    }
    //Displays vector contents
    void staffPrint(vector<string> vec6) {

        for (int i = 0; i != vec6.size(); i++) {
            cout << vec6[i] << " ";
            cout << endl;
        }
    }

    //Construct Vector based on contents of csv file
    vector<string> users() {
        //open file
        ifstream myfile("Users.csv");
        //Construct vector
        vector<string> vec7{
            istream_iterator<string>(myfile),
            istream_iterator<string>()
        };

        return vec7;
    }
    //Displays vector contents
    void usersPrint(vector<string> vec7) {

        for (int i = 0; i != vec7.size(); i++) {
            cout << vec7[i] << " ";
            cout << endl;
        }
    }


};
>>>>>>> main
