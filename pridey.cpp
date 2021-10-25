#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	string name;
	cout << "Введите своё имя: ";
	cin >> name;
	cout << "Здравствуйте, " << name << endl;
	cout << "Введите два числа " << endl;
	double a, b;
	cout << "Первое число: ";
	cin >> a;
	cout << "Второе число: ";
	cin >> b;
	cout  <<"Выберте нужное математическое действие: - + / * " << endl;
	char dey;
	cin >> dey;
	double otvet;
	switch (dey) {
	case '+':
		otvet = a + b;
		cout << "Ответ: " <<otvet<<endl;
		break;
	case '-':
		otvet = a - b;
		cout << "Ответ: " << otvet << endl;
		break;
	case '*':
		otvet = a * b;
		cout << "Ответ: " << otvet << endl;
		break; // Ready
	case '/':
		cout << "Данная опция пока в разработке";
		break;
	default:
		cout << "Неверный ввод";
		break;
	}


	system("pause");
	return 0;
}