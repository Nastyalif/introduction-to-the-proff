/*Написати функції sum, які будуть складати два значення різних типів даних.
 Перевантажити функцію для цілих чисел, чисел з плаваючою точкою та двох рядків.*/

#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b);

double sum(double a, double b);


string sum(string a, string b);

int main()
{
    int int1 = 5, int2 = 10;
    cout << "Сума цілих чисел: " << sum(int1, int2) << endl;

    double double1 = 2.5, double2 = 3.7;
    cout << "Сума чисел з плаваючою точкою: " << sum(double1, double2) << endl;

    string str1 = "Доброго ранку, ", str2 = "народе!";
    cout << "Сума рядків: " << sum(str1, str2) << endl;

    return 0;
    }
        int sum(int a, int b)
        {
            return a + b;
        }
        double sum(double a, double b)
    {
        return a + b;
    }

    string sum(string a, string b)
    {
        return a + b;
    }
