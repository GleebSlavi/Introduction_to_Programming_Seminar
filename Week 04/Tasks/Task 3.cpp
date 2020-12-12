#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Първи начин
	int num, reversedNum = 0, remainder;

	cout << "Input number: ";
	cin >> num;

	while (num != 0)
	{
		remainder = num % 10;
		reversedNum = reversedNum * 10 + remainder;
		num /= 10;
	}

	cout << "Reversed number is: " << reversedNum << endl;
	
	//Втори начин
	int number = 12345;

	while (number != 0)
	{
		cout << number % 10;
		number /= 10;
	}

	cout << "Reversed number is: " << reversedNum << endl;

	return 0;
}
