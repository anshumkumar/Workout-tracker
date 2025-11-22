#pragma once
#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <string>
using namespace std;

class Equipment {
private:
	string equipment_name; // Variable to store equipment name
	string equipment_type; // Variable to store equipment type (Cardio, Weightlifting)
	bool is_available;   // Variable to indicate if equipment is available

public:
	Equipment(string e_n, bool avl);
	~Equipment();

	void displayEquipmentInfo() const;  // not to be confused with Exercise::displayInfo
	string getEqpName()const;
	bool check_available()const; 

};


#endif // !EQUIPMENT_H
