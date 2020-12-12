#include <iostream>
using namespace std;

void change(int &firstNumber, int &secondNumber)
{
	firstNumber += 4;
	secondNumber += 4;
}

int main()
{
	int firstNumber, secondNumber;

	cout << "Input first number: ";
	cin >> firstNumber;
	cout << "Input second number: ";
	cin >> secondNumber;

	change(firstNumber, secondNumber);

	cout << firstNumber << " " << secondNumber;
	return 0;
}