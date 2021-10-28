#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include <cmath> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float y, x, min, max, h;
	cout << "Введите min: ";
	cin >> min;
	cout << "Введите max: ";
	cin >> max;
	cout << "Введите h: ";
	cin >> h;
	x = min;
	cout << setw(10) << "F(x): " << setw(10) << "F(y): " << endl;
	while (x <= max + h / 2)
	{
		y = pow(x, 8) + 5 * pow(x, 2) - 5;
		cout << setw(10) << setprecision(5) << x << setw(10) << setprecision(5) << y << endl;
		x += h;
	}
}