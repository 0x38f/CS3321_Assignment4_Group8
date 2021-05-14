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
    void build() {
        Billing Billing;
        UserData Userdata;
        cout << "\t\t\tDEPOS & MORE    " << endl;
        cout << "\t\t\t\t\tINVOICE          " << endl;
        cout << "\t\t\t " << Userdata.getUserStaff() << endl;
        cout << "\t\t\t" << __TIME__ << endl;
        cout << "\t\t\t" << __DATE__ << endl;
        cout << "\t  	       HOURS\t          STAFF" << endl;
        cout << "LOC\t         RSRVD\t          NAME " << endl;
        cout << "----------------------------------------" << endl << endl;

        for (int i = 0; i < 20; i++) {
            cout << "100\t " << Billing.getHoursReserved() << "\t" << Userdata.getUserStaff() << "\n";
        }
        cout << "\t\t\t\t\tSubtotal: " << Billing.getSubtotal() << endl;
        cout << "\t\t\t\t\tTaxes: " << Billing.getTaxes() << endl;
        cout << "\t\t\t\t\tTotal: " << Billing.getTotal() << endl << endl;
        cout << " ------------------------------------------------" << endl;
        cout << "\t All invoices are due within 30 days. " << endl;
        cout << "\t\t We love to hear from you" << endl;
        cout << "\t Questions or *Suggestions please contact: " << endl;
        cout << "\t\t\t Phone: \t (916) 694-5449" << endl;
        cout << "\t\t\t Email: \t group8@depoandmore.com" << endl;
        cout << " ------------------------------------------------" << endl;
        cout << "\t*********We have Conference Rooms to meet all your business needs********** " << endl;
        cout << "\t*******Refer a business and after their first scheduled deposition********* " << endl;
        cout << "\t*****************BOTH clients will receive ONE MONTH FREE****************** " << endl;
    }

public:


    void setBuild(string b) {
        string build = b;
    }

    void setPrintReport(string printReport) {

        string report = printReport;
        cout << getBuild() << endl;
    }

    string getPrintReport() {
        string report;
        return report;
    }

    string getBuild() {
        string build;
        return build;
    }

};
