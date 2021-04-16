/* The Database class is responsible for communicating, updating, and reading from the different tables in the database.	*/

class Database {
	//Initialize connection
private:
	 // Constant Variables to Intialize Connection
	const string& user = “root”;
	const string& password = “pass  “;
	const string& connect = “ “;
	unsigned int minConn = 0;
	unsigned int maxConn = 50;
	unsigned int incrConn = 10;
	 //Calls the Connection class to connect to database
	Connection* conn = Connection::createConnection(); 
		//Intialize the Virtual Connection
		virtual Connection* conn = conn->createConnection(user, password, connect, minConn, maxConn, incrConn) {
			//Error Message
			if(createConnection != conn) {
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

		//To Update different tables within Database
		void updateFirm() {
userData.infile(RandomAccessFile.txt);
executeUpdate("INSERT INTO firm VALUES (fID, firmName, firmRate, startdate, phoneNumber, address, email )");
}
void updateStaff(){
userData.infile("newuser.txt");
executeUpdate("INSERT INTO staff VALUES (sID, name, salary, startdate, phoneNumber, address, birthdate )");
}
void updateBilling(){
billing.infile("RandomAccessFile.txt");
			executeUpdate("INSERT INTO billing VALUES (fID, Invoice )");
}
void updateSchedule(){
schedule.infile(RandomAccessFile.txt);
executeUpdate("INSERT INTO schedule VALUES (DATE, TIME, StaffID, FirmName, HoursReserved, DateReserved, Misc)");
} 
		void updateNewUser(){
			register.getRegisterAccount();
executeUpdate(“INSERT INTO new user VALUES(sID, username, password, email )”);
		}
		
		
		  //To read and retrieve query results from Database
		void readFirm() {
Metadata firmtab_metaData = connection->getMetaData("Firm", MetaData::PTYPE_TABLE);
listofColumns = firmtab_metaData = getVector(MetaData::ATTR_LIST_COLUMNS);
			vector<MetaData>listofColumns;
			for (int i = 0; i < listofColumns.size(); i++) {
				MetaData columnobj = listofColumns[i];
				cout << (columnobj.getString(MetaData::ATTR_NAME)) << endl;
}
void readStaff(){
Metadata stafftab_metaData = connection->getMetaData("Staff", MetaData::PTYPE_TABLE);
listofColumns = stafftab_metaData = getVector(MetaData::ATTR_LIST_COLUMNS);
			vector<MetaData>listofColumns;
			for (int i = 0; i < listofColumns.size(); i++) {
				MetaData columnobj = listofColumns[i];
				cout << (columnobj.getString(MetaData::ATTR_NAME)) << endl;
}
void readBilling(){
Metadata billtab_metaData = connection->getMetaData("Billing", MetaData::PTYPE_TABLE);
listofColumns = billtab_metaData = getVector(MetaData::ATTR_LIST_COLUMNS);
			vector<MetaData>listofColumns;
			for (int i = 0; i < listofColumns.size(); i++) {
				MetaData columnobj = listofColumns[i];
				cout << (columnobj.getString(MetaData::ATTR_NAME)) << endl;
}
void readSchedule(){
Metadata schedtab_metaData = connection->getMetaData("Schedule", MetaData::PTYPE_TABLE);
listofColumns = schedtab_metaData = getVector(MetaData::ATTR_LIST_COLUMNS);
			vector<MetaData>listofColumns;
			for (int i = 0; i < listofColumns.size(); i++) {
				MetaData columnobj = listofColumns[i];
				cout << (columnobj.getString(MetaData::ATTR_NAME)) << endl;
				}
		void readNewUser(){
Metadata newusertab_metaData = connection->getMetaData("New User", MetaData::PTYPE_TABLE);
listofColumns = newusertab_metaData = getVector(MetaData::ATTR_LIST_COLUMNS);
			vector<MetaData>listofColumns;
			for (int i = 0; i < listofColumns.size(); i++) {
				MetaData columnobj = listofColumns[i];
				cout << (columnobj.getString(MetaData::ATTR_NAME)) << endl;
				}
		}

void term(){
Connection::terminateConnection(conn);
}


public:
	//getter and setters

void setReadFirm(string f) {
	string readFirm = f;
}
void setReadStaff(string t) {
	string readStaff = t;
}
void setReadSchedule(string s) {
	string readSchedule = s;
}
void setReadBilling(string b) {
	string readBilling = b;
}
void setUpdateFirm(string u) {
	string updateFirm = u;
}
void setUpdateStaff(string t) {
	string updateStaff = t;
}
void setUpdateSchedule(string s) {
	string updateschedule = s;
}
void setUpdateBilling(string b) {
	string updateBilling = b;
}

string getUpdateFirm() {
	return updateFirm;
}
string getUpdateStaff() {
	return updateStaff;
}
string getUpdateSchedule() {
	return updateSchedule;
}
string getUpdateBilling() {
	return updateBilling;
}
string getReadFirm() {
	return readFirm;
}

string getReadStaff() {
	return readStaff;
}

string getReadSchedule() {
	return readSchedule;
}

string getReadBilling() {
	return readBilling;
}
};
