#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Input 3 digit number: ";
	cin >> number;

	int digit3 = number % 10;
	number /= 10;
	int digit2 = number % 10;
	number /= 10;
	int digit1 = number;

	cout <<"The reversed number is: " << digit3 << digit2 << digit1 << endl;

	return 0;
}