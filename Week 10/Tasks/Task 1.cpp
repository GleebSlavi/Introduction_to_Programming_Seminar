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

void printArray(int arr[], int size)
{
	for (int i = 0;i < size;++i)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[100], size;

	cout << "Input size: ";
	cin >> size;

	fillArray(arr, size);
	printArray(arr, size);

	return 0;
}