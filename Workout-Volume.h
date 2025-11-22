#pragma once
#include "Weight-lifting.h"
#include <iostream>
using namespace std;

class WorkoutVolume {
public:
	void calculateVolume(const Weightlifting& w) {
		cout << "Calculating Workout Volume for: " << w.workout_name << endl;
		cout << "Total Volume (Weight x Sets x Reps): " << w.weight * w.sets * w.reps << " kg" << endl;


	}
};
// Private members weight, sets, reps are accessed here because WorkoutVolume is a friend class of Weightlifting.

