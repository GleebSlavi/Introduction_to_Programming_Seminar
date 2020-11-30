#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	// for цикъл
	for (int i = 1;i <= 10;i++)
	{
		sum += i;
	}

	// while цикъл
	int i = 1;

	while (i <= 10)
	{
		sum += i;
		i++;
	}

	// do...while цикъл
	int i = 1;

	do
	{
		sum += i;
		i++;
	} while (i <= 10);

	cout << "Sum is: " << sum << endl;


	return 0;

}