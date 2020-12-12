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

void replace(int arr[], int size, int replaceWhat, int replaceWith)
{
	for (int i = 0;i < size;++i)
	{
		if (arr[i] == replaceWhat)
		{
			arr[i] = replaceWith;
		}
	}
}

int main()
{
	int arr[100], size;

	cout << "Input size: ";
	cin >> size;

	fillArray(arr, size);
	printArray(arr, size);

	int numberToReplace, numberToReplaceWith;
	cout << "Input the number you want to replace: ";
	cin >> numberToReplace;
	cout << "Input the number you want to replace the other number with: ";
	cin >> numberToReplaceWith;

	replace(arr, size, numberToReplace, numberToReplaceWith);
	printArray(arr, size);


	return 0;
}