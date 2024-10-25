// Chap5Proj.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Write a program that will predict the size of a population of organisms. 
The program should ask the user for the starting number of organisms, 
their average daily population increase (as a percentage), 
and the number of days they will multiply. 
A loop should display the size of the population for each day.
Input Validation: Do not accept a number less than 2 for the starting size of the population. 
Do not accept a negative number for average daily population increase. 
Do not accept a number less than 1 for the number of days they will multiply.
*/

#include <iostream>
using namespace std;

int main()
{
	int startPop, multiDays;
	float percGrow;
	cout << "This program calculates an organism's population/increase\nbased on the parameters you provide." << endl;
	cout << "Please tell me the starting population.\n";
	cin >> startPop;
	while (startPop<2)
	{
		cout << "Starting size cannot be less than two.\nPlease try again.\n";
		cin >> startPop;
	}
	cout << "Now give me the population increase. Please input percentage as a decimal.\n";
	cin >> percGrow;
	while (percGrow < 0)
	{
		cout << "No negative numbers may be used.\nPlease try again.\n";
		cin >> percGrow;
	}
	cout << "Finally, give me the number of days.\n";
	cin >> multiDays;
	while (multiDays < 1)
	{
		cout << "You cannot use less than one day.\nPlease try again.\n";
		cin >> multiDays;
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
