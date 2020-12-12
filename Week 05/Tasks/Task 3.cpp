#include <iostream>
using namespace std;

int main()
{
	int n, number;

	cout << "Input n: ";
	cin >> n;

	int count = 0, sum=0;

	do
	{
		cout << "Input number: ";
		cin >> number;

		if (number == 0)
		{
			break;
		}
		else
		{
			sum += number;
		}
		count++;
	}while(count<n)
	cout << "The sum is: " << sum << endl;
}