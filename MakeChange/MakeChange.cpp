// MakeChange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double payment,
change,
addChange,
cost;

int testInput;

const double dollar = 1.00,
quarter = 0.25,
dime = 0.10,
nickel = .05;

int main()
{
	cout << "Please enter the cost of the product: ";
	cin >> cost;

	testInput = cost * 100;

	while (testInput % 5 != 0)
	{
		cout << "Please input number divisible by .05: ";
		cin >> cost;

		testInput = cost * 100;
	}

	cout << "Please enter the amount paid: ";
	cin >> payment;

	testInput = payment * 100;

	while (testInput % 5 != 0)
	{
		cout << "Please input number divisible by .05: ";
		cin >> payment;

		testInput = cost * 100;
	}

	change = payment - cost;

	while (change < 0)
	{
		cout << "That is not enough! You need " << (change * -1) << " more." << endl;

		cout << "Please enter additional amount: ";
		cin >> addChange;

		change += addChange;
	}

	payment += addChange;

	cout << "Item Price - $" << cost << endl;
	cout << "Amount Paid - $" << payment << endl;
	cout << "Change Due - $" << change << endl;

	cout << "Your Change: " << endl;

	return 0;
}

