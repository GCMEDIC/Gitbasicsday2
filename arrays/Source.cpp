#include"functions.h"

#define delimeter "\n---------------------------------------------------------------------------\n";

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	const int v = 9;
	const int m = 8;
	int i_arr[n] = {1, 1};
	//���������� ��������
	//Fillrand(i_arr, n);
	Print(i_arr, n);
	Sort(i_arr, n);
	Print(i_arr, n);
	cout << "����� ��������� ��������: " << Sum(i_arr, n) << endl;
	cout << "������� ��������������: " << Avg(i_arr, n);
	cout << delimeter;
	////////////////////////////
	double d_arr[v];
	Fillrand(d_arr, v);
	Print(d_arr, v);
	Sort(d_arr, v);
	Print(d_arr, v);
	cout << "����� ��������� ��������: " << Sum(d_arr, v) << endl;
	cout << "������� ��������������: " << Avg(i_arr, n);
	cout << delimeter;
	/////////////////////////////
	/*int crr[m];
	Fillrand(crr, m);
	Print(crr, m);
	Sort(crr, m);
	Print(crr, m);
	cout << delimeter;*/

	int i_arr2[ROWS][COLS];
	Fillrand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr2, ROWS, COLS) << endl;
	cout << "������� �������������� �������: " << Avg(i_arr2, ROWS, COLS) << endl;
	cout << "��������������� ������: " << endl;
	Sort(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
}


