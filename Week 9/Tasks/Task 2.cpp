#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "Input a: ";
	cin >> a;

	int* p = &a;

	*p *= 5;

	cout << a << endl;

	return 0;
}