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
	cout << endl;
}

void reverseArray(int arr[], int size)
{
	for (int i = 0;i < size / 2;++i)
	{
		int reverse = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = reverse;
	}
}

int main()
{
	int arr[100], size;

	cout << "Input size: ";
	cin >> size;

	fillArray(arr, size);
	printArray(arr, size);

	reverseArray(arr, size);
	printArray(arr, size);

	return 0;
}