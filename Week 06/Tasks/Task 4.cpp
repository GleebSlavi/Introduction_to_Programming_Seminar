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

	bool isPalindrome = true;
	for (int i = 0;i < number / 2;++i)
	{
		if (arr[i] != arr[number - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}
	if (isPalindrome)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Not palindrome" << endl;
	}
	return 0;
}