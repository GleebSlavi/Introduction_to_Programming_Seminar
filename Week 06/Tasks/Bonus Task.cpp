#include <iostream>
using namespace std;

int main()
{
	double arr[100], sum = 0;

	
	for (int i = 0;arr[i-1] != 0;++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	

	for (int i = 0; arr[i]!='\0' ;++i)
	{
		if (arr[i] < 0)
		{
			for (int j = i;arr[j] != '\0';++j)
			{
				arr[j] = arr[j + 1];
			}
			--i;
		}
	}

	int length = 0, i = 0;
	while (arr[i] != '\0')
	{
		++length;
		++i;
	}

	for (int i = 0;i<length+1;++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	if ((length + 1) % 2 == 0)
	{
		for (int i = 0;i < (length+1) / 2;++i)
		{
			sum += arr[i];
		}
		cout << sum / ((length+1) / 2) << endl;
	}
	else
	{
		for (int i = 0;i < ((length+1) / 2)+1;++i)
		{
			sum += arr[i];
		}
		cout << sum / (((length+1) / 2)+1) << endl;
	}
	
	return 0;
}
