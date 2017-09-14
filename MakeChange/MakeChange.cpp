// MakeChange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

float payment;
float change;
float addChange;
float cost;

int testInput,
amtDollars,
amtQuarters,
amtDimes,
amtNickels;

const float dollar = 1.00f;
const float quarter = 0.25f;
const float dime = 0.10f;
const float nickel = .05f;

bool answer;

int main()
{
		cout << "Please enter the cost of the product: ";
		cin >> cost;
		cout << endl;

		start:

		testInput = round(cost * 100);

		//Testing my testInput
		//cout << "Test input: " << testInput << endl;

		while (testInput % 5 != 0)
		{
			cout << "Please input number divisible by .05: ";
			cin >> cost;
			cost = cost;
			cout << endl;

			testInput = round(cost * 100);
		}

		cout << "Please enter the amount paid: ";
		cin >> payment;
		cout << endl;

		testInput = round(payment * 100);

		while (testInput % 5 != 0)
		{
			cout << "Please input number divisible by .05: ";
			cin >> payment;
			cout << endl;

			testInput = round(payment * 100);
		}

		change = payment - cost;

		while (change < 0)
		{
			cout << "That is not enough! You need " << (change * -1) << " more." << endl;

			cout << "Please enter additional amount: ";
			cin >> addChange;

			change += round(addChange);
		}

		payment += round(addChange);

		cout << "Item Price - $" << cost << endl;
		cout << "Amount Paid - $" << payment << endl;
		cout << "Change Due - $" << change << endl << endl;

		cout << "Your Change: " << endl;

		if (change == 0)
			cout << "No change." << endl;

		if (change >= 1)
		{
			amtDollars = round(change / dollar);
			change = round(change - (dollar * amtDollars));
			cout << "Dollars - " << amtDollars << endl;
		}

		if (change >= .25)
		{
			amtQuarters = round(change / quarter);
			change = round(change - (quarter * amtQuarters));
			cout << "Quarters - " << amtQuarters << endl;
		}

		if (change >= .1)
		{
			amtDimes = round(change / dime);
			change = round(change - (dime * amtDimes));
			cout << "Dimes - " << amtDimes << endl;
		}

		if (change >= .05)
		{
			amtNickels = round(change / nickel);
			change = round(change - (nickel * amtNickels));
			cout << "Nickels - " << amtNickels << endl;
		}

		cout << endl;
		cout << "Next item:	" << endl;
		cout << "Please enter the cost of the item (enter 0 to exit): ";
		cin >> cost;
		cout << endl;

		if (cost != 0)
		{
			goto start;
		}
		else
		{

		}

		return 0;
	
}

