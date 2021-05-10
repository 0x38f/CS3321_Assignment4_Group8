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
                // changed the helpTopic variable to an int to simplify the routing proccess
		int helpTopic;
		int staff1 = 0005;
		int staff2 = 0010;
		int staff3 = 0015;
		string eID= " ";
		cout << " What would you like help with?" << endl;
		cout << " 1. Edit Deposition " << endl;
		cout << " 2. Cancel Deposition" << endl;
		cout << " 3. Reschedule Deopsition" << endl;
		cin >> helpTopic;

                // The communication class should take the right firm information and email them regarding the issue
		for (int i = 0; i <= helpTopic; i++) {
			if (helpTopic == i) {
				switch (helpTopic) {
				case 1:
					// info that the comunication class will use to route the issue to the right firm
						eID="edit@deposition.com";
					cout << "The editing team will reach out to you regarding your recent concern at : " <<eID<< endl;
					break;
				case 2:
					eID = "cancel@deposition.com";
					cout << "The Cancelation team will reach out to you regarding your recent concern at :" << eID << endl;
					break;
				case 3:
					eID = "postp@deposition.com";
					cout << "The Rescheduling team will reach out to you regarding your recent concern at :"<<eID << endl;
					break;


				}
			}
		}

		}






};
