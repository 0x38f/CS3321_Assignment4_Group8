/*This class is responsible for obtaining required information about
Staff, Firms, and Depositions in the database. It does this by taking the information entered into a form by a staff member which is saved as a RandomAccessFile.txt. With the help of the Database class it takes the file and updates the correct table of the database. */

#include "RegisterClass.cpp"
#include "DatabaseClass.cpp"
class UserData {

private:
	Database UserDatabase;
	Registration registration;

	//Variable to store result
	UserDatabase.rs->next();
	if (rs -> next() != NULL)
	{
		cout << left;
		cout << setw(18) << row[0]
			<< setw(18) << row[1]
			<< setw(18) << row[2]
			<< setw(18) << row[3] << endl;
	}
	cout << endl;

	//Read in new File
	ifstream infile;
	infile.open("RandomAccessFile.txt");
	//Error Message if unable to read file
	if (infile.fail())
		cout << "ERROR. Could not open file!" << endl;

	void userFirm() {
		//Adds new Data to Firm table
		while(infile){
			UserDatabase.rs->next(infile);
				string fID;
				infile >> fID;
				cout << fID << endl;
				string firmName;
				infile >> firmName;
				cout << firmName << endl;
				int firmRate;
				infile >> firmRate;
				cout << firmRate << endl;
				string startdate;
				infile >> startdate;
				cout << startdate << endl;
				float phoneNumber;
				infile >> phoneNumber;
				cout << phoneNumber << endl;
				string address;
				infile >> address;
				cout << address << endl;
				string email;
				infile >> email;
				cout << email << endl;
				database.getUpdateFirm(infile);
			}
		}
	void userStaff(){
	// Adds new Data to Staff table
		while (infile) {
			UserDatabase.rs->next(infile);
				string sID;
				infile >> sID;
				cout << sID << endl;
				string name;
				infile >> name;
				cout << name << endl;
				int salary;
				infile >> salary;
				cout << salary << endl;
				string startdate;
				infile >> startdate;
				cout << startdate << endl;
				float phoneNumber;
				infile >> phoneNumber;
				cout << phoneNumber << endl;
				string address;
				infile >> address;
				cout << address << endl;
				string birthdate;
				infile >> birthdate;
				cout << birthdate << endl;
				database.getUpdateStaff(infile);
			}
		}
	void schedule(){
		//Adds new Data to Schedule table
		while (infile) {
			UserDatabase.rs->next(infile);
				string date;
				infile >> date;
				cout << date << endl;
				string time;
				infile >> time;
				cout << time << endl;
				int sID;
				infile >> sID;
				cout << sID << endl;
				string firmName;
				infile >> firmName;
				cout << firmName << endl;
				float hoursReserved;
				infile >> hoursReserved;
				cout << hoursReserved << endl;
				string calendar;
				infile >> calendar;
				cout << calendar << endl;
				string misc;
				infile >> misc;
				cout << misc << endl;
				database.getUpdateSchedule()
			}
		}
	void newUser() {
		//Adds login information into New User Table in Database
		while (registration.getRegisterAccount()) {
			UserDatabase.getupdateNewUser();
		}
	}
public:
	//Setter

	void setUserFirm(string firm) {
		string userFirm = firm;
	}
	void setUserStaff(string staff) {
		string userStaff = staff;
	}
	void setSchedule(string schedule) {
		string schedule = schedule;
	}




	// Getter
	void getUserFirm() {
		return userFirm;
	}
	void getUserStaff() {
		return userStaff;
	}
	void getSchedule() {
		return schedule;
	}
};
