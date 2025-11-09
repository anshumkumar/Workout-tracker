#pragma once

#include "Exercise.h"
#include <iostream>	
#include <string>

class Weightlifting : public Exercise {
private:
	int weight;  // Variable to store weight lifted in (kg)
	int sets;    // Variable to store number of sets
	int reps;    // Variable to store number of repetitions per set
// These variables are kept private because they are relevant to weight lifting only.

public:
	Weightlifting(); // Default constructor
	Weightlifting(string w_n, int w_t, int w_kg, int s, int r); // Parameterized constructor
	// w_kg is weight, s is sets, r is reps

	void displayInfo() const override;

	void displayInfo(bool detailed_info) const; // Overload 


};