/*Використовуючи вкладені цикли, 
виведіть на екран трикутник із зірочок*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	int rows;

	//Введення кількості рядків для трикутника
	cout << "Введіть кількість рядків для трикутника:";
	cin >> rows;

	//Виведення трикутника за допомогою вкладених циклів
	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <= i; ++j) { 
		  	cout << "*"; //Виведення зірочки
		}
		cout << endl;
	}
	return 0;

}
