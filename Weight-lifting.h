#pragma once  

#include "Exercise.h"  
#include <iostream>  
#include <string>  

class Weightlifting : public Exercise {  //Inheritance from Exercise class
private:  
int weight;  // Variable to store weight lifted in (kg)  
int sets;    // Variable to store number of sets  
int reps;    // Variable to store number of repetitions per set  
// These variables are kept private because they are relevant to weight lifting only.  

public:  
Weightlifting(); // Default constructor  
Weightlifting(string w_n, int w_t, int w_kg, int s, int r); // Constructor with parameters  
// w_kg is weight, s is sets, r is reps  

void displayInfo() const override;  // Override displayInfo from Exercise class

void displayInfo(bool detailed_info) const; // Overload   
bool operator==(const Weightlifting& other) const; // Equality operator overloading.  

bool operator!() const; // Unary operator overloading
//getter for workout_name 
string getWorkoutName() const { return workout_name; }  

friend class WorkoutVolume; // This class can access private members of Weightlifting
// Private members are weight, sets, reps. 

};
