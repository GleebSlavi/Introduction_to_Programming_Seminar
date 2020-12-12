#include <iostream>
using namespace std;

int maxNumber(int a, int b, int c, int d);

int main()
{
	int a, b, c, d;

	cout << "Input the first number: ";
	cin >> a;
	cout << "Input the second number: ";
	cin >> b;
	cout << "Input the third number: ";
	cin >> c;
	cout << "Input the forth number: ";
	cin >> d;

	int max = maxNumber(a, b, c, d);

	cout << "The biggest number is " << max << endl;

	return 0;
}

int maxNumber(int a, int b, int c, int d)
{
	if (a > b && a > c && a > d)
	{
		return a;
	}
	if (b > a && b > c && b > d)
	{
		return b;
	}
	if (c > b && c > a && c > d)
	{
		return c;
	}
	if (d > b && d > c && d > a)
	{
		return d;
	}
}
