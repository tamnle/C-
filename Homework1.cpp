// Tam Le
// CSC 101
// February 4, 2019
/* This program will find use the capacity, in gallons, of an automobile fuel tank and the miles 
per gallon the automobile can be driven to find the number of miles the automobile can be driven without refueling. */


#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	// First data
	float fuelTankCapacity = 0;
	// prompt the user and get the car fuel tank's capacity
	cout << "Enter the capacity of your car fuel tank "
		<< "gallons" << endl;
	cin >> fuelTankCapacity;

	// Second data
	float milesPerGallon = 0;
	// prompt the user and get miles/gallon
	cout << "Enter the miles per gallon of your car" << endl;
	cin >> milesPerGallon;

	// Output
	float totalMiles = fuelTankCapacity * milesPerGallon;


	cout << "Your car can be driven in " << totalMiles << " miles without refueling." << endl;


	// Steps to do this assignment
	// 1. Declare variables
	// 2. Prompt user for those variables
	// 3. Calculations for the output/ Get solution

	// pause the output
	cout << "Hit Enter to close" << endl;
	cin.get();
	cin.get();

	return 0;
}
