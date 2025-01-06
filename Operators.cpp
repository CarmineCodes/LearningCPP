/*
The purpose of this is to practice operators in cpp
carmine
*/

#include <iostream>
using namespace std;

int num1;
int num2;

int minusOne(int num)
{
	return num-1;
}


int main()
{
	cout << "Please enter a number \n";
	cin >> num1;
	cout << "Please enter another number: \n";
	cin >> num2;
	cout << "You entered: " << num1 << " and " << num2 << "\n";
	
	cout << "Num1 + Num2 = " << num1 + num2 << "\n";
	cout << "Num1 - Num2 = " << num1 - num2 << "\n";
	cout << "Num1 x Num2 = " << num1 * num2 << "\n";
	cout << "Num1 / Num2 = " << num1 / num2 << "\n";
	cout << "Num1 % Num2 = " << num1 % num2 << "\n";
	cout << "Num1 plus 1 = " << ++num1 << +"\n";
	cout << "Num2 plus 1 = " << ++num2  << +"\n";
	cout << "Num1 minus 1 = " << minusOne(num1) << +"\n"; //these minus functions dont work. prob should have all these do the math to another int so they work right
	cout << "Num2 minus 1 = " << minusOne(num2) << +"\n";

	return 0;

}