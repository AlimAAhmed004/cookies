// cookies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//inputs

	double sugar, butter, flour;
	int cookies;

	cout << "How many cookies do you want to make? ";
	cin >> cookies;

	// variable equation

	sugar = (1.5 / 48) * cookies;
	butter = (1.0 / 48) * cookies;
	flour = (2.75 / 48) * cookies;
	
	//outputs

	cout << "Sugar needed: " << sugar << " cups." << endl;
	cout << "Butter needed: " << butter << " cups." << endl;
	cout << "Flour needed: " << flour << " cups." << endl;


	return 0;
}


