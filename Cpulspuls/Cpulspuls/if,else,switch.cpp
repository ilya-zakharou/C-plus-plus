/*
Урок 12. Конструктор логического выбора if else.
if (утверждение или выражение) { дейстие1; }
else { ; }

#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	if (a > 5) { cout << "Ваше число больше 5"; }
	else if (a == 5) { cout << "Ваше число равно 5"; }
	else { cout << "Ваше число меньше 5"; }
}

ДЗ 2. Написать программу, проверяющую число, введенное с клавиатуры на четность.
Используется оператор % -Modulo Operation(Остаток после деления). 5 / 2 = 2, 5 т.е есть остаток, 5 после деления

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int x;
	cout << "Введите число для проверки: ";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << x << " это четное число.";
	}
	else
	{
		cout << x << " это нечетное число.";
	}
}

Урок 13. Оператор множественного выбора Switch.Почти используется как if else.
Например если условий много то подходит оператор Switch.
break - значит что блок после слова case не будет выполнять, если условие сделано.
default - блок на случай если все case не исполнились, то должно выполнить это условие;

#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ввели 1" << endl;
		break;
	case 2:
		cout << "Вы ввели 2" << endl;
		break;
	default:
		cout << "Я не знаю этого числа!";
		break;
	}
}
ДЗ 3.
Калькулятор.Пользователь вводит значение двух переменных.Описать меню в консоли для математических операций :
сложения, вычитания, умножения, деления.Через оператор switch реализовать математическую операцию соответствующую пункту меню.
#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	cout << "Введите матическую операцию числом: 1-сложение, 2-вычитание, 3-умножение, 4-деление" << endl;
	cin >> c;
	switch (c) {
	case 1: cout << "Решение сложения :" << a + b << endl; break;
	case 2: cout << "Решение вычитания :" << a - b << endl; break;
	case 3: cout << "Решение умножения :" << a * b << endl; break;
	case 4: cout << "Решение деления :" << (float)a / b << endl; break;
	default: cout << "Я не знаю такой цифры, введите соответствующую цифру" << endl; break;
	}
}


*/