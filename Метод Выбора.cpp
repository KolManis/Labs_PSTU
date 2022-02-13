#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	const int N = 10;
	int a[N], y, min;
	for (int i = 0; i < N; i++)
		a[i] = rand() % 100 - 50;
	cout << '{';
	for (int i = 0; i < N; i++)
	{
		cout << a[i];
		if (i != N - 1)
			cout << ", ";
	}
	cout << '}';
	cout << endl;
	for (int i = 0; i < N; i++) 
	{
		min = i;
		for (int j = i; j < N; j++) 
		{
			if (a[j] < a[min])
				min = j;
		}
		y = a[i];
		a[i] = a[min];
		a[min] = y;
	}
	cout << '{';
	for (int i = 0; i < N; i++) {
		cout << a[i];
		if (i != N - 1)
			cout << ", ";
	}
	cout << '}';
	return 0;
}