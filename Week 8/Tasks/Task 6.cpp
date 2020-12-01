#include <iostream>
using namespace std;

bool isPrime(int number);

int main()
{
	int number;

	cout << "Input number: ";
	cin >> number;

	bool prime = isPrime(number);

	if (prime)
	{
		cout << "Prime" << endl;
	}
	else
	{
		cout << "Not prime" << endl;
	}

	return 0;
}

bool isPrime(int number)
{
	for(int i=2;i<number;++i)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
