#pragma once
#ifndef CARDIO_H
#define CARDIO_H



#include "Exercise.h"
#include <iostream>	
#include <string>

class Cardio : public Exercise {  //Cardio class inheriting from Exercise class.
public:
	Cardio(string w_n, int w_t);   //Constructor with parameters, defined in exercise.
	void displayInfo() const override;  //Override displayInfo function. (Polymorphism)



};

#endif // !CARDIO_H

