#include "Weight-lifting.h"

#include <string>
#include <iostream>
using namespace std;

Weightlifting::Weightlifting() : Exercise(), weight(0), sets(0), reps(0) {}
// Default values when no data is added.

Weightlifting::Weightlifting(string w_n, int w_t, int w_kg, int s, int r)
	:Exercise(w_n, w_t), weight(w_kg), sets(s), reps(r) {
} // Parameter constructor definition, just like the one in exercise.cpp but with additional functionality.

void Weightlifting::displayInfo() const {
	cout << "Workout Name: " << workout_name
		<< ", Workout Time: " << workout_time << " minutes"
		<< ", Weight Lifted: " << weight << " kg"
		<< ", Number of Sets: " << sets
		<< ", Reps per Set: " << reps << endl;
} 
// Equality operator overloading definition.



// displayInfo function definition, overrides the one in Exercise class.
void Weightlifting::displayInfo(bool detailed_info) const {
	if (detailed_info) {
		cout << "Detailed Weightlifting Info:" << endl;
		cout << "Total repition of sets and reps:" << sets * reps << endl;
	
	}
	else {
		displayInfo();
	}
}
// Overloaded displayInfo function definition.

bool Weightlifting::operator==(const Weightlifting& other) const {
	return (this->workout_name == other.workout_name &&
		this->workout_time == other.workout_time &&
		this->weight == other.weight &&
		this->sets == other.sets &&
		this->reps == other.reps);
}

bool Weightlifting::operator!() const {
	return (weight == 0 || sets == 0 || reps == 0);
}
// Unary operator overloading defined here. 

// Equality operator overload definition.