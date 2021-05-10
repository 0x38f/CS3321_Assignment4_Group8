/* Schedule Class is responsible for scheduling the firms who need rooms for their depositions.*/
#include <string>
#include <iostream>
#include <vector>

#include "DatabaseClass.cpp"

using namespace std;

class Schedule {

    Database Data;

    string office, staff, calendar, issueEmail, sendEmail, eConfirm;
    float time;
    double room;

    void getIssueEmail(string confirmation) {
        eConfirm =  confirmation;
    }

    void setIssueEmail(string sEmail) {
        sendEmail = sEmail;
    }

    string getOffice(){
        return office;
    }

    string getStaff(){
        return staff;
    }

    double getRoom() {
        return room;
    }

    float getTime() {
        return time;
    }

    string getDate() {
        return calendar;
    }
    
private:
    
    void reserve(int date, int time, string depoName, string depoCity, string depoState) {
        
        Data.setSchedPrint();
        vector<string> depoSched = Data.getSchedPrint();
        
        string addToSchedule = to_string(date) + "," + to_string(time) + "," + depoName + "," + depoCity + "," + depoState;
        
        depoSched.push_back(addToSchedule);
        
    }
    
public:
    void scheduleDepo(int date, int time, string depoName, string depoCity, string depoState) {
        
        reserve(date, time, depoName, depoCity, depoState);
        
    }
    
};
