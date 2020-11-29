#include <iostream>
using namespace std;

int main()
{
	int number1, number2;

	cout << "Input the first number: ";
	cin >> number1;
	cout << "Input the second number: ";
	cin >> number2;

	if (number1 > number2)
	{
		cout << number1 << " > " << number2 << endl;
	}
	else
	{
		cout << number1 << " < " << number2 << endl;
	}

	bool div = number2 % number1 == 0;

	if (div)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}