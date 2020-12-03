#include <iostream>
using namespace std;

int main()
{
	int arr[100] = { 5,6,7,8,9 };

	for (int i = 0;i < 5;++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0;i < 5;++i)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;

	int* p = arr;
	for (int i = 0;i < 5;++i)
	{
		cout << *p++ << " ";
	}
}	
