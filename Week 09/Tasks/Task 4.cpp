#include <iostream>
using namespace std;


int main()
{
	int arr[100], size;

	cout << "Input size: ";
	cin >> size;

	for (int i = 0;i < size;++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	for (int i = 0;i < size;++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int* pointerBeginning = arr, * pointerEnd = arr + size - 1;

	while (pointerBeginning < pointerEnd)
	{
		int temp = *pointerBeginning;
		*pointerBeginning = *pointerEnd;
		*pointerEnd = temp;

		pointerBeginning++;
		pointerEnd--;
	}

	int odd = 0, even = 0;
	for (int i = 0;i < size;++i)
	{
		cout << arr[i] << " ";

		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout << endl;
	
	if (even > odd)
	{
		cout << "1" << endl;
	}
	else if (odd > even)
	{
		cout << "2" << endl;
	}
	else
	{
		cout << "0" << endl;
	}

	

}