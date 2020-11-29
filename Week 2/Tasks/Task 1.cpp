#include <iostream>
using namespace std;

int main()
{
	
	//1.1
	int number;

	cout << "Input number: ";
	cin >> number;

	bool have5 = (number > 99 && number < 1000) && (number % 10 == 5);

	cout << boolalpha << have5 << endl;
	
	/*
	//1.2
	int number;

	cout << "Input number: ";
	cin >> number;

	bool div3And5 = (number > 99 && number < 1000) && (number % 3 == 0) && (number % 5 == 0);

	cout << boolalpha <<div3And5 << endl;
	*/
	return 0;
}