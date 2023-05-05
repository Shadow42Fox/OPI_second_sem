// Dictionary.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.

#include "Dictionary.h"
#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace Dictionary;
using namespace std;

Instance Dictionary::Create(const char* name, int size)
{
	Instance NewDict;
	strlen(name) > ENTRYNAMEMAXSIZE ? throw THROW01 : strcpy_s(NewDict.name, name);
	NewDict.maxsize < size ? throw THROW02 : NewDict.size = size;
	NewDict.dictionary = new Entry[size];
	return NewDict;
}
//Instance& ints, Entry ed  ������������ ��������������� 

void Dictionary::AddEntry(Instance& inst, Entry ed) {

	int cnt = inst.cnt;
	cnt >= inst.size ? throw  THROW03 : inst.dictionary[cnt] = ed;			//��������� ��� �� ������������ �� ���������� ��������� �������, ���� ��� ��������� �������
	for (int i = 0; i < cnt; i++) {												 // ������������ ��������������� 
		if (inst.dictionary[cnt - 1].id == ed.id) //���������� ���� ��� �������� ��������� � ������� ��� ���������� ������� ���������� ������
			throw THROW04;
	}
	inst.cnt++; //����������� ���������� ���������� ������� 
}
void  Dictionary::DelEntry(Instance& inst, int id) {
	int tr = 0;
	for (int i = 1; i <= inst.cnt; i++) {
		if (inst.dictionary[i].id == id) {
			tr = 1;
			for (int j = i; j < inst.cnt; j++) //������������ ��� �������� �� ������� +1 �� ������� ���� �������
			{
				inst.dictionary[j] = inst.dictionary[j + 1];
			}
			inst.cnt--;
			break;
		}
	}
	if (tr == 0) //���� ��� �������� � ����� ����������������
		throw THROW05;
}

Entry Dictionary::GetEntry(Instance& inst, int id) { // ����� �� id � ����� ����� ���������� ��������
	int tr = 0;
	for (int i = 0; i < inst.cnt; i++)
	{
		if (inst.dictionary[i].id == id)
		{
			cout <<"\n\n � ����� ������,��� ��!!!  " << inst.dictionary[i].name << "\n\n";
			return inst.dictionary[i];
		}
	}
	if (tr == 0) //���� ��� �������� � ����� ����������������
		throw THROW05;
}

void Dictionary::UpdEntry(Instance& inst, int id, Entry new_ed) //�������� ������� ������� 
{
	int a = 0;
	for (int i = 0; i < inst.cnt; i++)
	{
		if (inst.dictionary[i].id == id)  //����� ������� ������� ���� �������� 
		{
			for (int j = i + 1; j < inst.cnt; j++) //�������� �� ������������ id
			{
				if (new_ed.id == inst.dictionary[j].id) throw THROW08;
			}
			a = 1;

			inst.dictionary[i].id = new_ed.id;       //������ �������
			strcpy_s(inst.dictionary[i].name, new_ed.name);
			break;
		}
		else if (new_ed.id == inst.dictionary[i].id) throw THROW08;
	}
	if (a == 0) // �� ������ �������
	{
		throw THROW07;
	}
}

void Dictionary::Print(Instance d)
{
	cout << endl << endl;
	cout << "-------------" << d.name << "--------------\n";
	for (int i = 0; i < d.cnt; i++)
	{	
		cout << d.dictionary[i].id << "\t" << d.dictionary[i].name << endl;	
	}
	cout << "-------------����� �������--------------\n";
}
void Dictionary::Delete(Instance& inst)
{
	delete[] inst.dictionary;
}