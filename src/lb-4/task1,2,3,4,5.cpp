#include <iostream>

// 1. Функція копіює значення з однієї змінної в іншу, використовуючи вказівники.
void copyValue(int* source, int* destination) {
    *destination = *source;
}

// 2. Функція рахує, скільки з трьох чисел є парними та скільки непарними.
void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    if (*a % 2 == 0) (*evenCount)++; else (*oddCount)++;
    if (*b % 2 == 0) (*evenCount)++; else (*oddCount)++;
    if (*c % 2 == 0) (*evenCount)++; else (*oddCount)++;
}

// 3. Функція множить два числа і записує результат у змінну через вказівник result.
void multiply(int* a, int* b, int* result) {
    *result = (*a) * (*b);
}

// 4. Функція змінює значення двох змінних місцями без використання тимчасової змінної.
void swapWithoutTemp(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// 5. Функція знаходить найбільше та найменше з трьох чисел.
void findMinMax(int* a, int* b, int* c, int* min, int* max) {
    *min = *max = *a; // Припускаємо, що a - і мінімум, і максимум.

    if (*b < *min) *min = *b;
    if (*b > *max) *max = *b;

    if (*c < *min) *min = *c;
    if (*c > *max) *max = *c;
}

int main() {

    // 1. Копіювання значення
    int a = 5, b = 0;
    copyValue(&a, &b);
    std::cout << "Копіювання значення: b = " << b << std::endl;

    // 2. Рахунок парних і непарних
    int x = 2, y = 3, z = 4;
    int evenCount, oddCount;
    countEvenOdd(&x, &y, &z, &evenCount, &oddCount);
    std::cout << "Парні: " << evenCount << ", Непарні: " << oddCount << std::endl;

    // 3. Множення
    int num1 = 4, num2 = 5, result;
    multiply(&num1, &num2, &result);
    std::cout << "Результат множення: " << result << std::endl;

    // 4. Обмін значень
    int m = 10, n = 20;
    std::cout << "Перед обміном: m = " << m << ", n = " << n << std::endl;
    swapWithoutTemp(&m, &n);
    std::cout << "Після обміну: m = " << m << ", n = " << n << std::endl;

    // 5. Знаходження мінімуму та максимуму
    int minValue, maxValue;
    findMinMax(&x, &y, &z, &minValue, &maxValue);
    std::cout << "Мінімум: " << minValue << ", Максимум: " << maxValue << std::endl;

    return 0;
}
