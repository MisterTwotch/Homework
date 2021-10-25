#include <iostream>
#include <cmath>
#include <string>
#include "windows.h"
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
		otvet = a * b;
		cout << "Ответ: " << otvet << endl;
		break;//ready
	default:
		cout << "Неверный ввод";
		otvet = 10;
		break;
	}
	if (otvet>=0)
	cout << "Осталось "<<otvet  << " секунд до взрыва";
	if (otvet < 0) {
		otvet *= -1;
		cout << "Осталось " << otvet << "Секунд до взрыва";
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