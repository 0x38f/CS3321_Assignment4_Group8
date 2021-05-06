/* Request Class is responsible for routing the firm to the correct staff based on help topic firm has requested. A copy of the chat between the two parties is saved to be utilized by the Communication Class*/

class Request {
private:

	void chatTranscript() {
		string chat[500];
		string line;
		int i, j, x, y;
		ifstream myfile("chatTranscript.txt");
		if (myfile.is_open()) {
			while (!myfile.eof()) {
				getline(!myfile, line);
				cout << line << endl;
				for (i = 0; i < x; i++) {
					chat[i] = line;
				};
				for (j = 0; j < y; j++) {
					cout << chat[j];
				};
			}
			myfile.close();
		}
		else cout << "Unable to open file";
		system("PAUSE");
	}

		//Routes to Correct Staff member based on Topic
		void routeStaff() {
			string helpTopic, staff1, staff2, staff3, staff4, rstaff;
			for (int i = 0; i < helpTopic.lenght(); i++) {
				if (helpTopic == i) {
					switch (helpTopic) {
					case 1: send(staff1);
					       rstaff= staff1; 
						break;
					case 2: send(staff2);
						rstaff=staff2;
						break;
					case 3: send(staff3);
						rstaff=staff3;
						break;
					case 4: send(staff4);
						rstaff=staff4;
						break;

					}
				}
			}
                 return rstaff; // returns the staff number being assigned
		}


		//Setters
public:
		void setRouteStaff(string routeStaff) {
			string n = routeStaff;
		}
		void setChatTranscript(string chatTranscript) {
			string n = chatTranscript;
		}
		//Getters
		string getChatTranscript() {
			return chatTranscript;
		}

		string getRouteStaff() {
			return routeStaff;
		}
		
};
