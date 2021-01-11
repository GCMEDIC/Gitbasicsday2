#include <iostream>
using namespace std;


int Plus(int a, int b, int c = 0) // Прототип функции (function declaration - объявление функции)
{
	int sum = a + b + c;
	return sum;
}
int Minus(int v, int c) // Просто показываем что будет делать функция
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
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Plus(a, b, 5); //Вызов функции (Function call)
	cout << c << endl;
	cout << Minus(a, b) << endl; //Объявляем числа с которыми происходит функция
	cout << Plus(a, b ) << endl; //Объявляем числа с которыми происходит функция
	cout << Multiply(a, b) << endl; //Объявляем числа с которыми происходит функция
	cout << Divide(a, b) << endl; //Объявляем числа с которыми происходит функция
	///////////////////////////////////////////
	// Выбор функции
	int choose;
	int chosen;
	cout << "Значения функций: 0 = Минус" << endl;
	cout << "Значения функций: 1 = Плюс" << endl;
	cout << "Значения функций: 2 = Умножить" << endl;
	cout << "Значения функций: 3 = Делить" << endl;
	cout << "Вы хотите выбрать функцию?"; cin >> choose;
	
	
}