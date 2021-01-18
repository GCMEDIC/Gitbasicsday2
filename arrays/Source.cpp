#include <iostream>
using namespace std; 

const int ROWS = 8;
const int COLS = 7;

void Fillrand(int arr[], const int n);
void Fillrand(double arr[], const int n);
void Fillrand(int arr[ROWS][COLS], const int m, const int n);

template <typename T>
void Print(T arr[], const int n);

template <typename T>
void Print(T arr[ROWS][COLS], const int m, const int n);

template <typename T>
void Sort(T arr[], const int n);

template <typename T>
void Sort(T arr[ROWS][COLS], const int m, const int n);

template <typename T>
int Sum(T arr[], const int n);

template <typename T>
int Sum(T arr[ROWS][COLS], const int m, const int n);

template <typename T>
double Avg(T arr[], const int n);

template <typename T>
double Avg(T arr[ROWS][COLS], const int m, const int n);



#define delimeter "\n---------------------------------------------------------------------------\n";

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	const int v = 9;
	const int m = 8;
	int i_arr[n] = {1, 1};
	//заполнение рандомом
	//Fillrand(i_arr, n);
	Print(i_arr, n);
	Sort(i_arr, n);
	Print(i_arr, n);
	cout << "Сумма элеметнов массивов: " << Sum(i_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(i_arr, n);
	cout << delimeter;
	////////////////////////////
	double d_arr[v];
	Fillrand(d_arr, v);
	Print(d_arr, v);
	Sort(d_arr, v);
	Print(d_arr, v);
	cout << "Сумма элеметнов массивов: " << Sum(d_arr, v) << endl;
	cout << "Среднее арифметическое: " << Avg(i_arr, n);
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
	cout << "сумма элементов массива: " << Sum(i_arr2, ROWS, COLS) << endl;
	cout << "среднее арифметическое массива: " << Avg(i_arr2, ROWS, COLS) << endl;
	cout << "Отсортированный массив: " << endl;
	Sort(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
}


void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Fillrand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void Fillrand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Print(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template <typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				/*arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];*/
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

#define DEBUG
template <typename T>
void Sort(T arr[ROWS][COLS], const int m, const int n)
{
#ifdef DEBUG
	int iterations = 0;
	int exchanges = 0;
#endif // DEBUG
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) //выбирают строки
		{
			for (int k = i; k < m; k++)
			{
				/*int l;
				if (k == i)l = j + 1;
				else l = 0;*/
				for (int l = k == i ? j + 1 : 0; l < n; l++) //перебирают элементы
				{
#ifdef DEBUG
					iterations++;
#endif // DEBUG
					if (/*Перебираемый элемент*/arr[k][l] < arr[i][j]/*Выбранный элемент*/)
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
#ifdef DEBUG
						exchanges++;
#endif // DEBUG
					}
				}
			}
		}
	}
#ifdef DEBUG
	cout << "Массив отсортирован за " << iterations << " итераций\n";
	cout << "При этом, было выполнено " << exchanges << " обменов элементов\n";
#endif // DEBUG
}

template <typename T>
int Sum(T arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

template <typename T>
int Sum(T arr[ROWS][COLS], const int m, const int n)
{
	T Sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}

template <typename T>
double Avg(T arr[], const int n)
{
	/*double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	double Avg = 0;
	Avg = Sum / n;
	return Avg;*/
	return (double)Sum(arr, n) / n;
}

template <typename T>
double Avg(T arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr, m, n) / (m * n);
}
