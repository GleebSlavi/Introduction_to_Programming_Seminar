#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1, x2, y1, y2;

	cout << "Input x1: ";
	cin >> x1;
	cout << "Input x2: ";
	cin >> x2;
	cout << "Input y1: ";
	cin >> y1;
	cout << "Input y2: ";
	cin >> y2;

	cout << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;

	return 0;
}