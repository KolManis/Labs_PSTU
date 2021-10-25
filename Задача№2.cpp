#include <iostream>
#include <time.h> 
using namespace std;
int c,x;
int countt = 1;
bool f = false;

int main() 
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	c = 1 + rand() % 100;
	cout << "Попробуйте угадать число. У вас есть 6 попыток" << endl;
	while ((f == false) and (countt != 7))
	{
		cout << "Введите число: " << endl;
		cin >> x;
		cout << "Номер вашей попытки: " << countt << endl;
		countt++;
		if (x == c)
			f = true;
		else if (x < c) 
			cout << "Загаданное число больше вашего "<< endl;
		else 
			cout << "Загаданное число меньше вашего" << endl;		
	}
	if (f == true and countt <= 7)
	{
		cout << "Вы угадали число!!! Поздравляем!!!";
	}
	else
		cout << "Вам не повезло, попробуйте еще раз (-_-)";
	return 0;
}