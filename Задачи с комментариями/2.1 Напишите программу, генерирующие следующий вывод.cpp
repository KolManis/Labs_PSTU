// 2.1 Напишите программу, генерирующие следующий вывод: 10 20 19
//Используйте представление числа 10 в виде целой константы. 
//Для вывода 20 используйте присваивание, для вывода 19 операцию декрементация. 

#include <iostream>
using namespace std;
int a = 20;
int main() 
{
	cout << 10 <<"\n"<< a-- <<"\n"<< a; // первое число выводим в виде целой константы, второе присваиванием, а 3 с помошью декрементации
	return 0;
}