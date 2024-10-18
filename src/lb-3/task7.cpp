/*Написати функцію, у якій будуть викликані всі
вищезазначені функції, і викликати її в main*/
#include <iostream>
#include <cmath> // Для M_PI

// 1.Перевантаження функції sum
int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

std::string sum(const std::string &a, const std::string &b)
{
    return a + b;
}
//2. Функції для знаходження мінімального значення
int min(int a, int b)
{
    return (a < b) ? a : b;
}

double min(double &a, double &b)
{
    return (a < b) ? a : b;
}
// 3.Перевантажені функції area
double area(double side)
{ // Площа квадрата
    return side * side;
}

double area(double length, double width)
{ // Площа прямокутника
    return length * width;
}

double area(double radius, bool isCircle)
{ // Площа кола
    return M_PI * radius * radius;
}

double area(double base, double height, std::string triangle)
{ // Площа трикутника
    triangle = "triangle";
    return 0.5 * base * height;
}

// 4. Функція swap
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 5. Рекурсивна функція для знаходження факторіалу
void factorial(int n, long long &result)
{
    if (n <= 1)
    {
        result = 1; // Базовий випадок
    }
    else
    {
        long long temp;
        factorial(n - 1, temp); // Рекурсивний виклик
        result = n * temp;      // Обчислення факторіалу
    }
}

// 6. Функція для малювання квадрата з зірочок
void drawSquare(int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << "* ";
        }
        std::cout << std::endl; // Перехід на новий рядок
    }
}

// Функція, що викликає всі інші функції
void runAllFunctions()
{
    // 1. Виклик sum
    int intSum = sum(5, 10);
    double doubleSum = sum(5.5, 4.5);
    std::string strSum = sum("Hello, ", "world!");
    std::cout << "Сума цілих: " << intSum << std::endl;
    std::cout << "Сума чисел з плаваючою точкою: " << doubleSum << std::endl;
    std::cout << "Сума рядків: " << strSum << std::endl;

    // 2. Виклик min
    int a = 5, b = 10;
    double c = 5, f = 10;
    int minValueByValue = min(a, b);
    double minValueByReference = min(c, f);
    std::cout << "Мінімальне значення (за значенням): " << minValueByValue << std::endl;
    std::cout << "Мінімальне значення (за посиланням): " << minValueByReference << std::endl;

    // 3. Виклик area
    std::cout << "Площа квадрата зі стороною 4: " << area(4) << std::endl;
    std::cout << "Площа прямокутника 5 x 3: " << area(5.0, 3.0) << std::endl;
    std::cout << "Площа кола з радіусом 2: " << area(2, true) << std::endl;
    std::cout << "Площа трикутника з основою 6 та висотою 4: " << area(6, 4,"triangle") << std::endl; 
    // 4. Виклик swap
    std::cout << "Перед swap: a = " << a << ", b = " << b << std::endl;
    swapByReference(a, b);
    std::cout << "Після swap (за посиланням): a = " << a << ", b = " << b << std::endl;

    // 5. Виклик факторіалу
    int number;
    long long fact;
    std::cout << "Введіть число для обчислення факторіалу: ";
    std::cin >> number;
    factorial(number, fact);
    std::cout << "Факторіал числа " << number << " дорівнює " << fact << std::endl;

    // 6. Виклик малювання квадрата
    int squareSize;
    std::cout << "Введіть розмір квадрата: ";
    std::cin >> squareSize;
    if (squareSize <= 0)
    {
        std::cout << "Розмір квадрата повинен бути позитивним числом." << std::endl;
    }
    else
    {
        drawSquare(squareSize);
    }
}

int main()
{
    // Виклик функції, що викликає всі інші функції
    runAllFunctions();
    return 0;
}
