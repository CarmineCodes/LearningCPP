/*
The purpose of this is to practice operators in cpp
this is v2 of the previous operators program i wrote up, the objective is to check input is valid and output errors if not
carmine
*/

#include <iostream>
using namespace std;

int num1;
int num2;
int num3;


int main()
{
	cout << "Please enter a number \n";
	
	while (!(cin >> num1)) //checks if input is valid
	{
		cout << "Incorrect input, please enter a vlid integer!" <<  '\n';
		cin.clear();
		cin.ignore(1000, '\n');
	}
	

	cout << "Please enter another number: \n";
	
	while (!(cin >> num2))
	{
		cout << "Incorrect input, please enter a valid integet!" << '\n';
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << "You entered: " << num1 << " and " << num2 << "\n";
	
	cout << "Num1 + Num2 = " << num1 + num2 << "\n";
	cout << "Num1 - Num2 = " << num1 - num2 << "\n";
	cout << "Num1 x Num2 = " << num1 * num2 << "\n";
	cout << "Num1 / Num2 = " << num1 / num2 << "\n";
	cout << "Num1 % Num2 = " << num1 % num2 << "\n";
	//cout << "Num1 plus 1 = " << ++num1 << +"\n";
	//cout << "Num2 plus 1 = " << ++num2  << +"\n";

	num3 = num1 + 1;
	cout << "Num1 plus 1 = " << num3 << '\n';
	num3 = 0;
	num3 = num2 + 1;
	cout << "Num2 plus 1 = " << num3 << '\n';
	num3 = 0;

	//these subtractions functions didnt work using -- so using int num3 to make it work
	num3 = num1 - 1;
	cout << "Num1 minus 1 = " << num3 << '\n';
	num3 = 0; //resets num3 to 0
	num3 = num2 - 1;
	cout << "Num2 minus 1 = " << num3 << '\n';

	return 0;

}