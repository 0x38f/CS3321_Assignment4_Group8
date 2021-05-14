//
//  DatabaseClass.hpp
//  FinalAssignment_Testing
//
//  Created by Phillip Sanders on 5/13/21.
//

#ifndef DatabaseClass_hpp
#define DatabaseClass_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;

class Database {
    
public:
    
    //getter and setters
    
    void setConfrmPrint();
    
    void setDepoPrint();
    
    void setFirmPrint();
    
    void setOfficesPrint();
    
    void setSchedPrint();
    
    void setStaffPrint();
    
    void setUsersPrint();
    
    vector<string> getUsersPrint();
    
    vector<string> getStaffPrint();
    
    vector<string> getDepoPrint();
    
    vector<string> getFirmPrint();
    
    vector<string> getOfficesPrint();
    
    vector<string> getSchedPrint();
    
    vector<string> getConfrmPrint();
    
private:
    
    vector<string> confrmVec, depoVec, firmVec, officesVec, schedVec, staffVec, usersVec;
    
    //Construct Vector based on contents of csv file
    vector<string> confrm();
    
    //Displays vector contents
    void confrmPrint(vector<string> vec1);
    
    //Construct Vector based on contents of csv file
    vector<string> depo();
    
    //Displays vector contents
    void depoPrint(vector<string> vec2);
    
    //Construct Vector based on contents of csv file
    vector<string> firm();
    
    //Displays vector contents
    void firmPrint(vector<string> vec3);
    
    //Construct Vector based on contents of csv file
    vector<string> offices();
    
    //Displays vector contents
    void officesPrint(vector<string> vec4);
    
    //Construct Vector based on contents of csv file
    vector<string> scheddepo();
    
    //Displays vector contents
    void schedPrint(vector<string> vec5);
    
    //Construct Vector based on contents of csv file
    vector<string> staff();
    
    //Displays vector contents
    void staffPrint(vector<string> vec6);
    
    
    //Construct Vector based on contents of csv file
    vector<string> users();
    
    //Displays vector contents
    void usersPrint(vector<string> vec7);
    
};

#endif /* DatabaseClass_hpp */
