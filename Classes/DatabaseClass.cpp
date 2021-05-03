/* The Database class is responsible for communicating, updating, and reading from the different tables in the database.	*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <DepositonClass.cpp>
using namespace std;



class Database {

private:
	string confrm, depo, firm, offices, sched, staff, users;

public:
	//getter and setters

	void setConfrmPrint(string c) {
		confrm = c;
	}
	void setDepoPrint(string d) {
		 depo = d;
	}
	void setFirmPrint(string f) {
		 firm = f;
	}
	void setOfficesPrint(string o) {
		 offices = o;
	}
	void setSchedPrint(string sc) {
		 sched = sc;
	}
	void setStaffPrint(string s) {
		 staff = s;
	}
	void setUsersPrint(string u) {
		 users = u;
	}

	string getUsersPrint() {
		return users;
	}
	string getStaffPrint() {
		return staff;
	}
	string getDepoPrint() {
		return depo;
	}
	string getFirmPrint() {
		return firm;
	}
	string getOfficesPrint() {
		return offices;
	}
	string getSchedPrint() {
		return sched;
	}
	string getConfrmPrint() {
		return confrm;
	}




private:
	//Construct Vector based on contents of csv file
	void confrm() {
		//open file
		ifstream myfile("ConferenceRoom.csv");
		//Construct vector
		vector<vector<string>> vec1{
				istream_iterator<string>(myfile),
				istream_iterator<string>()
		};
	}

		//Displays vector contents
		void confrmPrint(vector<vector<string>> vec1) {

			for (int i = 0; i != vec1.size(); i++) {
				cout << i << " ";
				cout << endl;
			}
		}

	//Construct Vector based on contents of csv file
	void depo() {
		//open file
		ifstream myfile("Deposition.csv");
		//Construct vector
		vector<vector<string>> vec2{
				istream_iterator<string>(myfile),
				istream_iterator<string>()
		};
	}


		// saves updated depositions
		void update() {
			Deposition depo;
			depo.setUpdate(depo);
				cout << depo.getUpdate();
		}
	   //Appends saved depositions
		void append() {
			Deposition depo;
			depo.setAppend(depo);
			cout << depo.getAppend();
		}


		//Displays vector contents
	void depoPrint(vector<vector<string>> vec2) {

		for (int i = 0; i != vec2.size(); i++) {
			cout << i << " ";
			cout << endl;
			}
		}

	//Construct Vector based on contents of csv file
	void firm() {
		//open file
		ifstream myfile("Firm.csv");
		//Construct vector
		vector<vector<string>> vec3{
				istream_iterator<string>(myfile),
				istream_iterator<string>()
		};
	}
		//Displays vector contents
		void firmPrint(vector<vector<string>> vec3) {

			for (int i = 0; i != vec3.size(); i++) {
				cout << i << " ";
				cout << endl;
			}
		}
	//Construct Vector based on contents of csv file
	void offices() {
		//open file
		ifstream myfile("Offices.csv");
		//Construct vector
		vector<vector<string>> vec4{
				istream_iterator<string>(myfile),
				istream_iterator<string>()
		};
	}
		//Displays vector contents
		void officesPrint(vector<vector<string>> vec4) {

			for (int i = 0; i != vec4.size(); i++) {
				cout << i << " ";
				cout << endl;
			}
		}
	//Construct Vector based on contents of csv file
	void scheddepo() {
		//open file
		ifstream myfile("ScheduledDepo.csv");
		//Construct vector
		vector<vector<string>> vec5{
				istream_iterator<string>(myfile),
				istream_iterator<string>()
		};
	}
		//Displays vector contents
		void schedPrint(vector<vector<string>> vec5) {

			for (int i = 0; i != vec5.size(); i++) {
				cout << i << " ";
				cout << endl;
			}
		}
	//Construct Vector based on contents of csv file
	void staff() {
		//open file
		ifstream myfile("Staff.csv");
		//Construct vector
		vector<vector<string>> vec6{
				istream_iterator<string>(myfile),
				istream_iterator<string>()
		};
	}
		//Displays vector contents
		void staffPrint(vector<vector<string>> vec6) {

			for (int i = 0; i != vec6.size(); i++) {
				cout << i << " ";
				cout << endl;
			}
		}

	//Construct Vector based on contents of csv file
	void users() {
		//open file
		ifstream myfile("Users.csv");
		//Construct vector
		vector<vector<string>> vec7 {
			istream_iterator<string>(myfile),
			istream_iterator<string>()
		};
	}
	//Displays vector contents
	void usersPrint(vector<vector<string>> vec7) {

		for (int i = 0; i != vec7.size(); i++) {
			cout << i << " ";
			cout << endl;
		}
	}


};
