#include <iostream>
using namespace std;

double perimeterTriangle(double sideA, double sideB);

int main()
{
	int a, b;

	cout << "Input side A: ";
	cin >> a;
	cout << "Input side B: ";
	cin >> b;

	double p = perimeterTriangle(a, b);

	cout << "The perimeter is " << p << endl;
	return 0;
}

double perimeterTriangle(double sideA, double sideB)
{
	return 2 * sideA + 2 * sideB;
}