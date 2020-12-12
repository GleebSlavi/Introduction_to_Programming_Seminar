#include <iostream>
using namespace std;

int main()
{
	int m, n;

	do
	{
		cout << "Input m: ";
		cin >> m;
		cout << "Input n: ";
		cin >> n;

	} while (m >= n);

	int count = 0;

	for (int i = m;i <= n;i++)
	{
		bool difDigit = true;
		int copyNumber = i;
		int remainder1 = copyNumber % 10;
		copyNumber /= 10;
		while (copyNumber != 0)
		{
			int remainder2 = copyNumber % 10;
			copyNumber /= 10;

			if (remainder1 == remainder2)
			{
				difDigit = false;
				break;
			}

		}
		if (difDigit)
		{
			count++;
		}
	}
	cout << "The count of different numbers is: " << count << endl;
	return 0;
}