/*Invoice Report class Displays and prints the Invoices built by the Invoice Class*/

#include <string>
#include <iostream>

#include "InvoiceClass.cpp"
using namespace std;

class InvoiceReport {

    Invoice invoice;

    void setPrintReport(string printReport) {
        string report = printReport;
    }

    string getPrintReport() {
        string report = invoice.getBuild();
        return report;
    }
};
