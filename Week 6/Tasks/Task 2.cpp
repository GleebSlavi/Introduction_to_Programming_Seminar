#include <iostream>
using namespace std;

int main()
{
	int arr[100], number;
	bool isEven = false;

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

	for (int i = 0;i < number;++i)
	{
		
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
			isEven = true;
		}

	}
	if (!isEven)
	{
		cout << "No even numbers" << endl;
	}
	return 0;
	
}