#include <iostream>
using namespace std;

void fillMatrix(int matrix[][4], int rows_size)
{
	for (int i = 0;i < rows_size; ++i)
	{
		for (int j = 0;j < 4;++j)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
}

void printMatrix(int matrix[][4], int rows_size)
{
	for (int i = 0;i < rows_size; ++i)
	{
		for (int j = 0;j < 4;++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void minMatrix(int matrix[][4], unsigned row_size, int& min)
{
	int minNumber = matrix[0][0];
	for (unsigned i = 0;i < row_size;++i)
	{
		for (int j = 0;j < 4;++j)
		{
			if (matrix[i][j] < minNumber)
			{
				minNumber = matrix[i][j];
			}
		}
	}

	min = minNumber;
}

int main()
{
	int matrix[100][4];
	unsigned rows;

	cout << "Input rows: ";
	cin >> rows;

	fillMatrix(matrix, rows);
	printMatrix(matrix, rows);

	int minNumber;
	minMatrix(matrix, rows, minNumber);

	cout << "min = " << minNumber << endl;
	return 0;
}