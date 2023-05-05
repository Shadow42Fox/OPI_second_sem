#include <iostream>

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date
{
	day dd;
	month mm;
	year yyyy;
};
struct schet {
	long number;
	char vklad;
	int balance;
	char dateOfOpen;
	bool message;
};

// >
bool operator>(Date date1, Date date2) {
	if (date1.yyyy > date2.yyyy) return true;
	if (date1.yyyy == date2.yyyy) {
		if (date1.mm > date2.mm) return true;
		if (date1.mm == date2.mm) {
			if (date1.dd > date2.dd) return true;
		}
	}
	else return false;
}

// <
bool operator<(Date date1, Date date2) {
	if (date1.yyyy < date2.yyyy) return true;
	if (date1.yyyy == date2.yyyy) {
		if (date1.mm < date2.mm) return true;
		if (date1.mm == date2.mm) {
			if (date1.dd < date2.dd) return true;
		}
	}
	else return false;
}

// ==
bool operator==(Date date1, Date date2) {
	if (date1.yyyy == date2.yyyy) {
		if (date1.mm == date2.mm)
			if (date1.dd == date2.dd)
				return true;
	}
	else return false;
}

bool operator==(schet user1, schet user4) {
	if (user1.number == user4.number) {
		if (user1.vklad == user4.vklad)
			if (user4.balance == user4.balance)
				return true;
	}
	else return false;
}

int main() {

	using namespace std;
	setlocale(LC_ALL, "rus");

	Date date1 = { 7,1,1980 };
	Date date2 = { 7,2,1993 };
	Date date3 = { 7,1,1980 };

	schet user1 = { 11111111,1,60,13042005,true };
	schet user2 = { 91168151,1,30,17042005,false };
	schet user3 = { 11111111,2,78,18032005,true };
	schet user4 = { 11111111,1,60,13042005,true };

	if (date1 < date2) cout << "истина" << endl;
	else cout << "ложь" << endl;

	if (date1 > date2) cout << "истина" << endl;
	else cout << "ложь" << endl;

	if (date1 == date2) cout << "истина" << endl;
	else cout << "ложь" << endl;

	if (date1 == date3) cout << "истина" << endl;
	else cout << "ложь" << endl;


	if (user1 == user4) cout << "\n\nистина" << endl;
	else cout << "\n\nложь" << endl;

	return 0;
}