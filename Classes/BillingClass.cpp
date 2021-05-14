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


    float hoursReserved() {

        Schedule schedule;
        int hR = schedule.getTime();
    }

    float subtotal() {

        float firmRate = 100;
        float subtotalPrice = firmRate * hoursReserved();
        return subtotalPrice;
    }
    float taxes() {
        float tax = subtotal() * 0.0825;
        return tax;
    }
    float total() {
        float totalPrice = taxes() + subtotal();
        return totalPrice;
    }
public:

    void setHoursReserved(float hR) {
       float hoursReserved = hR;
    }
    void setTotal(float t) {
        float totalPrice = t;
    }
    void setTaxes(float ta) {
       float tax = ta;
    }
    void setSubtotal(float sub) {
       float subtotalPrice = sub;
    }
    float getHoursReserved() {
        float hoursReserved();
        return hoursReserved();
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
