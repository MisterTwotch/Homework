#include <iostream>
#include <cmath>
#include <string>
#include "windows.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	string name;
	cout << "������� ��� ���: ";
	cin >> name;
	cout << "������������, " << name << endl;
	cout << "������� ��� ����� " << endl;
	double a, b;
	cout << "������ �����: ";
	cin >> a;
	cout << "������ �����: ";
	cin >> b;
	cout  <<"������� ������ �������������� ��������: - + / * " << endl;
	char dey;
	cin >> dey;
	double otvet;
	switch (dey) {
	case '+':
		otvet = a + b;
		cout << "�����: " <<otvet<<endl;
		break;
	case '-':
		otvet = a - b;
		cout << "�����: " << otvet << endl;
		break;
	case '*':
		otvet = a * b;
		cout << "�����: " << otvet << endl;
		break; // Ready
	case '/':
		otvet = a * b;
		cout << "�����: " << otvet << endl;
		break;//ready
	default:
		cout << "�������� ����";
		otvet = 10;
		break;
	}
	if (otvet>=0)
	cout << "�������� "<<otvet  << " ������ �� ������";
	if (otvet < 0) {
		otvet *= -1;
		cout << "�������� " << otvet << "������ �� ������";
	}
	for (int i = round(otvet);i > 0;i--) {
		cout <<endl<< i;
		Beep(5000, 200);
		Sleep(1000);
	}
	Beep(10000, 2000);
	Sleep(1000);
	cout << endl;
	return 0;
}