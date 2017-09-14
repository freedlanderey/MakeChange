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

int main()
{
		cout << "Please enter the cost of the product: ";
		cin >> cost;
		cout << endl;

		testInput = round(cost * 100);

		//Testing my testInput
		cout << "Test input: " << testInput << endl;

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

			change += addChange;
		}

		payment += addChange;

		cout << "Item Price - $" << cost << endl;
		cout << "Amount Paid - $" << payment << endl;
		cout << "Change Due - $" << change << endl << endl;

		cout << "Your Change: " << endl;

		if (change == 0)
			cout << "No change." << endl;

		if (change >= 1)
		{
			amtDollars = change / dollar;
			change = change - (dollar * amtDollars);
			cout << "Dollars - " << amtDollars << endl;
		}

		if (change >= .25)
		{
			amtQuarters = change / quarter;
			change = change - (quarter * amtQuarters);
			cout << "Quarters - " << amtQuarters << endl;
		}

		if (change >= .1)
		{
			amtDimes = change / dime;
			change = change - (dime * amtDimes);
			cout << "Dimes - " << amtDimes << endl;
		}

		if (change >= .05)
		{
			amtNickels = change / nickel;
			change = change - (nickel * amtNickels);
			cout << "Nickels - " << amtNickels << endl;
		}
		return 0;
	
}

