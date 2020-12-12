#include <iostream>
using namespace std;

int main()
{
	int n, sum=1;
	
	cout << "Input n: ";
	cin >> n;

	for (int i = 0;i < n;++i)
	{
		if (i == 3 || i == 6)
		{
			continue;
		}
		else
		{
			sum *= i;
		}
	}
	cout << "The sum is: " << sum << endl;

	return 0;
}