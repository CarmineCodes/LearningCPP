/*
the objective of this is to practice booleana nd logoc
carmine
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int num1;
int num2;
string name;

bool isString(const string& input)
{
	for (char c : input)
	{
		if (!isalpha(c) && !isspace(c))
		{
			return false;
		}
	}

	return true;
}

int main()
{
	cout << "Please enter an integer from 1 to 10" << endl;
	//cin >> num1;

	//validation to check user input is 1-10
	
	while (true)
	{
		if (cin >> num1)
		{
			if (num1 > 0 && num1 <= 10)
			{
				break; //ends loop if valid input is detected
			}
			else 
			{
				cout << "Please enter a valid integer between 1 and 10: " << endl;;
			}
		}
			else {
			cout << "Incorrect input, please enter a valid integer: " << endl;;
			cin.clear();               // Clear the error flag
			cin.ignore(10000, '\n');   // Discard invalid input
		}
	}


	cout << "You entered: " << num1 << endl;

	cout << "Please enter a integer from 50 to 100" << endl;
	//cin >> num2;

	while (true)
	{
		if (cin >> num2)
		{
			if (num2 >= 50 && num2 <= 100)
			{
				break; //if input is valid break loop
			}
			else
			{
			cout << "Please enter a valid integer between 50 and 100" << endl;
			}
		}
			else
			{
			cout << "Incorrect input, please enter a valid integer! " << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			}
	}

	cin.ignore(10000, '\n');

	cout << "Please enter your name" << endl;

	while (true)
	{
		getline(cin, name);

		if (isString(name))
		{
			break;
		}
		else
		{
			cout << "Invalid input, Please enter your name! " << endl;
		}
	}

	cout << "You entered: " << name << " as your name" << endl;

	cout << "---------------------------------------------------------------------" << endl;

	cout << "You entered the following: " << '\n' << "Num1 = " << num1 << '\n' << "Num2 = " << num2 << '\n' << "Your name is: " << name << endl;

	cout << "---------------------------------------------------------------------" << endl;

	//boolean functions that make no sense
	if (num1 > num2)
	{
		cout << "Number 1 is greater than Number 2" << endl;
	}
	else
	{
		cout << "Number 1 is less than Number 2" << endl;
	}

	if (num2 > num1)
	{
		cout << "Number 2 is greater than Number 1" << endl;
	}
	else
	{
		cout << "Number 2 is less than Number 1" << endl;
	}



	//return 0;

}
	