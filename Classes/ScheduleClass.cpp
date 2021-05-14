//
//  ScheduleClass.cpp
//  FinalAssignment_Testing
//
//  Created by Phillip Sanders on 5/13/21.
//

#include <string>
#include <iostream>
#include <vector>

#include "ScheduleClass.hpp"
#include "DatabaseClass.hpp"

using namespace std;

void Schedule::getIssueEmail(string confirmation) {
    eConfirm =  confirmation;
}

void Schedule::setIssueEmail(string sEmail) {
    sendEmail = sEmail;
}

string Schedule::getOffice(){
    return office;
}

string Schedule::getStaff(){
    return staff;
}

double Schedule::getRoom() {
    return room;
}

float Schedule::getTime() {
    return time;
}

string Schedule::getDate() {
    return calendar;
}

void Schedule::reserve(int date, int time, string depoName, string depoCity, string depoState) {
    
    Database Data;
    
    Data.setSchedPrint();
    vector<string> depoSched = Data.getSchedPrint();
    
    string addToSchedule = to_string(date) + "," + to_string(time) + "," + depoName + "," + depoCity + "," + depoState;
    
    depoSched.push_back(addToSchedule);
    
}

void Schedule::scheduleDepo(int date, int time, string depoName, string depoCity, string depoState) {
    
    reserve(date, time, depoName, depoCity, depoState);
    
}





