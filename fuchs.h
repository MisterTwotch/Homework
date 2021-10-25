#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;
void deystvie(double a,double b) {
	char dey;
	cin >> dey;
	double otvet;
	switch (dey) {
	case '+':
		otvet = a + b;
		cout << "Ответ: " << otvet << endl;
		break;
	case '-':
		otvet = a - b;
		cout << "Ответ: " << otvet << endl;
		break;
		//Half Ready
	case '*':
		otvet = a * b;
		cout << "Ответ: " << otvet << endl;
		break; // Ready
	case '/':
		otvet = a / b;
		cout << "Ответ: " << otvet << endl;
		break;//ready
	default:
		cout << "Неверный ввод";
		otvet = 10;
		break;
	}
	if (otvet >= 0)
		cout << "Осталось " << otvet << " секунд до взрыва";
	if (otvet < 0) {
		otvet *= -1;
		cout << "Осталось " << otvet << "Секунд до взрыва";
	}
	for (int i = round(otvet);i > 0;i--) {
		cout << endl << i;
		Beep(5000, 200);
		Sleep(1000);
	}
	Beep(10000, 2000);
	Sleep(1000);
}