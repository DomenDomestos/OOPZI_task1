﻿#include "head.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Ochered_na_osnove_massiva sm;
	cout << "!!!!" << endl;
	sm.Push(11);
	sm.Push(12);
	sm.Push(11);
	sm.Push(5555);
	sm.ret();
	cout << "Изымем элемент из очереди" << endl;
	sm.Pop();
	cout << "И пихнем еще один элемент в очередь" << endl;
	sm.Push(6666);
	sm.ret();

	cout << "Теперь отработаем с шаблоном очереди\n\n\n" << endl;
	Ochered_na_osnove_massiva_abs<double> shabl;
	cout << "!!!!" << endl;
	shabl.Push(0);
	shabl.Push(12.118210);
	shabl.Push(1.8);
	shabl.Push(0);
	shabl.ret();
	cout << "Изымем элемент из очереди" << endl;
	shabl.Pop();
	cout << "И пихнем еще один элемент в очередь" << endl;
	shabl.Push(9);
	shabl.ret();

	system("Pause");
	return 0;
}