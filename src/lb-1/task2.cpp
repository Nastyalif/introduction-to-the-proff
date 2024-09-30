#include <iostream>

using namespace std;

int main()
{
	
	int num;
	cout << "Enter an integer:";
	cin >> num;
	cout << "The remainder when dividing by 7:" << num % 7 << endl;
	//Checking whether it is divisible by no remainder
	int num1, num2;
	cout << "Enter two integers:\n";
	cout << "The first number:";
	cin >> num1;
	cout << "The second number:";
	cin >> num2;
	//Checking whether the first number is divisible by the second without a remainder
	if (num1 != 0) {
		if (num2 % num2 == 0) { cout << num1 << "is divided into" << num2 << "without remainder.\n"; }
	}
	else { cout << num1 << "is not devisible by" << num2 << "without remainder.\n"; }

else{"The second number cannot be zero (division by zero is impossible).\n";
}
//Parity check
if (num1 % 2 ==0) { cout << "The first number(" << num1 << ")is even.\n"; }
else {cout<<"The first number(" << num1 << ")is even.\n";
}
if (num2 % 2 = 0) {
	cout << "The second number (" << num2 << ") is even.\n";
}
else {
	cout << "The second number (" << num2 << ") is even.\n";
}

return 0;
}




