/*
���� 3.
������ � ������� � �������� Escape Symbol
#include<iostream> //����������� ���������� ������. ��������� �������������.
#include<math.h> //����������� ���������� �������������� ��������
using namespacestd; // ������������� ������������ ���
 void main()  // void ��� ��������� ������� ������ �� ����������. main ��� �������. 
{setlocale(LC_ALL, "Rus"); //�������, ��� ������ �� �������� � �������
	std::cout << "� ���� �������� ������,\n� ���� ��� �����, \n����� � ����� ��������, \n������� ����. \n \n� ���� �������� ������, \n� ���� ��� �����, \n����� � ����� ��������, \n������� ����; \n \n������ �� ���� ������� \: \n ����, ������, ��� - ��� \!�\n����� ������� �������� \:\n �������, �� �������� \!�\n";
	return 0;} 

 
 ���� 4 � 5.
 ���� ������ � ����������.
 ����� � ��������� ������ float (������������ ����� ��������� ��������), double(������������ ����� ������� ��������).������ ����� 4,8
 ����� ����� int(������� �����), short(�������� �����), long(������� �����). ������ ����� 4,2,4.
 ���������� ��� char (�������). ������ ����� 1.
 ���������� ���� bool (true/false). ������ ����� 1.
 � ����������� ������ ��� ���: ���_������ ���_����������
 
void main()
{	setlocale(LC_ALL, "Rus");
	long myfirstvariable=1.1123123123, mysecondvariable=1234567891123456789, mythirdvariable=4;
	bool a = false, b = true;
	cout << myfirstvariable << " " << mysecondvariable <<" "<< mythirdvariable << endl;
	cout << a << " " << b << endl;};
 
 
���� 6.
��������� - ���� ��� � variable, ������ ��� �������� ������, ������� �������� ����� �� �����

void main()
{	setlocale(LC_ALL, "Rus");
	const int COUNTDAYSINWEEK = 7;
	const char TAB= '\t';
	int a = 1;
	cout <<COUNTDAYSINWEEK<<'\t' <<COUNTDAYSINWEEK<<TAB<< a << endl;};

���� 7.
���� ������. Cin.
 
void main()
{	setlocale(LC_ALL, "Rus");
	char var1,var2;
	cout << "������� ������ ������ � ������: ";
	cin >> var1 >> var2;
	cout <<"������ �� " <<var1<<var2;};

����8.
�������������� �������� � ���������. 
���� ��� ���� ���������: �������(����� -), ��������(��������+, ���������-,�������!=, ������>, �������������� <=), ���������.
��: ������� ��� ����� � �������� �� ����� �������� �����, ������������ � ������� �������������� ���� �����.

using namespace std;
void main()
{setlocale(LC_ALL, "Rus");
	int a,b,c;
	cout << "������� ��� �����: "<<endl;
	cin >>a>>b>>c;
	cout << "����� �����: " << a + b + c << endl << "������������ �����: " << a-b-c << endl << "������� �������������� �����: " << (double)(a+b+c)/3;};

���� 9
��������� (���������� �� �������) � ���������(���������� �� �������). ��� ������� ++ ��� ��������. �.� ++b ��� ����������� ���������. --b  ����������� ���������.
using namespace std;
void main() {
	int a = 1, b;
	b = ++a * a++;
	cout <<b<<endl<<a<<endl;};

���� 10
����������� �������������� �����.
#include <iostream>
using namespace std;
void main()
{int a = 0;
cout << a << endl;
a = a + 20;
cout << a << endl;
a += 20;
cout << a << endl;};

���� 11. ���������� ��������.
1. ��������� ���������: <,>,<=,=>;
2. ��������� ���������: == �����, != �� �����
3. ��������� ����������� � ������������� �������� && - �, || - ���, != - ��;

#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	int a = 6, b = 6;
	cout << (a < b) && (3 < 4) || (3 == 4);
}

���� 12. ����������� ����������� ������ if else.
if (����������� ��� ���������) {�������1;}else{;}

#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "������� �����" << endl;
	cin >> a;
	if (a > 5) {cout << "���� ����� ������ 5";}
	else if (a == 5) {  cout << "���� ����� ����� 5";  }
	else {cout << "���� ����� ������ 5"; }
}

�� 2. �������� ���������, ����������� �����, ��������� � ���������� �� ��������.
������������ �������� % - Modulo Operation(������� ����� �������). 5/2=2,5 �.� ���� ������� ,5 ����� �������

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
	{cout << x << " ��� ������ �����.";}
	else
	{cout << x << " ��� �������� �����.";}
}

���� 13. �������� �������������� ������ Switch. ����� ������������ ��� if else. 
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
�����������.������������ ������ �������� ���� ����������. ������� ���� � ������� ��� �������������� ��������:
��������, ���������, ���������, �������. ����� �������� switch ����������� �������������� �������� ��������������� ������ ����.
#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale (LC_ALL, "rus");
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
	case 4: cout << "������� ������� :" << (float)a/b << endl; break;
	default: cout << "� �� ���� ����� �����, ������� ��������������� �����" << endl; break;
	}
}

���� 14. ����� while(�����������){�������� ��� ����������}
#include <iostream>
#include <math.h>
using namespace std;
void main() 
{
	setlocale (LC_ALL, "ru");
	int a = 0;
	while (a<=10)
	{
		cout << "���������� a = " <<a<< endl;
		a++;
	}
}

���� 15. ���� do while()


#include <iostream>
#include <math.h>
using namespace  std;
void main() {
	setlocale(LC_ALL, "rus");
	int a = 19;
	do {
		cout << "���������� a = " << a << endl;
		a++;
	} while (a < 20);
}

�� 4.
1. ����������� ���������, ������� ������� �� ����� ����� �� ��������. ����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, ��� �������������� - ��������� ������������.
����� � �������� ��
2. �������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������.
��� ����� ������ �� ����� � �������� ��.
*/