/*The Deposition class writes the deposition to a file and allows the user to review the file. Once reviewed it connects to the database and updates the Deposition table based on firmID. It also allows a user to retrieve past depositions in order to print via the deposition report class.*/

class Deposition {
private:
	//Calls the Connection class to connect to database
	Connection* conn = Connection::createConnection();
	//Intialize the Virtual Connection
	virtual Connection* conn = conn->createConnection(user, password, connect, minConn, maxConn, incrConn) {
		//Error Message
		if (createConnection != conn) {
			cout << "Unable to make Connection!" << endl;
		else
			cout << "Connection Made" << endl;
		}
		//Initialzies Statement/Queries
		Statement* stmt = conn->createStatement("SELECT blobcol FROM database");
		//Initializes ability to read and retrieve results from queries
		ResultSet* rs = stmt->executeQuery("SELECT * FROM database");
		rs->next();
	}
	
	void review() {
		char depo[500000];
		string line;
		int i, j, x, y;
		fstream myfile("RandomAccessFile.txt");
		if (myfile.is_open()) {
			while (!myfile.eof()) {
				getline(!myfile, line);
				cout << line << endl;
				for (i = 0; i < x; i++) {
					depo[i] = line;
				};
				for (j = 0; j < y; j++) {
					cout << depo[j];
				};
			}
			myfile.close();
		}
		else cout << "Unable to open file";
		system("PAUSE");
	}
	//Write Depositions to File
	void write() {
		outdata.open("RandomAccessFile.txt"); // opens the file
		if (!outdata) { // file couldn't be opened
			cerr << "Error: file could not be opened" << endl;
		}
		for (i = 0; i < depo.length(); ++i) {
			outdata << depo[i] << endl;
			outdata.close();
		}
	}
	//Retreive Depositions
	void readDeposition() {
Metadata depotab_metaData = connection->getMetaData("Deposition", MetaData::PTYPE_TABLE);
		listofColumns = depotab_metaData = getVector(MetaData::ATTR_LIST_COLUMNS);
		vector<MetaData>listofColumns;
		for (int i = 0; i < listofColumns.size(); i++) {
			MetaData columnobj = listofColumns[i];
			cout << (columnobj.getString(MetaData::ATTR_NAME)) << endl;
		}

	}
	//Update Depositions
	void updateDeposition() {
		fstream.myfile("RandomAccessFile.txt");
		executeUpdate("INSERT INTO deposition VALUES (fID, DATE, Deposition)");
	}

	

public:
	void setUpdateDeposition(string depo) {
		string updateDeposition = depo;
	}

	void setReadDeposition(string depo) {
		string readDeposition = depo;
	}

	string getUpdateDeposition() {
		return updateDeposition;
	}
	string getReadDeposition() {
		return readDeposition;
	}
};
