#include <iostream>
using namespace std;

void quadrant(int x, int y);

int main()
{
	int x, y;

	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;

	cout << "The function is in "; 
	quadrant(x, y);

	return 0;
}

void quadrant(int x, int y)
{
	if (x > 0 && y > 0)
	{
		cout << "first quadrant";
	}
	else if (x < 0 && y > 0)
	{
		cout << "second quadrant";
	}
	else if (x < 0 && y < 0)
	{
		cout << "third quadrant";
	}
	else if (x > 0 && y < 0)
	{
		cout << "forth quadrant";
	}
	else if (x == 0)
	{
		cout << "ordinate";
	}
	else if (y == 0)
	{
		cout << "abscissa";
	}
}