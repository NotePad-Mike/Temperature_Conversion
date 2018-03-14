//
//	Program to convert temperature from Celsius degree
//	units into Fahrenheit degree units:
//	Fahrenheit  = Celsius * (212 - 32)/100+32
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int getCelsius()
{
	//Enter the temp in Celsius
	int celsius;
	cout << "Enter the temperature in Celsius: ";
	cin >> celsius;

	//Check and make sure a number was entered by the user
	while (cin.fail())
	{
		cout << "You entered something you shouldn't have!" << endl;
		cout << "Please try again and enter a number this time: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> celsius;
	}

	return celsius;

}

int tempConversion(int celsius)
{
	//Calculate conversion factor for Celsius to Fahrenheit
	int factor;
	factor = 212 - 32;

	//Use conversion factor to convert Celsius to Fahrenheit
	return factor * celsius / 100 + 32;
}

void printResults(int fahrenheit)
{
	//Accepts the converted temp and prints results to user
	cout << "Fahrenheit value is: ";
	cout << fahrenheit << endl;
}

bool exitProgram()
{
	//Check to see if user wants to quit
	char yesNo;
	cout << "Enter y to contine; anything else to quit: ";
	cin >> yesNo;

	//Check to see if user entered y
	if (yesNo != 'y') return false;
	else return true;

}

int main(int nNumberofArgs, char* pszArgs[]) {
	//Loop to continue the program until the user enter chooses to quit
	bool quit = true;
	while (quit)
	{

		//Calls getCelsius to get and return an int from the user
		//then passes that variable along for conversion
		//finally prints the results of the conversion
		printResults(tempConversion(getCelsius()));

		//returns true if the user wants to continue
		//false otherwise
		quit = exitProgram();
	}
	//Wait until the user is ready before terminating the program
	system("PAUSE");
	return 0;
}
