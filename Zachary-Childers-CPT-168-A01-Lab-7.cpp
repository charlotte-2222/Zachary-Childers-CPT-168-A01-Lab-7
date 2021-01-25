// Zachary-Childers-CPT-168-A01-Lab-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double square;
	double cube;
	double fourth;
	int enteredNumber = 0;
	char userLoop = ' ';
	string first = "";
	string last = "";
	string full = "";

	do
	{
		system("cls");
		system("color b0");

		cout << "\n\t\t\t******************************";
		cout << "\n\t\t\t*      Zachary Childers      *";
		cout << "\n\t\t\t*    Square ~ Cube ~ 4th     *";
		cout << "\n\t\t\t*        CPT-168-A01         *";
		cout << "\n\t\t\t******************************";
		cout << "\n\t\tGreetings!!! To start, please enter your first name: ";
		cin >> first;
		cout << "\n\t\tNow please enter your last name: ";
		cin >> last;
		cout << "\n\t\tLet's Have Fun With Numbers! Enter a number to Square, Cube, and raise to the 4th Power: ";
		cin >> enteredNumber;
		cout <<
			"\n\t\t\tNumber\tSquare\tCube\t4th Power";
		cout 
			<< "\n\t\t\t~~~~~~\t~~~~~~\t~~~~~\t~~~~~~~~~\t";
		//
		/*int i = enteredNumber;*/
		//
		for (int I = 0; I < 10; I++)
		{
			square = pow(enteredNumber, 2.0);
			cube = pow(enteredNumber, 3.0);
			fourth = pow(enteredNumber, 4.0);
			cout << "\n\t\t\t" 
				<< enteredNumber
				<< "\t" << square << 
				"\t" << cube << "\t" 
				<< fourth << endl;
			// this looks better and you cant tell me otherwise.
			enteredNumber += 5;
		}
		full = first + " " + last;
		
		cout << "\n\t\tWould you like to run the program again, " 
			<< full 
			<< "? (Y/N): ";
		cin >> userLoop;
		userLoop = toupper(userLoop);

		
		//		//		//		//
	} while (userLoop == 'Y');
	cout << 
		"\n\t\t\t\tThank you for running this program, "
		<< full << "!!!";
	cout 
		<< "\n\t\t\tYour contribution assists me in becoming the best programmer I can be :)" 
		<< endl;
	system("pause");
	return 0;
}
       