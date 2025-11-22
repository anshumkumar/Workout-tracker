#include "Equipment.h"

Equipment::Equipment(string e_n, bool avl) : equipment_name(e_n), is_available(avl) {}

Equipment::~Equipment() {}

void Equipment::displayEquipmentInfo() const {
	cout << "Equipment Name: " << equipment_name
		<< ", Availability: " << (is_available ? "Available" : "Not Available") << endl;

}

string Equipment::getEqpName() const {
	return equipment_name;
}

bool Equipment::check_available() const {
	return is_available;
}