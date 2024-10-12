/*Створити дві змінні та написати дві функції min, які 
повертають мінімальне значення 
з двох чисел. Перша буде приймати параметри за значенням, друга – за посиланням. 
У місці виклику функції присвоїти цим змінним дані функції 
та вивести на екран значення.*/

#include <iostream>
using namespace std;

int Vmin (int a, int b) { return (a < b) ? a : b;}
int Gmin (const int &a, const int &b){return (a<b) ? a : b;}
int main () 
{
    int a =6, b= 15;
    int result_Vmin = Vmin ( a, b);
    cout<<"Мінімальне значення за значенням:"<<result_Vmin<<endl;

    int result_Gmin = Gmin ( a, b);
    cout<<"Мінімальне значення за посиланням:"<<result_Gmin<<endl;
     return 0;
}