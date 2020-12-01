#include <iostream>
using namespace std;

int main()
{
	int number, arr[100], digit;
	int sum = 0, sumArr=0;

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

	for (int i = 0;i < number;++i)
	{
		sum = 0;
		do
		{
			digit = arr[i] % 10;
			arr[i] /= 10;
			sum += digit;

		} while (arr[i] != 0);
		

		if (sum > 9 && sum<100)
		{
			sumArr += 1;
		}
	}
	
	cout << sumArr << endl;
	return 0;
}