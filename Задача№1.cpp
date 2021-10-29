// 3-х значное число
// вывести все возможные комбинации, т.е. меняем местами цифры в числе
// вывести самое крупное число из полученных 

#include <iostream>
using namespace std;
int x;
int a, b, c, d;
bool f = false;
int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите трехзначное число: ";
    cin >> x;
    d = x;
    a = x % 10;
    x = x / 10;
    b = x % 10;
    c = x / 10;
    while (f == false)
    {
        if ((100 < d && d > 999) || ((a == b) || (b == c) || (a == c)))
        {
            cout << "Введите трехзначное число еще раз: ";
            cin >> x;
            d = x;
            a = x % 10;
            x = x / 10;
            b = x % 10;
            c = x / 10;
        }
        else 
        {
            f = true;
        }
    }
    cout << "Выведем все числа, которые можно составить: " << endl;
    cout << " " << a << b << c << endl;
    cout << " " << a << c << b << endl;
    cout << " " << b << a << c << endl;
    cout << " " << b << c << a << endl;
    cout << " " << c << a << b << endl;
    cout << " " << c << b << a << endl;
   
    if ((a > b) && (a > c)) 
    {
    if (b > c)
        cout << "Самое большое число: " << a << b << c;
    else
        cout << "Самое большое число: " << a << c << b;
    }   
    else
    {
        if ((b > a) && (b > c)) 
        {
            if (a > c)
                cout << "Самое большое число: " << b << a << c;
            else
                cout << "Самое большое число: " << b << c << a;
        }
        else 
        {
            if ((c > a) && (c > b))
            {
                if (a > b)
                    cout << "Самое большое число: " << c << a << b;
                else
                    cout << "Самое большое число: " << c << b << a;
            }
        }
    }
}
