
//2. Задается месяц и год двух дат. Пользователь вводит еще одну дату (месяц и год). Необходимо определить, пренадлежит ли эта дата задонному промежутку.

#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include<string>
#include<istream>
#include <Windows.h>
using namespace std;

struct event{int yaers, mounth;};

int main()
{
	SetConsoleCP(1251);// позволяет записывать русские символы в строки/массивы 
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	
	////2.
	struct event one, two, three;

	cout << "Пожалуйста, вводите события в хронологическом порядке!" << endl;
	cout << "Введите первое событие:  " << endl << "месяц: " << endl;
	cin >> one.mounth;
	cout << "Год: ";
	cin >> one.yaers;
	cout << "Введите второе событие:  " << endl << "месяц: " << endl;
	cin >> two.mounth;
	cout << "Год: ";
	cin >> two.yaers;
	cout << "Введите ваше событие для проверки на пренадлежность временного промежутка, заданного ранее:  " << endl << "месяц: " << endl;
	cin >> three.mounth;
	cout << "Год: ";
	cin >> three.yaers;
	if (one.yaers == two.yaers)
	{
		if (three.mounth > one.mounth&&three.mounth < two.mounth)
			cout << "Ваше событие пренадлежит данному временному промежутку" << endl;
		else
			cout << "Ваше событие не пренадлежит данному временному промежутку" << endl;
	}
	else
	{
		if (two.yaers - one.yaers > 1)
		{
			if (three.yaers>one.yaers&&three.yaers<two.yaers)
				cout << "Ваше событие пренадлежит данному временному промежутку" << endl;
			else
				cout << "Ваше событие не пренадлежит данному временному промежутку" << endl;
		}
		else
		{
			if (three.yaers == one.yaers)
			{
				if (three.mounth > one.mounth)
					cout << "Ваше событие пренадлежит данному временному промежутку" << endl;
				else
					cout << "Ваше событие не пренадлежит данному временному промежутку" << endl;
			}
			else
			{
				if (three.yaers == two.yaers)
					if (three.mounth<two.mounth)
						cout << "Ваше событие пренадлежит данному временному промежутку" << endl;
					else
						cout << "Ваше событие не пренадлежит данному временному промежутку" << endl;
				else
					cout << "Ваше событие не пренадлежит данному временному промежутку" << endl;
			}
		}

	}
	
	system("pause");

	return 0;
}


