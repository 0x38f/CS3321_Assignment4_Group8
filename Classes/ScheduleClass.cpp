/* Schedule Class is responsible for scheduling the firms who need rooms for their depositions.*/

#include "UserDataClass.cpp"
#include "DatabaseClass.cpp"

class Schedule {
UserData userdata;
Database database; 
string office, staff, calendar, issueEmail, sendEmail, eConfirm;
float time;
double room;

void getIssueEmail(string eConfirm) {
eConfirm = string confirmation;
}

void setIssueEmail(string sendEmail) {
sendEmail = string issueEmail;
}

String getUserData() {
return userData;
}

float reserve() {
Office = office;
Staff = staff;
Calendar = calendar;
Time = time;
Room = room;
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
return Calendar;
}

