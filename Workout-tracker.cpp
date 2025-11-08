#include "Cardio.h"
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



	return 0;
}