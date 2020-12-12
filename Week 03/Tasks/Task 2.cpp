#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char symbol;

	cout << "Input the first number: ";
	cin >> num1;
	cout << "Input the second number: ";
	cin >> num2;
	cout << "Input symbol: ";
	cin >> symbol;

	switch (symbol)
	{
	case '+':
		cout << "First Number + Second Number = " << num1 + num2 << endl;
		break;
	case '-':
		cout << "First Number - Second Number = " << num1 - num2 << endl;
		break;
	case '*':
		cout << "First Number * Second Number = " << num1 * num2 << endl;
		break;
	case '/':
		if (num2 == 0)
		{
			cout << "Second Numer is 0" << endl;
		}
		else
		{
			cout << "First Number / Second Number = " << num1 / (double) num2 << endl;
		}
		break;
	default:
		cout << "Invalid Symbol" << endl;
		break;

	}
	
	return 0;

}