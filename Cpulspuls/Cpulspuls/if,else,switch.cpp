/*
���� 12. ����������� ����������� ������ if else.
if (����������� ��� ���������) { �������1; }
else { ; }

#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "������� �����" << endl;
	cin >> a;
	if (a > 5) { cout << "���� ����� ������ 5"; }
	else if (a == 5) { cout << "���� ����� ����� 5"; }
	else { cout << "���� ����� ������ 5"; }
}

�� 2. �������� ���������, ����������� �����, ��������� � ���������� �� ��������.
������������ �������� % -Modulo Operation(������� ����� �������). 5 / 2 = 2, 5 �.� ���� �������, 5 ����� �������

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int x;
	cout << "������� ����� ��� ��������: ";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << x << " ��� ������ �����.";
	}
	else
	{
		cout << x << " ��� �������� �����.";
	}
}

���� 13. �������� �������������� ������ Switch.����� ������������ ��� if else.
�������� ���� ������� ����� �� �������� �������� Switch.
break - ������ ��� ���� ����� ����� case �� ����� ���������, ���� ������� �������.
default - ���� �� ������ ���� ��� case �� �����������, �� ������ ��������� ��� �������;

#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� ����� 1" << endl;
		break;
	case 2:
		cout << "�� ����� 2" << endl;
		break;
	default:
		cout << "� �� ���� ����� �����!";
		break;
	}
}
�� 3.
�����������.������������ ������ �������� ���� ����������.������� ���� � ������� ��� �������������� �������� :
��������, ���������, ���������, �������.����� �������� switch ����������� �������������� �������� ��������������� ������ ����.
#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "������� ������ �����" << endl;
	cin >> a;
	cout << "������� ������ �����" << endl;
	cin >> b;
	cout << "������� ���������� �������� ������: 1-��������, 2-���������, 3-���������, 4-�������" << endl;
	cin >> c;
	switch (c) {
	case 1: cout << "������� �������� :" << a + b << endl; break;
	case 2: cout << "������� ��������� :" << a - b << endl; break;
	case 3: cout << "������� ��������� :" << a * b << endl; break;
	case 4: cout << "������� ������� :" << (float)a / b << endl; break;
	default: cout << "� �� ���� ����� �����, ������� ��������������� �����" << endl; break;
	}
}


*/