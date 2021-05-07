/*The Deposition class writes the deposition to a file and allows the user to review the file. Once reviewed it connects to the database and updates the Deposition table based on firmID. It also allows a user to retrieve past depositions in order to print via the deposition report class.*/

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include "DatabaseClass.cpp"


using namespace std;


class Deposition {
private:
	string depo;

	//Retreives Depositions	from database
	void retrieve(){
        
        Database DepoDatabase;

        DepoDatabase.setDepoPrint(depo);

        cout << database.getDepoPrint();
	}



	//Saves updated depositions	to database
	void update(vector<vector<string>> depo) {

		for (int i = 0; i < depo.size(); i++) {
			for (int j = 0; j < depo[i].size(); j++) {
				cout << depo[i][j] << " ";
				cout << endl;
			}
		}
	}

	//Allows modifications to saved depositions
	void append() {
		vector<vector<string>> depo;
		vector<vector<string>> deposition;
		ofstream myfile("depo.csv");

		while (myfile) {
			depo.swap(deposition);
			deposition.clear();
		}


	}


public:
	//setters and getters
	void setUpdate(string d) {
		depo = d;
	}

	void setAppend(string a) {
		depo = a;
	}

	string getUpdate() {
		return depo;
	}

	string getAppend() {
		return depo;
	}
};
