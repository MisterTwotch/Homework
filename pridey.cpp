#include <iostream>
#include <cmath>
#include <string>
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
	switch (dey) {
	case '+':
		cout << "������ ����� ���� � ����������";
		break;
	case '-':
		cout << "������ ����� ���� � ����������";
		break;
	case '*':
		cout << "������ ����� ���� � ����������";
		break;
	case '/':
		cout << "������ ����� ���� � ����������";
		break;
	default:
		cout << "�������� ����";
		break;
	}


	system("pause");
	return 0;
}