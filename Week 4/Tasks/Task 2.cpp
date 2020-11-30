#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Input number: ";
	cin >> num;

	for (int i = 0;i < num;i++)
	{
		if (i % 5 == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}