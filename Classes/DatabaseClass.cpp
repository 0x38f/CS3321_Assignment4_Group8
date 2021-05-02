/* The Database class is responsible for communicating, updating, and reading from the different tables in the database.	*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
using namespace std;



class Database {

public:
	//getter and setters

	void setConfrmPrint(string c) {
		string confrm = c;
	}
	void setDepoPrint(string d) {
		string depo = d;
	}
	void setFirmPrint(string f) {
		string firm = f;
	}
	void setOfficesPrint(string o) {
		string offices = o;
	}
	void setSchedPrint(string sc) {
		string sched = sc;
	}
	void setStaffPrint(string s) {
		string staff = s;
	}
	void setUsersPrint(string u) {
		string users = u;
	}

	string getUsersPrint(string users) {
		return users;
	}
	string getStaffPrint(string staff) {
		return staff;
	}
	string getDepoPrint(string depo) {
		return depo;
	}
	string getFirmPrint(string firm) {
		return firm;
	}
	string getOfficesPrint(string offices) {
		return offices;
	}
	string getSchedPrint(string sched) {
		return sched;
	}
	string getConfrmPrint(string confrm) {
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
