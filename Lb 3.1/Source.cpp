// Lab_03_1.cpp
// < ��������� ������  >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 15

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double a; // �������� ��������� - ������������� ����� ������� ������
	double b; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	a = (pow(x, 3) + 2);
	// ����� 1: ������������ � ��������� ����
	if (x < 4)
		b = (5 * (pow(x, 8))) + (pow(x, 6)) - (pow(x, 2) + 3);
	if (4 <= x && x < 7)
		b = (atan(abs(x + 3 / 2)) + 7 * x);
	if (x >= 7)
		b = (log10(2 * x) + exp(5 * x + 5));
	y = a + b;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 4) 
		b = (5 * (pow(x, 8))) + (pow(x, 6)) - (pow(x, 2) + 3);
	else
		if (x >= 7)  
			b = (log10(2 * x) + exp(5 * x + 5));
		else 
			b = (atan(abs(x + 3 / 2)) + 7 * x); 
	y = a + b;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}