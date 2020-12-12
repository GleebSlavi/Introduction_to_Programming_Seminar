#include <iostream>
using namespace std;

int main()
{
	int number;
	char arr[100];

	do
	{
		cout << "Input a number: ";
		cin >> number;
	} while (number < 1 || number>100);

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
		if (arr[i] == 'a' || arr[i] == 'o' || arr[i] == 'i' || arr[i] == 'u' || arr[i] == 'e')
		{
			number -= 1;
			for (int j = 0;j < number;++j)
			{
				arr[j] = arr[j + 1];
			}
			
		}
		cout << arr[i] << " ";
	}
	return 0;
}