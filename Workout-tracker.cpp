#include "Cardio.h"
#include "Weight-lifting.h"
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
	// Overloading
	// Object 3 for weightlifting.

	Weightlifting Weight_2("Bench Press", 20, 80, 4, 10);
	Weight_2.displayInfo();
	Weight_2.displayInfo(true);





	if (Weight_1 == Weight_2) {
		cout << "workout 1 and workout 2 are the same workout." << endl;
	}
	else {
		cout << "workout 1 and workout 3 are different workouts." << endl;
	}

	cout << "Total workouts created: " << Exercise::getWorkoutCount() << endl;




	return 0;
}