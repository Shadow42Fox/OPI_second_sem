#include "Header.h"

using namespace std;
using namespace Call;

int main() {

	setlocale(LC_ALL, "ru");

	int a = 1,
		b = 3,
		c = 5,
		d = 7;
	int *p = &a;

	int r1 = cdevl(a, b, c);
	int r2 = cstd(*p, b, c);
	int r3 = cfst(a, b, c, d);

	cout << "(_cdecl:) сумма = " << cdevl(a, b, c) << endl;
	cout << "(_stdcall) произведение = " << r2 << endl;
	cout << "(_fastcall) сумма = " << cfst(a, b, c, d) << endl;

	return 0;
}