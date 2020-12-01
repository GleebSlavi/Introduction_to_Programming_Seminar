#include <iostream>
using namespace std;

int main()
{
	int matrix[100][100];
	int size;

	cout << "Input size: ";
	cin >> size;

	for (int i = 0;i < size; ++i)
	{
		for (int j = 0;j < size;++j)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}

	for (int i = 0;i < size; ++i)
	{
		for (int j = 0;j < size;++j)
		{
			if (i == j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
	cout << endl;

	for (int i = 0;i < size; ++i)
	{
		for (int j = 0;j < size;++j)
		{
			if (i + j == size - 1)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
	cout << endl;
	cout << endl;

	for (int i = 0;i < size; ++i)
	{
		for (int j = 0;j < size;++j)
		{
			if (i < j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
	cout << endl;
	cout << endl;

	for (int i = 0;i < size; ++i)
	{
		for (int j = 0;j < size;++j)
		{
			if (i > j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
	return 0;
}