#pragma once

#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double array[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template<typename T>
void PrintRand(const T arr[], const int n);
//void PrintRand(double array[], const int n);
void PrintRand(int array[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(const T arr[], const int n);
//int Sum(int arr[], const int n);
//double Sum(double array[], const int n);

double Avg(int arr[], const int n);
double Avg(double array[], const int n);

int MinValue(int arr[], const int n);
double MinValue(double array[], const int n);

int MaxValue(int arr[], const int n);
double MaxValue(double array[], const int n);

void Sort(int arr[], const int n);
void Sort(double array[], const int n);

void ShiftLeft(int arr[], const int n);
void ShiftLeft(double array[], const int n);

void ShiftRight(int arr[], const int n);
void ShiftRight(double array[], const int n);