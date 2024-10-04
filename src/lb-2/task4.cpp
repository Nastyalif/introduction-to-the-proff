/*Напишіть програму, яка виводить усі прості числа від 1
до N (використовуйте цикл та перевірку на простоту).*/

#include <iostream>
using namespace std;
int main()
{
	int N, num;
	//Введення числа
	cout << "Введіть число N:";
	cin >> N;

	//Перевірка на простоту числа 
	for (int num = 2; num <= N; ++num) {
		bool isPrime = true;

		//Перевіряємо чи ділиться число на будь-який із попередніх чисел
		for (int i = 2; i * i <= num; ++i) {
			if (num % i == 0) {
				isPrime = false; break;
			}
		}
		//Якщо число просте, то виводимо його
		if (isPrime) {
			cout << num << "  ";
		}
	}
	cout << endl;
	return 0;
}
