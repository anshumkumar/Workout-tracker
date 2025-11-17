#include "Exercise.h"
#include <iostream>

using namespace std;

int Exercise::workout_count = 0; // counter set to 0 at the beginning.


Exercise::Exercise() : workout_name("Default"), workout_time (0) {
	workout_count++;
}   
// Linked with the default constructor. 
// Default values added.

Exercise::Exercise(string w_n, int w_t) : workout_name(w_n), workout_time(w_t) {
	workout_count++;
}
// Parameter constructor definition

void Exercise::displayInfo() const {
	cout << "Workout Name: " << workout_name << ", Workout Time: " << workout_time << " minutes" << endl;
//  displayInfo virtual function definition. 
}




int Exercise::getWorkoutCount() {
	return workout_count;
}

Exercise::~Exercise() {}
// De-constructor.

