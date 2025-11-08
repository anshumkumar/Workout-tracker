#include "Cardio.h"
#include <iostream>
using namespace std;

Cardio::Cardio(string w_n, int w_t) : Exercise(w_n, w_t) {}
// Constructor definition calling Exercise class constructor.

void Cardio::displayInfo() const {
	cout << "Category: Cardio Workout: " << workout_name << ", Time: " << workout_time << " minutes" << endl;
	// This overrides  Exercise::displayInfo()
}