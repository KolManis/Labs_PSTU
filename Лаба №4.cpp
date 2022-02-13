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
void addZ(int*& arr, int& size, double y) {
	int* newArr = new int[size + 3];
	for (int i = 0; i < 3; i++)
		newArr[i] = y;
	for (int j = 3, i = 0; j < size + 3; j++, i ++)
		newArr[j] = arr[i];
	size = size + 3;
	delete[] arr;
	arr = newArr;
}
int main()
{
	srand(time(0));
	int n = 10;
	int y;
	int* arr = new int[n];
	FillArr(arr, n);
	printArr(arr, n);
	int min = arr[0];
	int sum = 0;
	int counter = 0;
	double srr;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (min == arr[i]) 
		{
			y = i;
			deleteZ(arr, n, y);
		}	
	}
	printArr(arr, n);
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		counter++;
	}
	srr = double(sum) / double(counter);
	addZ(arr, n, srr);
	printArr(arr, n);
	return 0;
}

