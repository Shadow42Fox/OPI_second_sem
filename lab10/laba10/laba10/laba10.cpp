#include <iostream>

using namespace std;

int main() {

	int a = 1;
	int b = 1;

	auto myLambda = [](int x) {
		if (x > 0) return true;
		else return false;
	};

	if (myLambda(a)) cout << "\nA True";
	else cout << "\nA False";

	if (myLambda(b)) cout << "\nB True\n\n";
	else cout << "\nB False\n\n";

	system("pause");
	return 0;
}