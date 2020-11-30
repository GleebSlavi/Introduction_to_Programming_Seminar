#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
       
        for (int space = i; space < rows; space++)
        {
            cout << " ";
        }
       
        for (int j = 0; j < (2 * i - 1); j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
