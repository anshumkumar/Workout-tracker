#include "Cardio.h"
#include "Weight-lifting.h"
#include "Workout-Volume.h"
#include "Equipment.h"
#include <iostream>
#include <vector>

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
	// Displays total workouts created so far using static function.

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

	Equipment* treadmill = new Equipment("Treadmill", true);
	Equipment* dumbbells = new Equipment("Dumbbells", false);
	Equipment* PressMachine = new Equipment("Press Machine", true);
	Equipment* rowingMachine = new Equipment("Rowing Machine", false);

	vector<Equipment*> gymStorage;
	gymStorage.push_back(treadmill);
	gymStorage.push_back(dumbbells);
	gymStorage.push_back(PressMachine);
	gymStorage.push_back(rowingMachine);

	for (Equipment* eqp : gymStorage) {
		eqp->displayEquipmentInfo();
	}

	cout << "Pointer test" << dumbbells->getEqpName() << " is "
		<< (dumbbells->check_available() ? "available." : "not available.") << endl;

	for (Equipment* eqp : gymStorage) {
		delete eqp; 

	}

	gymStorage.clear(); // Clear the vector after deleting objects.

	// pointers requirement fulfilled by c

	// added functionality for Equipment class here by creating objects and storing them in a vector
	// and using pointers 




	

	/*

	// Pointers requirement.

	Might create pointers to dynamically allocate memory for Cardio and Weightlifting objects later.

	Exercise* cardioPtr = new Cardio("Swimming", 60); // Pointer to cardio. Creates new object.
	Exercise* weightPtr = new Weightlifting("Triceps Extension", 15, 40, 3, 12); // Pointer to weightlifting. Creates new object.

	// This dynamically creates new objects.

	*/




	return 0;
}