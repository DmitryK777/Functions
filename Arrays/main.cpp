
#include "Functions.h"
#include "TemplatedFunctions.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int i_SIZE = 5;
	int i_arr[i_SIZE];

	FillRand(i_arr, i_SIZE);
	Print(i_arr, i_SIZE);
	cout << "Сумма: " << Sum(i_arr, i_SIZE) << endl;
	cout << "------------------------------" << endl;

	const int d_SIZE = 8;
	double d_arr[d_SIZE];
	FillRand(d_arr, d_SIZE);
	Print(d_arr, d_SIZE);
	cout << "Сумма: " << Sum(d_arr, d_SIZE) << endl;
	cout << "------------------------------" << endl;

	int i_arr_2[ROWS][COLS];
	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}
