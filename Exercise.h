#pragma once  
#ifndef EXERCISE_H  
#define EXERCISE_H  

#include <iostream>  
#include <string>  
using namespace std;


class Exercise {  
protected:  
string workout_name;   // Variable to store workout names (Cardio + WL)
int workout_time;      // Variable to store workout time. (Cardio + WL)
// WL = Weight Lifting

static int workout_count; // Static variable to keep track of number of workouts created.

public:  
Exercise();  //Default constructor  
Exercise(string w_n, int w_t);  //Constructor with parameters 



virtual void displayInfo() const; // Virtual function to display workouts. 
// Definition of the function is in cpp file.
virtual ~Exercise();   //De-constructor  

static int getWorkoutCount(); // Static function to get the workout count.

};  

#endif