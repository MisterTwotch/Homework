#include "fuchs.h"
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
	cout << "Выберте нужное математическое действие: - + / * " << endl;
	deystvie(a,b);
	cout << endl;
	return 0;
}