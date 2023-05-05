#include <iostream>
#include <locale>
#include "D:\visual studio\2.Нарик\lab6\LP_Lab07L\Dictionary.h"
#pragma comment (lib, "C:\\Users\\ilyac\\OneDrive\\Рабочий стол\\Наркевич\\Готовые лабы\\Лаба 7\\LP_Lab07S\\Debug\\LP_Lab07L.lib")
#include <iostream>
#include <windows.h>

using namespace std;
using namespace Dictionary;

int main() {

	setlocale(LC_ALL, "rus");

	try {
		Instance d1 = Dictionary::Create("Преподаватели", 5);		// создание словаря
		Entry e1 = { 1,"Гладкий" }, e2 = { 2,"Веялкин" },			// элементы словаря
			e3 = { 3,"Урбанович" }, e4 = { 4,"Урбанович" },
			e5 = { 5, "Наркевич" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		Entry ex2 = GetEntry(d1, 4);
		DelEntry(d1, 2);
		Entry newentry1 = { 6, "Гурин" };
		UpdEntry(d1, 3, newentry1);
		Print(d1);								// распечатать элементы словаря
		Instance d2 = Dictionary::Create("Студенты", 5);
		Entry s1 = { 1,"Иванов" }, s2 = { 2,"Петров" }, s3 = { 3,"Сидоров" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Entry newentry3 = { 3,"Николаев" };
		UpdEntry(d2, 3, newentry3);
		Print(d2);
		Delete(d1);
		Delete(d2);
		cout << endl << endl;;

	}

	catch (char* e) {
		std::cout << e << std::endl;
	}

	system("pause");
	return 0;
}