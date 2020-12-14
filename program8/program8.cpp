// program8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(0));								// Initialize the system clock

	int num = 0;

	cout << "The numbers are: ";

	// Generate the number

	for (int i = 0; i < 7; i++){
		num = rand() % 49 + 1;					// Generate numbers from 1 to 49

		// Output the number
		cout << num << " ";						// Print the numbers in a line
	}

	cout << endl;

	return 0;
}

