/*
Долженко Андрей
Задание 6:
Написать функцию, которая принимает две даты (т.е. функция принимает шесть параметров) 
и вычисляет разность в днях между этими датами. 
Для решения этой задачи необходимо также написать функцию, которая определяет, является ли год високосным.
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int year1;
int month1;
int day1;
int year2;
int month2;
int day2;

void Enter_Date1();
void Enter_Date2();

bool Check_Year(int X);
bool Check_Month(int X);
//bool Check_Day(int D, int M, int Y);
//bool Check_Day_31(int X);
//bool Check_Day_30(int X);
//bool Check_Day_28(int X, int Y);



int main()
{
	setlocale(LC_ALL, "ru");

	

	cout << "\n\n\tПрограмма позволяет определить количество дней между двумя введенными датами";
	cout << "\n\n\tДаты необходимо вводить двумя цифрами. \n\tНапример: год - 06, месяц - 12, дата - 07";

	Enter_Date1();
	
	Enter_Date2();
		

	cout << "\n\n\tКоличество дней будет рассчитано\n\n\tот даты - " << day1 << "." << month1 << "." << year1 << "г.";
	cout << "\n\n\tдо даты - " << day2 << "." << month2 << "." << year2 << "г.";
	cout << "\n\n";
}

void Enter_Date1()
{
	do
	{
		cout << "\n\n\tВведите ПЕРВУЮ дату:\n год -"; cin >> year1;

	} while (!Check_Year(year1));

	do
	{
		cout << "\nмесяц - "; cin >> month1;

	} while (!Check_Month(month1));

	cout << "\nдень - "; cin >> day1;

	if ((month1 < 8 && month1 % 2 != 0) || (month1 >= 8 && month1 % 2 == 0))
	{
		
		while (day1 < 0 || day1>31)
		{
			cout << "\n\n\tВ этом месяце 31 день. Введите значение от 1 до 31 !!!";
			cout << "\nдень - "; cin >> day1;
		}			
	}
	if ((month1 > 8 && month1 % 2 != 0) || (month1 < 8 && month1 % 2 == 0 && month1 != 2))
	{
		while (day1 < 0 || day1>30)
		{
			cout << "\n\n\tВ этом месяце 30 день. Введите значение от 1 до 30 !!!";
			cout << "\nдень - "; cin >> day1;
		}			
	}

	if ((month1 == 2) && (year1 % 4 != 0))
	{
		while (day1 < 0 || day1 > 28)
		{
			cout << "\n\n\tВ этом месяце 28 день. Введите значение от 1 до 28 !!!";
			cout << "\nдень - "; cin >> day1;
		}			
	}

	if ((year1 % 4 == 0) && (month1 == 2))
	{
		while (day1 < 0 || day1 > 29)
		{
			cout << "\n\n\tВ этом месяце 29 день. Введите значение от 1 до 29 !!!";
			cout << "\nдень - "; cin >> day1;
		}		
	}
		
}

void Enter_Date2()
{
	do
	{
		cout << "\n\n\tВведите ВТОРУЮ дату:\n год -"; cin >> year2;

	} while (!Check_Year(year2));

	do
	{
		cout << "\nмесяц - "; cin >> month2;

	} while (!Check_Month(month2));


	cout << "\nдень - "; cin >> day2;

	if ((month2 < 8 && month2 % 2 != 0) || (month2 >= 8 && month2 % 2 == 0))
	{

		while (day2 < 0 || day2>31)
		{
			cout << "\n\n\tВ этом месяце 31 день. Введите значение от 1 до 31 !!!";
			cout << "\nдень - "; cin >> day2;
		}
	}
	if ((month2 > 8 && month2 % 2 != 0) || (month2 < 8 && month2 % 2 == 0 && month2 != 2))
	{
		while (day2 < 0 || day2>30)
		{
			cout << "\n\n\tВ этом месяце 30 день. Введите значение от 1 до 30 !!!";
			cout << "\nдень - "; cin >> day2;
		}
	}

	if ((month2 == 2) && (year2 % 4 != 0))
	{
		while (day2 < 0 || day2 > 28)
		{
			cout << "\n\n\tВ этом месяце 28 день. Введите значение от 1 до 28 !!!";
			cout << "\nдень - "; cin >> day2;
		}
	}

	if ((year2 % 4 == 0) && (month2 == 2))
	{
		while (day2 < 0 || day2 > 29)
		{
			cout << "\n\n\tВ этом месяце 29 день. Введите значение от 1 до 29 !!!";
			cout << "\nдень - "; cin >> day2;
		}
	}
		
}


bool Check_Year(int X)
{
	if (X < 0 || X>99)
	{
		cout << "\n\n\tВведите двузначное число!!!";
		return false;
		
	}
		return true;		
}

bool Check_Month(int X)
{
	if (X < 0 || X>12)
	{
		cout << "\n\n\tВ году 12 месяцев. Введите значение от 1 до 12 !!!";
		return false;

	}
	return true;
}
