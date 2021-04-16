 /* The Billing Class calculates each item that the firms are charged for 
 and is stored until the Invoice class requests the needed information 
 to build the invoice*/

class Billing {
private:
	Database database;

	float hoursReserved, staffHours, depoStaffHours, hoursScheduled, firmRate;

	void hoursReserved() {
		database.readDB(read = 4);
		return hoursReserved;
	}

	void calculate() {
		for (int i = 0; i < hoursReserved; i++) {
			database.readDB(read = 1);
			staffHours = depoStaffHours x firmRate;
			return staffHours;
		}
	}

	float subtotal() {
		subtotal = firmRate + staffHours + hoursReserved;
		return subtotal;
	}

	float taxes() {
		taxes = subtotal * 0.0825;
		return taxes;
	}

	float total() {
		total = taxes + subtotal;
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
