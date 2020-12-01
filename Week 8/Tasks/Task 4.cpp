#include <iostream>
using namespace std;

int absoluteValue(int number);

int main()
{
	int number;

	cout << "Input number: ";
	cin >> number;

	int abs = absoluteValue(number);

	cout << "The absolute value is " << abs << endl;
	return 0;
}

int absoluteValue(int number)
{
	if (number < 0)
	{
		return number * (-1);
	}
	return number;
}