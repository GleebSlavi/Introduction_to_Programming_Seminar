#include <iostream>
using namespace std;

void fillMatrix(int matrix[][3], int rows_size)
{
	for (int i = 0;i < rows_size; ++i)
	{
		for (int j = 0;j < 3;++j)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
}

void printMatrix(int matrix[][3], int rows_size)
{
	for (int i = 0;i < rows_size; ++i)
	{
		for (int j = 0;j < 3;++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int matrix[100][3], rows;

	cout << "Input rows: ";
	cin >> rows;

	fillMatrix(matrix, rows);
	printMatrix(matrix, rows);


	return 0;
}