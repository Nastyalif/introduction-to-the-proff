/*Напишіть програму, користувач якої вписує значення двох років 
(умовно, 1976 та 2010), виводить
ці роки та виводить скільки років пройшло між першим та другим значенням –
зробити це все через цикл.
Якщо загальна кількість років більше 100 – зробити вихід із циклу.
Також кожен десятий елемент у циклі враховувати і
вивести їх загальну кількість. Зробити також перевірку для введення
неправильних значень.
*/
#include <iostream>
using namespace std;

int main() {
	setlocale(0, ".1251");
	int year1, year2;
	
	//Введення двох років користувачем із перевіркою правильності
	do {
		cout << "Ведіть перший рік (не менше 0):";
		cin >> year1;
	} while (year1 < 0);

	do {
		cout << "Введіть другий рік (більше від першого):";
		cin >> year2;
	} while (year1 >= year2);

	//Виведення введених років
	cout << "Перший рік:" << year1 << endl;
	cout << "Другий рік:" << year2 << endl;

	int totalYear = year2 - year1;
	cout << "Пройшло років:" << totalYear << endl;
	
	//Якщо загальна кількість років більше 100 – вихід із циклу
	if (totalYear > 100) {
		cout << "Кількість років перевищує 100. Заввершення програми." << endl;
		return 0;
	}

	//Цикл, що враховує кожен десятий рік
	int tenthYearCount = 0;
	for (int i = year1; i <= year2; ++i) {
		if ((i - year1) % 10 == 0) {
			tenthYearCount++;
			cout << "Кожен десятий рік:" << i << endl;
		}
	}


}