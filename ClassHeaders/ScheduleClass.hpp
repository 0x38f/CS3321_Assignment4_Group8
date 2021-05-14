//
//  ScheduleClass.hpp
//  FinalAssignment_Testing
//
//  Created by Phillip Sanders on 5/13/21.
//

#ifndef ScheduleClass_hpp
#define ScheduleClass_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Schedule {

    string office, staff, calendar, issueEmail, sendEmail, eConfirm;
    float time;
    double room;

    void getIssueEmail(string confirmation);

    void setIssueEmail(string sEmail);

    string getOffice();

    string getStaff();

    double getRoom();

    float getTime();
    
    string getDate();
    
private:
    
    void reserve(int date, int time, string depoName, string depoCity, string depoState);
    
public:
    
    void scheduleDepo(int date, int time, string depoName, string depoCity, string depoState);
    
};


#endif /* ScheduleClass_hpp */
