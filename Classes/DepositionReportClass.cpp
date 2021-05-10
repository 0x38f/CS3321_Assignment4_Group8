/*This class "prints"/displays the Depositions to be emailed or printed to
 the inquiring staff/firm.*/

#include <string>
#include <iostream>
#include "DepositionClass.cpp"
using namespace std;


class DepositionReport {

	//Getter to access report from Deposition Class
	void printReport() {
		Deposition depo;

		cout << depo.getUpdate();

	}



};
