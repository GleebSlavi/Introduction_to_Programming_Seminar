#include <iostream>
using namespace std;

int maxNumber(int a, int b);

int main()
{
	int a, b;

	cout << "Input the first number: ";
	cin >> a;
	cout << "Input the second number: ";
	cin >> b;

	int max = maxNumber(a, b);

	cout << "The bigger number is " << max << endl;

	return 0;
}

int maxNumber(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}