#include "fuchs.h"
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
	cout << "������� ������ �������������� ��������: - + / * " << endl;
	deystvie(a,b);
	cout << endl;
	return 0;
}