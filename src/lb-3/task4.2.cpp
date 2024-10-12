/*Написати функцію swap, яка міняє місцями значення двох змінних. 
Реалізувати за значенням.*/
#include <iostream>
using namespace std;

void swap_B(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Всередині функції swap_B: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 5, y = 10;
    cout << "До виклику swap_B: x = " << x << ", y = " << y << endl;
    swap_B(x, y);
    cout << "Після виклику swap_B: x = " << x << ", y = " << y << endl;
    return 0;
}
