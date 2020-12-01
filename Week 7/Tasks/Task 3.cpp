#include <iostream>
using namespace std;

int main()
{
	int matrix[100][100];
	int rows, columns;

	cout << "Input rows: ";
	cin >> rows;
	cout << "Input columns: ";
	cin >> columns;

	for (int i = 0;i < rows; ++i)
	{
		for (int j = 0;j < columns;++j)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}

	bool isSymmetric = true;;

	for (int i = 0;i < rows; ++i)
	{
		for (int j = 0;j < columns;++j)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				isSymmetric = false;
				break;
			}
		}
		if (isSymmetric==false)
		{
			break;
		}
	}

	if (isSymmetric)
	{
		cout << "The matrix is symmetric." << endl;
	}
	else
	{
		cout << "The matrix is not symmetric." << endl;
	}
	return 0;
}