// Tam Le
// CSC101 - Programming Lab 3
// Date: February 14, 2019
// University of Southern Mississippi
/* Old Enough is the program that helping the user
determine his/her age privileges. */

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Declare variable
	int age = 0;

	// Program introduction and prompt user
	cout << "The Old Enough program will help you determine the age privileges "
		<< "after you enter your age below." << endl;
	cin >> age;

	// Empty line for more readable
	cout << endl;
	cin.get();

	// How to determine the age privileges
	if (age < 16 && age >= 0)
		cout << "Sorry, but you are not old enough to drive, vote, or drink under 16.";
	else if	(age >= 16 && age < 18)
		cout << "You are old enough to dirve from age 16.";
	else if (age >= 18 && age < 21)
		cout << "You are old enough to drive and vote from age 18.";
	else if (age >= 21 && age <= 120)
		cout << "You are old enough to drive, vote, and drink from age 21.";
	else if (age > 120 || age < 0)
		cout << "You have entered an invalid age." << endl;

	// Empty line for more readable
	cout << endl << endl;

	//pause the output
	cout << "Hit Enter to Exit";
	cin.get();
	return 0;
}