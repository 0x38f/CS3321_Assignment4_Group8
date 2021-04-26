/* The Billing Class calculates each item that the firms are charged for
and is stored until the Invoice class requests the needed information
to build the invoice*/
#include <string>
#include <iostream>
#include <iomanip>
#include <UserdataClass.cpp>
#include <DatabaseClass.cpp>
using namespace std;

class Billing {
private:
 Database database;

 float hoursReserved, staffHours, depoStaffHours, hoursScheduled, firmRate;

 void hoursReserved() {
	 database.readDB(read = 4);

 }

 void calculate() {
	 for (int i = 0; i < hoursReserved; i++) {
		 database.readDB(read = 1);
		 staffHours = depoStaffHours * firmRate;

	 }
 }

 float subtotal() {
	 float subtotal = firmRate + staffHours + hoursReserved;
	 return subtotal;
 }

 float taxes() {
	 float taxes = subtotal() * 0.0825;
	 return taxes;
 }

 float total() {
	 float total = taxes() + subtotal();
	 return total;

 }
public:
 void setHoursReserved(float hoursReserved){
	 hoursReserved = hoursReserved;
 }
 void setStaffHours(float staffHours) {
		staffHours = staffHours;
 }

 void setTotal(float total) {
	 total = total;
 }
 void setTaxes(float taxes) {
	 taxes = taxes;
 }
 void setSubtotal(float subtotal) {
	 subtotal = subtotal;
 }

 float getHoursReserved() {
	 return hoursReserved;
 }

 float getStaffHours() {
	 return staffHours;
 }
 float getTaxes(float taxes) {
	 return taxes;
 }
 float getSubtotal(float subtotal) {
	 return subtotal;
 }
 float getTotal(float total) {
	 return total;
 }

};
