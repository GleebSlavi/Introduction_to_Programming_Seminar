#include <iostream>
using namespace std;

int reverseNumber(int number);

int main()
{
	int number;

	cout << "Input number: ";
	cin >> number;

	int reverse = reverseNumber(number);

	cout << "The reversed number is " << reverse << endl;

	return 0;
}

int reverseNumber(int number)
{
	int reverse = 0;
	while (number != 0)
	{
		reverse = reverse * 10 + number % 10;
		number /= 10;
	}

	return reverse;
}