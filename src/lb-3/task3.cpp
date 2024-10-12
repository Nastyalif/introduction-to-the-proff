/*Написати перевантажені функції area для розрахунку площі:
квадрата, прямокутника, кола та трикутника (кожна функція має свої параметри).*/
#include <iostream>
#include <cmath>  // для використання константи M_PI
using namespace std;

// Перевантажена функція для обчислення площі квадрата
double area(double side) {
    return side * side;  // Площа квадрата: сторона^2
}

// Перевантажена функція для обчислення площі прямокутника
double area(double length, double width) {
    return length * width;  // Площа прямокутника: довжина * ширина
}

// Перевантажена функція для обчислення площі кола
double areaCircle(double radius) {
    return M_PI * radius * radius;  // Площа кола: π * радіус^2
}

// Перевантажена функція для обчислення площі трикутника
double areaTriangle(double base, double height) {
    return 0.5 * base * height;  // Площа трикутника: 0.5 * основа * висота
}

int main() {
    // Обчислення площі квадрата
    double side = 4.0;
    cout << "Площа квадрата зі стороною " << side << " = " << area(side) << endl;

    // Обчислення площі прямокутника
    double length = 5.0, width = 3.0;
    cout << "Площа прямокутника (довжина " << length << ", ширина " << width << ") = " << area(length, width) << endl;

    // Обчислення площі кола
    double radius = 2.5;
    cout << "Площа кола з радіусом " << radius << " = " << areaCircle(radius) << endl;

    // Обчислення площі трикутника
    double base = 6.0, height = 4.0;
    cout << "Площа трикутника (основа " << base << ", висота " << height << ") = " << areaTriangle(base, height) << endl;

    return 0;
}

