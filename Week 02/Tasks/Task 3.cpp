#include <iostream>
using namespace std;

int main()
{
	int number, sum1=0, sum2=0;

	cout << "Input number: ";
	cin >> number;

	sum1 = number % 10;
	number /= 10;

	sum1 = number % 10;
	number /= 10;

	sum2 = number % 10;
	number /= 10;
	sum2 = number ;

	if (sum2 > sum1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}