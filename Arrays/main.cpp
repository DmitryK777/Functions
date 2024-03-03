//FunctionSeparations
#include "Functions.h"
#include "TemplatedFunctions.cpp"

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	double array[n];
	
	FillRand(arr, n);
	PrintRand(arr, n);

	FillRand(array, n);
	PrintRand(array, n);

	cout << "Сумма элементов массива целых чисел = " << Sum(arr, n) << endl;
	cout << "Сумма элементов массива чисел с плавающей запятой = " << Sum(array, n) << endl;
	cout << endl;

	cout << "Среднее значение элементов массива целых чисел = " << Avg(arr, n) << endl;
	cout << "Среднее значение элементов массива чисел с плавающей запятой = " << Avg(array, n) << endl;
	cout << endl;

	cout << "Минимальное значение в массиве целых чисел = " << MinValue(arr, n) << endl;
	cout << "Минимальное значение в массиве чисел с плавающей запятой = " << MinValue(array, n) << endl;
	cout << endl;

	cout << "Максимальное значение в массиве целых чисел = " << MaxValue(arr, n) << endl;
	cout << "Максимальное значение в массиве чисел с плавающей запятой = " << MaxValue(array, n) << endl;
	cout << endl;

	Sort(arr, n);
	Sort(array, n);
	cout << endl;

	ShiftLeft(arr, n);
	ShiftRight(arr, n);
	cout << endl;

	ShiftLeft(array, n);
	ShiftRight(array, n);
	cout << endl;

	
	int i_arr_2[ROWS][COLS];

}

