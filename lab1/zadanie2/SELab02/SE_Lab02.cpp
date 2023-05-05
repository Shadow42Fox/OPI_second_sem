#include "stdafx.h"

using namespace std;

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);

int main(){

	setlocale(LC_ALL, "russian");

	int a, b;

	cout << "Введите первое число:";
	cin >> a;
	cout << "Введите второе число:";
	cin >> b;

	cout << "\nСумма этих двух чисел = " << sum(a, b) << endl;
	cout << "Разность этих двух чисел = " << sub(a, b) << endl;
	cout << "Произведение этих двух чисел = " << mul(a, b) << endl;

	system("pause");
	return 0;
}