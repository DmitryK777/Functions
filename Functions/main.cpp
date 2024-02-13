// Functions
#include <iostream>
using namespace std;

int Sum(int a, int b);
int  Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;

	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}

int  Diff(int a, int b) // Difference
{
	return a - b;
}

int Prod(int a, int b)
{
	return a * b;
}

double Quot(int a, int b)
{
	return (double)a / b;
}

int Power(int a, int b)
{
	int c = 1;
	for (int i = 0; i < b; i++)
	{
		if (b == 0) return 1;
		c *= a;
	}
	return c;
}



