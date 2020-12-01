#include <iostream>
using namespace std;

int main()
{
	int number, arr[100];

	do
	{
		cout << "Input a number: ";
		cin >> number;
	} while (number < 2 || number>30);

	for (int i = 0;i < number;++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	for (int i = 0;i < number;++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int max = arr[0], min = arr[0], indexMax = 0, indexMin = 0;

	for (int i = 1;i < number;++i)
	{
		if (arr[i] > max)
		{
			indexMax = i;
			max = arr[i];
		}
		if (arr[i] < min)
		{
			indexMin = i;
			min = arr[i];
		}
	}
	
	int temp = arr[indexMax];
	arr[indexMax] = arr[indexMin];
	arr[indexMin] = temp;

	for (int i = 0;i < number;++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}