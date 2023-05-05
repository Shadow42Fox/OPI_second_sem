#include <iostream>

using namespace std;

int defaultparm(int a, int b, int c = 1, int d = 2) {

	return (a + b + c + d) / 7;
}

int main() {

	setlocale(0, "ru");

	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	int a4 = 4;

	int x1 = defaultparm(a1, a2);
	int x2 = defaultparm(a1, a2, a3, a4);


	cout << "x1 :" << x1;
	cout << "\nx2: " << x2;
	return 0;
}