#include <iostream>
using namespace std;

int main()
{
	int n;
	double k;
	bool appears = false;

	cout << "Input k: ";
	cin >> k;
	cout << "Input n: ";
	cin >> n;

	for (int i = 0;i < n;++i)
	{
		if (i == k)
		{
			appears = true;
			break;
		}
		
	}
	if (appears)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}