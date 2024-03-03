#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double array[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void PrintRand(int arr[], const int n);
void PrintRand(double array[], const int n);
void PrintRand(int array[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double array[], const int n);

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

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}
void FillRand(double array[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		//array[i] = ((double)minRand/100) + (double)(rand() % (maxRand - minRand))/100;
		array[i] = (minRand + rand()) % (maxRand - minRand);
		array[i] /= 100;
	}
}

void FillRand(int array[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = minRand + rand() % (maxRand - minRand);
		}
	}
}

void PrintRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void PrintRand(double array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}

void PrintRand(int array[ROWS][COLS], const int ROWS, const int COLS)
{

}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double array[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double array[], const int n)
{
	return Sum(array, n) / n;
}

int MinValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
double MinValue(double array[], const int n)
{
	double min = array[0];
	for (int i = 1; i < n; i++)
	{
		if (min > array[i]) min = array[i];
	}
	return min;
}

int MaxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
double MaxValue(double array[], const int n)
{
	double max = array[0];
	for (int i = 1; i < n; i++)
	{
		if (max < array[i]) max = array[i];
	}
	return max;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (arr[j] < arr[j-1])
			{
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
	cout << "Сортированный массив целых чисел:" << endl;
	PrintRand(arr, n);
	cout << endl;
}
void Sort(double array[], const int n)
{
	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (array[j] < array[j - 1])
			{
				double temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
		}
	}
	cout << "Сортированный массив чисел с плавающей запятой:" << endl;
	PrintRand(array, n);
	cout << endl << endl;
}

void ShiftLeft(int arr[], const int n)
{
	int num;
	cout << "Введите число элементов для циклического сдвига массива целых чисел влево: "; cin >> num;
	cout << endl << endl;

	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << arr[j] << "\t";
		}
		for (int j = 0; j < i; j++)
		{
			cout << arr[j] << "\t";
		}
		cout << endl;
	}

}
void ShiftLeft(double array[], const int n)
{
	int num;
	cout << "Введите число элементов для циклического сдвига массива чисел с плавающей запятой влево: "; cin >> num;
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << array[j] << "\t";
		}
		for (int j = 0; j < i; j++)
		{
			cout << array[j] << "\t";
		}
		cout << endl;
	}
}

void ShiftRight(int arr[], const int n)
{
	int num;
	cout << "Введите число элементов для циклического сдвига массива вправо: "; cin >> num;
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		for (int j = (n - i); j < n; j++)
		{
			cout << arr[j] << "\t";
		}
		for (int j = 0; j < (n - i); j++)
		{
			cout << arr[j] << "\t";
		}
		
		cout << endl;
	}
}
void ShiftRight(double array[], const int n)
{
	int num;
	cout << "Введите число элементов для циклического сдвига массива вправо: "; cin >> num;
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		for (int j = (n - i); j < n; j++)
		{
			cout << array[j] << "\t";
		}
		for (int j = 0; j < (n - i); j++)
		{
			cout << array[j] << "\t";
		}

		cout << endl;
	}
}
