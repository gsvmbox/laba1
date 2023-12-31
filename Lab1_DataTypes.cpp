// lab1_DataType.cpp: определяет точку входа для консольного приложения.
//
//#include "pch.h"
//#include "stdafx.h"
#include <iostream>
#include <bitset>
//Директива компилятору
//подключить библиотеку iostream,
//т.е. заменить строку на содержимое файла iostream
//файлы в "" ищются вначале в папке проекта,
// а затем в системных директориях
//файлы в <> ищются сразу в системных директориях

/*
Файлы в VS организованы в виде т.н. "решений"
Одно решение может включать исходники
нескольких программ
*/

/*
Проект включает файлы
исходного кода *.c/*.ccp
и заголовочные файлы *.h/*.hpp
*/

/*Программа на C++ состоит из функций
и объектов (классов, сструктур...)
Функция с именем main традиционно является
точкой входа в приложение.

Функция - фрагмент кода, имеющий собственный
идентификатор - имя функции.
<тип возвращаемого значение> <имя функции> (<аргументы>){
	<тело функции>
	<return> 
}
*/

using std::cout;
using std::cin;
//using namespase std;

/*
int main (){
	return 0;
}

void main (){
}
*/



int main()
{
	//int cout = 6;
	cout << "Hello world! " << std::endl;// << cout;
	/*
	esc - последовательности
	необходимы для форматированного вывода
	\n - перенос каретки на новую строку
	\t - табуляция
	\0 - символ конца символьной строки
	\" - отображение кавычек внутри строки
	\\ - отображение \ внутри строки
	*/

	cout << "Ivanov \t\t5\n" <<
		"Petrov \t\t3\n" <<
		"Sidorov \t4\n";

	/*типы данных
	bool  - булев {True, False}
	int - целые
	char - символьные
	double - вещественные

	unsigned  - беззнаковый
	short - сжимает допустимые значения
	long - расширяет допустимые значения
	*/

	bool flag = false;
	int num1 = 7, num2;
	char ch = 'A';
	double res = 1.3;
	num2 = 3;

	cout << "num1 = " << num1 << std::endl;
	cout << "num2 = " << num2 << std::endl;
	cout << "num1 + num2 = " << num1 + num2 << std::endl;
	cout << "num1 / num2 = " << num1 / num2 << std::endl;
	cout << "1.*num1 / num2 = " << 1.*num1 / num2 << std::endl;

	cout << "ch = " << ch << int(ch) << std::endl;
	cout << "ch + 3 = " << (ch + 3) << std::endl;
	cout << "ch + 3 = " << char(ch + 3) << std::endl;

	cin >> num1 >> num2;
	cout << "cin >> num1 >> num2;";
	cout << "\nnum1 = " << num1 <<
		"\tnum2 = " << num2 << std::endl;

	cin >> num1;
	cout << "num1 = " << num1 <<
		"\tnum2 = " << num2 << std::endl;
	
	/*
	/ - деление (при делении целых,
		выводит целую часть результата)
	% - остаток от деления целых чисел
	&& - логическое И
	|| - логическое ИЛИ

	& - побитовое И
		 3  = 0b000...00011
		 5  = 0b000...00101
		3&5 = 0b000...00001
	| - побитовое ИЛИ
	*/

	//вывод в двоичной СC
	cout << "bool flag = " << std::bitset<8>(flag) <<
		"\nint num1 = " << std::bitset<8*sizeof(num1)>(num1) <<
		"\nint num2 = " << std::bitset<32>(num2) <<
		"\nint num1&num2 = " << std::bitset<32>(num1&num2) <<
		"\nchar ch = " << std::bitset<8>(ch) <<
		"\ndouble res = " << std::bitset<64>(res) <<
		std::endl;

	num1 = 0b01111111111111111111111111111111;
	cout << "num1 = " << num1 << std::endl;

	num1 = 0xabcde;
	cout << "num1 = " << num1 << std::endl;

	short int shortnum = 0b0111111111111111;
	long int longnum = 12345;
	unsigned int unint = 0b11111111111111111111111111111111;
	cout << "shortnum = " << shortnum << std::endl;
	cout << "longnum = " << longnum << std::endl;
	cout << "unint = " << unint << std::endl;


	if (num1 < 0)
	{
		unint++; //unint++: unint = unint+1
				//++unint: unint = unint+1
			//a=2
			//b=a++;  b=a,a=a+1
			//a=3, b=2 

			//a=2
			//c=++a;  a=a+1, c=a
			//a=3, c=3

	}
	else if (num2 < 0)
	{
		int a = 2;
		int b = a++; // b=a,a=a+1
		//a=3, b=2 
		cout << "a = " << a << " b = " << b << std::endl;
	}
	else
	{
		int a = 2;
		int c = ++a; // a=a+1, c=a
		cout << "a = " << a << " c = " << c << std::endl;
	}
	cout << "unint = " << unint << std::endl;

	
	//system("pause");
	//getchar();
	return 0;
}

/*
Input 2 numbers: 1 3

1*х + 3 = 0
1*х = -3
х = -3/1
х = -3
Result: -3.

*/