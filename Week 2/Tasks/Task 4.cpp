#include <iostream>
using namespace std;

int main()
{
	int n, k;

	cout << "Input number n: ";
	cin >> n;
	cout << "Input number k: ";
	cin >> k;

	int sum = 1;

	sum *= n % 10;
	n /= 10;
	sum *= n % 10;
	n /= 10;
	sum *= n;

	if (sum > k)
	{
		cout << "YES" << endl;
		cout << sum + k << endl;
	}
	else
	{
		cout << "NO" << endl;
		cout << k-sum << endl;
	}
	return 0;
}