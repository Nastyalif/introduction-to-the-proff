
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	int score;
	//Entering the student's assessment
	cout << "Enter your score (from 0 to 100):";
	cin >> score;
	//Checking and outputting a rating on a scale
	if (score >= 90 && score <= 100) {
		cout << "³�����" << endl;
	}
	else if (score >= 75 && score < 90) {
		cout << "�����" << endl;
	}
	else if (score >= 0 && score < 60) {
		cout << "���������" << endl;
	}
	else if (score >= 0 && score < 60) {
		cout << "�����������" << endl;
	}
	else {
		cout << "������ �������� ������!" << endl;
	}

	return 0;
}