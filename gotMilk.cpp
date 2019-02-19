// Professor: Tom Rishel
// Date: February 14, 2019
// Tam Le
// CSC101 - Homework 2: Got Milk
// University of Southern Mississippi
/* This Get Milk app will be useful for farmers or milk producer to know how many cartons
they need to produce milk, the cost and profit of milk production. */

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	//app introduction
	cout << "Hello farmers! Welcome you to the Get Milk application. " 
		<< "By knowing only the total amount of milk your farm make, "
		<< "Get Milk app can give you exact number of cartons you need to hold that amount of milk. "
		<< "Moreover, the app will also help you calculate cost and profit of milk production." 
		<< " Please hit enter to start using the app!" << endl;
	cin.get();

    //declare varibales
	float totalMilk = 0;

	//prompt user to enter amount of milk
	cout << "Please enter the total litters of milk produced in the morning below: " 
		 << endl;
	cin >> totalMilk;

	//adding a blank line to make it easier to read
	cout << endl;
	cin.get();

	//calculate number of cartons are needed to hold that milk amount
	float numCartons = round(totalMilk / 3.78);

	//output the number of cartons are needed to hold that milk amount
	cout << "The number of milk cartons need to hold milk are " 
		<< numCartons << " cartons." << endl;
	cin.get();


	//calculate and output the cost of milk production
	cout << setprecision(2) << fixed;
	cout << "The cost of producing the milk is $" << totalMilk * 0.38 << endl;
	cin.get();

	//calculate and output the profit of milk production
	cout << setprecision(2) << fixed;
	cout << "The profit for producing the milk is $" << numCartons * 0.27
		<< "." << endl;
	cin.get();

	//pause the output
	cout << "Hit Enter to Exit." << endl;
	cin.get();
	return 0;

}
