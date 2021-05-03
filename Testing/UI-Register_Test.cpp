#include "Classes/UserInterfaceClass.cpp"
#include "Classes/RegisterClass.cpp"

int main () {

    UserInterface UITest;
    Register RegisterTest;
    Billing BillingTest;
    Invoice InvoiceTest;
    Invoice InvoiceReportTest;
    ScheduleReport reportSched;
    Database data;
    Deposition depo;
    DepostionReport reportDepo;
    Communication comm;

//UI Class Test
    UITest.loginUI();

    UITest.siteMenu();

//Register Class Test
    int testID = RegisterTest.getUserID();

    cout << testID;

//Billing Class Test
    float total = BillingTest.getTotal();
    cout << total;

//Invoice Class Test
    string invoice = InvoiceTest.getFooter();
    cout << invoice;

//Invoice Report Class Test
    string report = InvoiceReport.getPrintReport();
    cout << report;

//Database Class Test
    string data = Database.getStaffPrint();
    cout << data;

//Deposition Class Test
    string depo = Deposition.getAppend();
    cout << depo;

//Deposition Report Class Test
    string reportDepo = DepositionReport.getPrintReport();
    cout << reportDepo;

//Schedule Report Class Test
    string reportSched = ScheduleReport.getPrintReport();
    cout << reportSched;

    //Communication Class Test
    string comm = Communication.getEmail();
    cout << comm;
}
