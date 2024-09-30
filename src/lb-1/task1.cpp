#include <iostream>

using namespace std;

int main()
{
	int sideA, sideB, area, perimeter;
	//Entering the length and width of the rectangle
	cout << "Length:";
	cin >> sideA;
	cout << "Width";
	cin >> sideB;
	//Calculation of perimeter and area
	int perimeter = 2 * (sideA + sideB);
	int area = sideA * sideB;
	//Derivation of area and perimeter
	cout << "Area of the rectangle:" << area << endl;
	cout << "Perimeter of the rectangle:" << perimeter << endl;
	//Round the area and perimeter to real numbers
	double area_d = static_cast<double>(area);
	double perimetr_d = static_cast<double>(perimeter);
	//Derivation of arithmetic operations
	cout << "Suma:" << area_d + perimeter_d << endl;
	cout << "Difference:" << area_d - perimeter_d << endl;
	cout << "Product:" << area_d * perimeter_d << endl;
	if (perimeter_d != 0) { cout << "Fraction:" << area_d / perimeter_d << endl; }
	else {
		cout << "Quotient: Cannot be divided by 0." << endl;
	}
	//Derivation of variable addresses
	cout << "length:" << &length << endl;
	cout << "width:" << &width << endl;
	cout << "area:" << &area << endl;
	cout << "perimeter:" << &perimeter << endl;
	cout << "area_d:" << &area_d << endl;
	cout << "perimeter_d:" & perimeter_d << endl;
	return 0;
}