#include "stdafx.h"

using namespace std;

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);

int main(){

	setlocale(LC_ALL, "russian");

	int a, b;

	cout << "������� ������ �����:";
	cin >> a;
	cout << "������� ������ �����:";
	cin >> b;

	cout << "\n����� ���� ���� ����� = " << sum(a, b) << endl;
	cout << "�������� ���� ���� ����� = " << sub(a, b) << endl;
	cout << "������������ ���� ���� ����� = " << mul(a, b) << endl;

	system("pause");
	return 0;
}