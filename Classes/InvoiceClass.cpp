/* The Invoice Class is responsible for building the Invoice that is
printed and sent to each Firm*/

#include <string>
#include <iostream>
#include <iomanip>
#include "UserDataClass.cpp"
#include "DatabaseClass.cpp"
#include "BillingClass.cpp"
using namespace std;

class Invoice {

	

private:

		string top() {
			UserData userdata;
			string s;
			cout << "\t\t\t        DEPOSITIONS & MORE    " << endl;
			cout << "\t\t\t\t\t         INVOICE          " << endl;
			cout << "\t\t\t " << userdata.getUserStaff()    << endl;
			cout << "\t\t\t"             << __TIME__       << endl;
			cout << "\t\t\t"             << __DATE__       << endl;
			cout << "\t  	       HOURS\t          STAFF" << endl;
			cout << "LOC\t         RSRVD\t          NAME " << endl;
			cout << "----------------------------------------"  << endl << endl;
		}

		string build() {
			Billing billing;
			UserData userdata;
			float s, a, t;
			for(int i = 0; i < 20; i++){
			cout << "100\t " << billing.getHoursReserved() << "\t" << userdata.getUserStaff() << "\n";
			}
			cout << "\t\t\t\t\tSubtotal: " << billing.getSubtotal()    << endl;
			cout << "\t\t\t\t\tTaxes: " << billing.getTaxes()          << endl;
			cout << "\t\t\t\t\tTotal: " << billing.getTotal()          << endl;
		}

		string footer() {
			cout << " ------------------------------------------------" << endl;
			cout << "\t All invoices are due within 30 days. "        << endl;
			cout << "\t\t We love to hear from you"                     << endl;
			cout << "\t Questions or *Suggestions please contact: "     << endl;
			cout << "\t\t\t Phone: \t (916) 694-5449"                   << endl;
			cout << "\t\t\t Email: \t group8@depoandmore.com"        << endl;
			cout << " ------------------------------------------------" << endl;
	cout << "\t*********We have Conference Rooms to meet all your business needs********** "                         << endl;
	cout << "\t*******Refer a business and after their first scheduled deposition********* " 					     << endl;
	cout << "\t*****************BOTH clients will receive ONE MONTH FREE****************** " 					     << endl;
		}


public:

	void setTop(string t){
		string top = t;
	}

	void setFooter(string f){
		string footer = f;
	}

	void setBuild(string b){
		string build = b;
	}

	void setPrintReport() {
		getTop();
		getBuild();
		getFooter();
	}
	string getPrintReport(string printReport) {
		return printReport	;
	}

	string getTop(){
		return top();
	}
	string getBuild(){
		return build();
	}
	string getFooter(){
		return footer();
	}
};
