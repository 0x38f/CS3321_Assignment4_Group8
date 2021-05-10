/* Request Class is responsible for routing the firm to the correct staff based on help topic firm has requested. A copy of the chat between the two parties is saved to be utilized by the Communication Class */

#include <string>
#include <iostream>
#include <fstream>
#include <istream>
using namespace std;

class Request {
public:
	

	void chatTranscript() {
		string chat[500];
		string line;
		int i;
		ifstream myfile("chatTranscript.txt");
		if (myfile.is_open()) {
			while (!myfile.eof()) {
				getline(myfile, line);
				cout << line << endl;
				for (i = 0; i < 500 - 1; i++) {
					chat[i] = line;

				};

			}
			myfile.close();
		}
		else {

			cout << "Unable to open file";

		}

		system("PAUSE");
	}

		//Routes to Correct Staff member based on Topic
		void routeStaff() {

		int helpTopic;
		int staff1 = 0005;
		int staff2 = 0010;
		int staff3 = 0015;
		int rstaff;
		cout << " What would you like help with?" << endl;
		cout << "1. Edit Deposition " << endl;
		cout << "  2. Cancel Deposition" << endl;
		cout << " 3. Reschedule Deopsition" << endl;
		cin >> helpTopic;


		for (int i = 0; i <= helpTopic; i++) {
			if (helpTopic == i) {
				switch (helpTopic) {
				case 1:
					cout << "The editing team will reach out to you regarding your recent concern" << endl;
					rstaff = staff1;
					break;
				case 2:
					cout << "The Cancelation team will reach out to you regarding your recent concern" << endl;
					rstaff = staff2;
					break;
				case 3:
					cout << "The Rescheduling team will reach out to you regarding your recent concern" << endl;
					rstaff = staff3;
					break;


				}
			}
		}

		}






};
