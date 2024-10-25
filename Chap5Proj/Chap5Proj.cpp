// Chap5Proj.cpp : This file contains the 'main' function. Program execution begins and ends there.
/**/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string nameTown, fileName;
	ifstream inputFile;

	cout << "Put in the name of your town: " << endl;
	cin >> nameTown;
	cout << "What's the name of the data file you wish to use?" << endl;
	cin >> fileName;

	inputFile.open(fileName.c_str());
	if (!inputFile)
	{
		cout << "ERROR. INVALID FILE." << fileName << endl;
		return 1;
	}
	int year, pop;

	cout << nameTown << "'s population growth: " << endl;
	while (inputFile >> year >> pop)
	{
		cout << year << "";
		for (int i = 0; i < pop / 1000; ++i)
		{
			cout << "*";
		}
		cout << endl;
	}
	inputFile.close();
	return 0;
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
