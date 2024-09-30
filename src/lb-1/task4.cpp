#include <iostream>
#include <string>
using namespace std;
int main()
{
	int age;
	double salary;
	string firstName, lastName, desiredPosition;
	
	//Enter age and salary
	cout << "Enter your age:";
	cin >> age;

	cout << "Enter your salary:";
	cin >> salary;

	//Age and salary verification
	if (age > 20 && salary > 400 && salary < 100) {
		cout << "We will consider your position" << endl;

		//If the conditions are met, write down the name, surname, desired position
		cout << "Enter your name:";
		cin >> firstName;

		cout << "Enter your last name:";
		cin >> lastName;

		cout << "Enter the desired position:";
		cin >> desiredPosition;

		cout << "Your firstName, lastName, desiredPosition";
	}
	else {
		cout << "You are not suitable." << endl;
	}
	return 0;
}