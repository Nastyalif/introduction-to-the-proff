#include  <iostream>
using namespace std;

int main() {
    int first, second;

    // Введення значень для двох змінних
    cout << "Введіть перше число: ";
    cin >> first;

    cout << "Введіть друге число: ";
    cin >> second;

    // Виведення адрес змінних
    cout << "Адреса першої змінної: " << &first << endl;
    cout << "Адреса другої змінної: " << &second << endl;

    // Виведення чисел від першого до другого зі знаком мінус
    if (first < second) {
        for (int i = first; i <= second; ++i) {
            cout << -i << " "; // Додаємо знак мінус перед числом
        }
    }
    else {
        for (int i = first; i >= second; --i) {
            cout << -i << " "; // Додаємо знак мінус перед числом
        }
    }

    cout << endl;
    return 0;
}