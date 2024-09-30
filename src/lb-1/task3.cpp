#include <iostream>
using namespace std;

int main ()
{
	int num;
	//Entering a number
	cout << "Enter an integer:";
	cin >> num;
	
	//Fixed incrementation
	cout << "Number before postfix incrementation:" << num << endl;
	cout << "Postfix incrementation:" << num++ << endl;
	cout << "Number after postfix incrementation:" << num<<endl;
	
	//Prefix incrementation
	cout << "Prefix incrementation:" << ++num << endl;
	cout << "Number after prefix increment:" << num << endl;
	
	//Postfix decrement
	cout << "Number before postfix decrement:" << num << endl;
	cout << "Postfix decrement:"<< num-- << endl;
	cout << "Number after postfix decrement:" << num << endl;
	
	//Prefix decrement
	cout << "Prefix decrement:" << --num << endl;
	cout << "Number after prefix decrement:" << num << endl;

	return  0;

}

