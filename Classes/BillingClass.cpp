/* The Billing Class calculates each item that the firms are charged for
and is stored until the Invoice class requests the needed information
to build the invoice*/

#include <string>
#include <iostream>
#include <iomanip>
#include "DatabaseClass.cpp"

using namespace std;

class Billing {

private:
    Database BillingDatabase;

    float totalPrice, hoursReserved, hoursScheduled, firmRate, tax, subtotalPrice;

    float subtotal() {
        firmRate = 100;
        subtotalPrice = firmRate * hoursReserved;
        return subtotalPrice;
    }

    float taxes() {
        tax = subtotal() * 0.0825;
        return tax;
    }

    float total() {

        totalPrice = taxes() + subtotal();

        return totalPrice;

    }

public:

    void setHoursReserved(float hR){
        hoursReserved = hR;
    }

    void setTotal(float t) {
        totalPrice = t;
    }
    void setTaxes(float ta) {
        tax = ta;
    }

    void setSubtotal(float sub) {

        subtotalPrice = sub;

    }

    float getHoursReserved() {
        return hoursReserved;
    }

    float getTaxes() {
        return taxes();
    }

    float getSubtotal() {
        return subtotal();
    }

    float getTotal() {

	 return total();
    }

};
