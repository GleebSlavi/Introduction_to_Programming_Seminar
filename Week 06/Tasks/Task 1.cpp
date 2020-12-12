#include <iostream>
using namespace std;

int main()
{
	int arr[100], number;

	do
	{
		cout << "Input a number: ";
		cin >> number;
	} while (number < 2 || number > 25);

	for (int i = 0;i < number;++i)
	{
		cout << "arr [" << i << "] = ";
		cin >> arr[i];
	}

	bool isPrime = true;

	for (int i = 0;i < number;++i)
	{
		isPrime = true;
		for (int j = 2;j < arr[i];++j)
		{
			if (arr[i] % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			cout << arr[i] << " ";
		}
	}
	return 0;
}