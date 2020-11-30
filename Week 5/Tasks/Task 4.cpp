#include <iostream>
using namespace std;

int main()
{
	int copyNumber, sum = 0;
	bool isPrime = true;

	for (int i = 100;i < 1000;++i)
	{
		flag = true;
		sum = 0;
		copyNumber = i;

		while (copyNumber != 0)
		{
			sum += copyNumber % 10;
			copyNumber /= 10;
		}

		for (int j = 2;j < sum;++j)
		{
			if (sum % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			cout << i << " ";
		}
	}
	return 0;
}