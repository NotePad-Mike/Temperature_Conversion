//
//	Program to convert temperature for Celsius degree
//	units into Fahrenheit degree units:
//	Fahrenheit  = Celsius * (212 - 32)/100+32
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	//Loop to continue the program until the user enters -1
	bool quit = false;
	while (!quit)
	{

		//Enter the temp in Celsius
		int celsius;
		cout << "Enter the temperature in Celsius: ";
		cin >> celsius;

		//Calculate conversion factor for Celsius to Fahrenheit
		int factor;
		factor = 212 - 32;

		//Use conversion factor to convert Celsius to Fahrenheit
		int fahrenheit;
		fahrenheit = factor * celsius / 100 + 32;

		//Output the results (Followed by a new line)
		cout << "Fahrenheit value is: ";
		cout << fahrenheit << endl;

		//Check to see if user wants to quit
		char yesNo;
		cout << "Enter y to contine or n to quit: ";
		cin >> yesNo;

		//Check to see if user entered n
		if (yesNo == 'n')
		{
			quit = true;
		}
	}
	//Wait until the user is ready before terminating the program
	system("PAUSE");
	return 0;


}
