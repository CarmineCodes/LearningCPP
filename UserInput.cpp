/*
The objective of this is to practice working with user input in cpp
carmine
*/

#include <iostream>
#include <string>
using namespace std;

string name;
int age;

int main()
{
	cout << "Please enter your name\n";
	cin >> name;
	cout << "Please enter your age\n";
	cin >> age;
	cout << "You name is: " << name << " and your age is: " << age;
	return 0;

}