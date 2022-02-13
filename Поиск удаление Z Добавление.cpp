#include <iostream>
#include <ctime>
using namespace std;
void FillArr(int* arr, int N) {
	for (int i = 0; i < N; i++)
		arr[i] = rand() % 10;
}
void printArr(int* arr, int N)
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void deleteZ(int*& arr, int& size, int y) {
	int* newArr = new int[size - 1];
	for (int i = 0; i < y; i++)
		newArr[i] = arr[i];
	for (int j = y; j < size; j++)
		newArr[j] = arr[j + 1];
	size--;
	delete[] arr;
	arr = newArr;
}
int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(0));
	int n = 10;
	int y;
	int* arr = new int[n];
	FillArr(arr, n);
	printArr(arr, n);
	int z;
	int zz;
	cout << "Введите число, которое хотите найти в массиве и удалить: ";
	cin >> z;
	bool f = false;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] == z) && (f == false))
		{
			y = i;
			deleteZ(arr, n, y);
			f = true;
		}
	}
	printArr(arr, n);
	if (f == true)
	{
		cout << "В массиве нашлось заданное число: " << z << endl;
		cout << "Длинна массива стала равна: " << n << endl;
	}
	else 
	{
		cout << "В массиве не нашлось заданное число: " << z << endl;
		cout << "Длинна массива не изменилась и равна: " << n << endl;
	}
	cout << "Введите номер места, на которое хотите поставить число " << z << " в массиве: ";
	cin >> zz; 
	arr[zz-1] = z;
	printArr(arr, n);
	return 0;
}

