#include <iostream>
using namespace std;

void fillArray(int arr[], int size)
{
	for (int i = 0;i < size;++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void max(int arr[], unsigned size, int& max)
{
	int maxNumber = arr[0];
	for (unsigned i = 0;i < size;++i)
	{
		if (arr[i] > maxNumber)
		{
			maxNumber = arr[i];
		}
	}
	max = maxNumber;
}

int main()
{
	int arr[100];
	unsigned size;

	cout << "Input size: ";
	cin >> size;

	fillArray(arr, size);

	int maxNumber;
	max(arr, size, maxNumber);

	cout << "max = " << maxNumber;


	return 0;
}