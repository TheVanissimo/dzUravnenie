#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	float b, c, x = 0.0;
	cout << "Привет! Эта программа решает уравнение вида bx + c = 0" << endl;
	cout << "Задайте b: " << endl;
	cin >> b;
	cout << "Задайте c: " << endl;
	cin >> c;

	if (b == 0.0 && c == 0.0) {
		cout << "X - любое число";
	}
	else if (b == 0.0) {
		cout << "Решений нет" << endl;
	}
	else {
		x = -c / b;
		cout << "Ответ: " << x << endl;
	}
}


