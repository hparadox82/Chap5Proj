// Chap5Proj.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*A teacher has asked all her students to line up according to their first name. 
For example, in one class Amy will be at the front of the line, 
and Yolanda will be at the end. 
Write a program that reads the student names from the file LineUp.txt. 
The program should read names from the file until there is no more data 
to read. Once all the names have been read, it reports the number of 
students in the class, which student would be 
at the front of the line, and which one would be at the end of the line. 
You may assume that no two students have the same name.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile("Lineup.txt");
	string name;
	string first, mid, last;
	int studcount = 0;

	if (inputFile.is_open())
	{
		getline(inputFile, first);
		last = first;
		studcount++;

		while (getline(inputFile, name))
		{
			if (name < first)
				first = name;
		}
		if (name > last)
		{
			last = name;
		}
		if (name > first && name < last)
		{
			mid = name;
		}
		studcount++;

	}
	inputFile.close();

	std::cout << "Total students: " << studcount << endl;
	std::cout << "Line leader: " << first << endl;
	std::cout << "Inbetween: " << mid << endl;
	std::cout << "Caboose: " << last << endl;
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
