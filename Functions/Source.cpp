#include <iostream>
using namespace std;


int Plus(int a, int b, int c = 0) // �������� ������� (function declaration - ���������� �������)
{
	int sum = a + b + c;
	return sum;
}
int Minus(int v, int c) // ������ ���������� ��� ����� ������ �������
{
	return v - c;
}
int Multiply(int f, int g)
{
	return f * g;
}
int Divide(int p, int k)
{
	return p / k;
}

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Plus(a, b, 5); //����� ������� (Function call)
	cout << c << endl;
	cout << Minus(a, b) << endl; //��������� ����� � �������� ���������� �������
	cout << Plus(a, b ) << endl; //��������� ����� � �������� ���������� �������
	cout << Multiply(a, b) << endl; //��������� ����� � �������� ���������� �������
	cout << Divide(a, b) << endl; //��������� ����� � �������� ���������� �������
	///////////////////////////////////////////
	// ����� �������
	int choose;
	int chosen;
	cout << "�������� �������: 0 = �����" << endl;
	cout << "�������� �������: 1 = ����" << endl;
	cout << "�������� �������: 2 = ��������" << endl;
	cout << "�������� �������: 3 = ������" << endl;
	cout << "�� ������ ������� �������?"; cin >> choose;
	
	
}