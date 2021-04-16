/* The Invoice Class is responsible for building the Invoice that is 
printed and sent to each Firm*/

class Invoice {

	Billing billing;
	UserData userdata;


	void printReport() {

		void header() {
			cout << "                   DEPOSITIONS & MORE            " << endl;
			cout << "                        INVOICE                  " << endl;
			cout << "\t\t\t " << userdata.getUserData() << "  " << endl << endl;
			cout << "                        \t\t\t" << __TIME__        << endl;
			cout << "                      \n\t\t\t" << __DATE__        << endl;
			cout << " \t  	  HOURS\t            STAFF           " << endl;
			cout << "LOC\t         RSRVD\t            NAME            " << endl;
			cout << "-------------------------- --------------" << endl << endl;
		}

		void build() {
	cout << "100\t" << "\t" << billing.getHoursReserved() << "\t" << userdata.getStaffName() << “\n”;
			cout << "\t\t\t\t\tSubtotal: " << billing.getSubtotal()    << endl;
			cout << "\t\t\t\t\tTaxes: " << billing.getTaxes()          << endl;
			cout << "\t\t\t\t\tTotal: " << billing.getTotal()          << endl;
		}

		void footer() {
			cout << " ------------------------------------------------" << endl;
			cout << "\n\n\t*All invoices are due within 30 days.”       << endl;
			cout << " \t We love to hear from you"                      << endl;
			cout << "\t*Questions or *Suggestions please contact: "     << endl;
			cout << "\t\t\t Phone: \t 09169475449"                      << endl;
			cout << "\t\t\t Email: \t group8@depoandmore.co"            << endl;
			cout << " ------------------------------------------------" << endl;
	cout << "\t*********We have Conference Rooms to meet all your business needs**********"                                  << endl;
	cout << "\t*******Refer a business and after their first scheduled deposition********* " 					     << endl;
	cout << "\t*****************BOTH clients will receive ONE MONTH FREE****************** " 					     << endl;
		}
	}

public:
	void setPrintReport() {
		printReport = printReport;
	}

	void getPrintReport() {
		return printReport;
	}
};
