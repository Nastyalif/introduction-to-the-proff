/*Написати рекурсивну функцію для знаходження факторіалу 
числа з передачею параметрів за посиланням*/
#include <iostream>
using namespace std;

// Рекурсивна функція для знаходження факторіалу
void factorial(int n, int &result) {
    if (n <= 1) {
        result = 1;  // Базовий випадок: факторіал числа 1 або 0 дорівнює 1
    } else {
        int tempR = 0;
        factorial(n - 1, tempR);  // Рекурсивний виклик для (n-1)
        result = n * tempR;       // Після повернення значення множимо на n
    }
}

int main() {
    int number, factR;
    cout << "Введіть число для знаходження факторіалу: ";
    cin >> number;
    
    factorial(number, factR);  // Виклик рекурсивної функції
    cout << "Факторіал числа " << number << " = " << factR << endl;

    return 0;
}
