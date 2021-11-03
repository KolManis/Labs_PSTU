// 2.1 Определить, чему будет равно выражение ++i*i++ при начальном i = 1. Проверить результат программой.
#include <iostream>
using namespace std;
int i = 1;
int main() 
{
	cout << ++i * i++;
	return 0;
}