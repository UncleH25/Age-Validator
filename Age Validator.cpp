#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

int main()
{
	//Open the file
	ifstream inFile("input.txt");
	ofstream access("access.txt");

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

	//If statement for if access is granted
	if (age == 18 || age < 25)
	{
		access << "Limited Access granted" << endl;
	}
	else if (age >= 25)
	{
		access << "Full Access granted" << endl;
	}
	else
	{
		access << "Access denied" << endl;
	}

	//Save and close the file
	inFile.close();
	access.close();

	//Tell the user the file is saved
	cout << "File saved as access.txt" << endl;
    
    return 0;
}