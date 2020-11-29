#include <iostream>
using namespace std;

int main()
{
	int day, month, year;
	cout << "Input today's date in format: ";
	cin >> day >> month >> year;

	if (day > 0 || day < 28)
	{
		day += 1;
	}
	if (day == 28)
	{
		if (month == 2)
		{
			if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			{
				day =29;
			}
			else
			{
				day = 1;
				month = 3;
			}
		}
		else
		{
			day += 1;
		}
	}
	if (day == 29)
	{
		if (month == 2)
		{
			day = 1;
			month = 3;
		}
		else
		{
			day += 1;
		}
	}
	if (day == 30)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			day += 1;
		}
		else
		{
			day = 1;
			month += 1;
		}
	}
	if (day == 31)
	{
		day = 1;
		if (month == 12)
		{
			month = 1;
			year += 1;
		}
		else
		{
			day = 1;
			month += 1;
		}
	}
	cout << "Tomorrow's date is:" << endl;
	if (day < 10)
	{
		cout << "0" << day << ".";
	}
	else
	{
		cout << day << ".";
	}
	if (month < 10)
	{
		cout << "0" << month << ".";
	}
	else
	{ 
		cout << month << ".";
	}
	cout << year << endl;

	return 0;
}


