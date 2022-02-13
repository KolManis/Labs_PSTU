#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int const N = 4;
	int arr[N][N], k, p, t, z, x;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			arr[i][j] = rand() % 50;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}

	cin >> k >> p;
	z = arr[k - 1][k - 1];
	x = arr[k - 1][p - 1];
	for (int i = 0; i < N; i++)
	{
		if (i != k - 1 && i != p - 1)
		{
			t = arr[k - 1][i];
			arr[k - 1][i] = arr[i][p - 1];
			arr[i][p - 1] = t;
		}
		else
			arr[i][i] = x;
	}
	arr[k - 1][p - 1] = z;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
	return 0;
}