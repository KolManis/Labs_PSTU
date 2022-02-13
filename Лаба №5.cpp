#include <iostream>
#include <ctime> 
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	const int v = 6;
	const int g = 6;
	int arr[v][g]; 
	for (int i = 0; i < v; i++) {
		for (int j = 0; j < g; j++) {
			arr[i][j] = rand() % 9;
		}
	}
	cout << "Ваш массив ";
	for (int i = 0; i < v; i++) {
		cout << endl;

		for (int j = 0; j < g; j++) {
			cout << arr[i][j] << " ";
		}
	}
	cout << endl;
	for (int column = 1 ; column < g-1; column++)
	{
		int sum1 = 0;
		int sum2 = 0;
		for (int line = 0; line < v; line++)
		{
			for (int before_column = 0; before_column < column; before_column++)
				sum1 += arr[line][before_column];
			for (int after_column = g - 1; after_column > column; after_column--)
				sum2 += arr[line][after_column];
		}
		if (sum1 > sum2) {
			cout << "Cтолбец № " << column + 1;
			cout << " делит массив так, что сумма элементов в 1-ой части > суммы элементов во 2-ой части" << endl;
		}
		else
			cout << "Cтолбец № " << column + 1 << " не соответсвует условию" << endl;	
	}
	return 0;
}
