#pragma once
#include <iostream>
using namespace std;

const int ROWS = 8;
const int COLS = 7;

void Fillrand(int arr[], const int n);
void Fillrand(double arr[], const int n);
void Fillrand(int arr[ROWS][COLS], const int m, const int n);


void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);