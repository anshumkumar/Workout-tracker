#include "Exercise.h"
#include <iostream>

using namespace std;

Exercise::Exercise() : workout_name("Default"), workout_time (0) {}   
// Linked with the default constructor. 
// Default values added.

Exercise::Exercise(string w_n, int w_t) : workout_name(w_n), workout_time(w_t) {}
// Parameter constructor definition

void Exercise::displayInfo() const {
	cout << "Workout Name: " << workout_name << ", Workout Time: " << workout_time << " minutes" << endl;
//  displayInfo virtual function definition. 
}

Exercise::~Exercise() {}
// De-constructor.

