#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

int main()
{
	//Open the file
	ifstream inFile("input.txt");
	ofstream output("output.txt");

	//Variables
	string name;
	int age;

	//Validate the file
	if (!inFile)
	{
		cerr << "Error opening file" << endl;
		return 1;
	}

	//Read the file
	inFile >> name >> age;

	//In case of invalid input
	assert(!inFile.fail());
    
    return 0;
}