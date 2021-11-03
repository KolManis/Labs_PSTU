// 2.2 Заданы моменты начала и конца некоторого промежутка времени в часах, минутах и секундах (в пределах одних суток). 
// Написать программу для нахождения продолжительности этого промежутка в тех же единицах.

#include <iostream>
#include <string>
using namespace std;
int hours, minutes, seconds;
int hours1, minutes1, seconds1;
int all_time;
int H, M, S;
int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Введите начало интервала: часы, минуты, секунды\n";
	cin >> hours >> minutes >> seconds;
	cout << "Введите конец интервала: часы, минуты, секунды\n";
	cin >> hours1 >> minutes1 >> seconds1;
	all_time = (hours1 * 3600 + minutes1 * 60 + seconds1) - (hours * 3600 + minutes * 60 + seconds);
	H = all_time / 3600;
	M = (all_time - H * 3600) / 60;
	S = all_time - H * 3600 - M * 60;
	cout << "Продолжительность промежутка времени: ";
	if (H < 10)
		cout << '0' << H;
	else
		cout << H;
	if (M < 10)
		cout <<":0" << M;
	else 
		cout << ":"<<M;
	if (S < 10)
		cout << ":0" << S;
	else
		cout << ":"<< S;
	return 0;
}
