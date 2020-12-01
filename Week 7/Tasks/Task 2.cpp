#include <iostream>
using namespace std;

int main()
{
	int matrix[100][100];
	int rows, columns, number;

	cout << "Input rows: ";
	cin >> rows;
	cout << "Input columns: ";
	cin >> columns;
	cout << "Input number: ";
	cin >> number;

	for (int i = 0;i < rows; ++i)
	{
		for (int j = 0;j < columns;++j)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}

	for (int i = 0;i < rows;++i)
	{
		for (int j = 0;j < columns;++j)
		{
			matrix[i][j] *= number;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
	