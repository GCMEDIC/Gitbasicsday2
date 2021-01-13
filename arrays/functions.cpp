#include"functions.h"


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int m, const int n)
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
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
#define DEBUG
void Sort(int arr[ROWS][COLS], const int m, const int n)
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

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
int Sum(int arr[ROWS][COLS], const int m, const int n)
{
	int Sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
double Avg(int arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	double Avg = 0;
	Avg = Sum / n;
	return Avg;
	// return (double) Sum(arr, n) / n
}
double Avg(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	double Avg = 0;
	Avg = Sum / n;
	return Avg;
	// return (double) Sum(arr, n) / n
}
double Avg(int arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr, m, n) / (m * n);
}
