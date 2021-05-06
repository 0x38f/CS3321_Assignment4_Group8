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

 float hoursReserved, hoursScheduled, firmRate;

 void hoursReserved() {
	 database.scheddepo(read = 4);
 }

 float subtotal() {
   firmRate = 100;
	 float subtotal = firmRate + hoursReserved;
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
 float hoursReserved, total, taxes, subtotal;
public:
 void setHoursReserved(float hR){
	 hoursReserved = hR;
 }

 void setTotal(float t) {
	 total = t;
 }
 void setTaxes(float ta) {
	 taxes = ta;
 }
 void setSubtotal(float sub) {
	 subtotal = sub;
 }

 float getHoursReserved() {
	 return hoursReserved;
 }

 float getTaxes() {
	 return taxes;
 }
 float getSubtotal() {
	 return subtotal;
 }
 float getTotal() {
	 return total;
 }

};
