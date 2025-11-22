#include "Cardio.h"
#include "Weight-lifting.h"
#include "Workout-Volume.h"
#include <iostream>

using namespace std;


int main() {
	Cardio Cardio_1("Running", 30);
	Cardio_1.displayInfo();
	// Object 1: calls Cardio(string, int), which calls Exercise(string, int)
	// Overrides displayInfo() in Exercise class. Displays Cardio specific msg.

	Cardio Cardio_2("Cycling", 45);
	Cardio_2.displayInfo();
	// Object 2

	Weightlifting Weight_1("Bench Press", 20, 80, 4, 10);
	Weight_1.displayInfo();
	Weight_1.displayInfo(true);
	WorkoutVolume volumeCalculator;
	volumeCalculator.calculateVolume(Weight_1);   
	// Friend class WorkoutVolume implemented here.

	// Object 3 for weightlifting.

	Weightlifting Weight_2("Shoulder Press", 20, 80, 4, 10);
	Weight_2.displayInfo();
	Weight_2.displayInfo(true);
	volumeCalculator.calculateVolume(Weight_2);

	Weightlifting Weight_3("Bench Press", 20, 80, 4, 10);
	Weight_3.displayInfo();
	Weight_3.displayInfo(true);
	volumeCalculator.calculateVolume(Weight_3);

	Weightlifting Weight_4("Deadlift", 0, 0, 0, 0); // Left it incomplete to test unary operator.
	Weight_4.displayInfo();
	Weight_4.displayInfo(true);
	volumeCalculator.calculateVolume(Weight_4);
	


	// 1st comparison test

	if (Weight_1 == Weight_2) {
		cout << "workout 1 and workout 2 are the same workout." << endl;
	}
	else {
		cout << "workout 1 and workout 2 are different workouts." << endl;
	}

	cout << "Total workouts created: " << Exercise::getWorkoutCount() << endl;

	// 2nd comparison test

	if (Weight_1 == Weight_3) {
		cout << "workout 1 and workout 3 are the same workout." << endl;
	}
	else {
		cout << "workout 1 and workout 3 are different workouts." << endl;
	}

	// Unary operator test begins here
	if (!Weight_1) {
		cout << "Workout 1 is incomplete!" << endl;
	}

	if (!Weight_2) {
		cout << "Workout 2 is incomplete!" << endl;
	}

	if (!Weight_3) {
		cout << "Workout 3 is incomplete!" << endl;
	}

	if (!Weight_4) {
		cout << "Workout 4 is incomplete!" << endl;
	}
	// Unary operator test ends here.

	cout << "Total workouts created: " << Exercise::getWorkoutCount() << endl;




	return 0;
}