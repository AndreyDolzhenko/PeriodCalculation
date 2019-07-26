/*
�������� ������
������� 6:
�������� �������, ������� ��������� ��� ���� (�.�. ������� ��������� ����� ����������) 
� ��������� �������� � ���� ����� ����� ������. 
��� ������� ���� ������ ���������� ����� �������� �������, ������� ����������, �������� �� ��� ����������.
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

	

	cout << "\n\n\t��������� ��������� ���������� ���������� ���� ����� ����� ���������� ������";
	cout << "\n\n\t���� ���������� ������� ����� �������. \n\t��������: ��� - 06, ����� - 12, ���� - 07";

	Enter_Date1();
	
	Enter_Date2();
		

	cout << "\n\n\t���������� ���� ����� ����������\n\n\t�� ���� - " << day1 << "." << month1 << "." << year1 << "�.";
	cout << "\n\n\t�� ���� - " << day2 << "." << month2 << "." << year2 << "�.";
	cout << "\n\n";
}

void Enter_Date1()
{
	do
	{
		cout << "\n\n\t������� ������ ����:\n ��� -"; cin >> year1;

	} while (!Check_Year(year1));

	do
	{
		cout << "\n����� - "; cin >> month1;

	} while (!Check_Month(month1));

	cout << "\n���� - "; cin >> day1;

	if ((month1 < 8 && month1 % 2 != 0) || (month1 >= 8 && month1 % 2 == 0))
	{
		
		while (day1 < 0 || day1>31)
		{
			cout << "\n\n\t� ���� ������ 31 ����. ������� �������� �� 1 �� 31 !!!";
			cout << "\n���� - "; cin >> day1;
		}			
	}
	if ((month1 > 8 && month1 % 2 != 0) || (month1 < 8 && month1 % 2 == 0 && month1 != 2))
	{
		while (day1 < 0 || day1>30)
		{
			cout << "\n\n\t� ���� ������ 30 ����. ������� �������� �� 1 �� 30 !!!";
			cout << "\n���� - "; cin >> day1;
		}			
	}

	if ((month1 == 2) && (year1 % 4 != 0))
	{
		while (day1 < 0 || day1 > 28)
		{
			cout << "\n\n\t� ���� ������ 28 ����. ������� �������� �� 1 �� 28 !!!";
			cout << "\n���� - "; cin >> day1;
		}			
	}

	if ((year1 % 4 == 0) && (month1 == 2))
	{
		while (day1 < 0 || day1 > 29)
		{
			cout << "\n\n\t� ���� ������ 29 ����. ������� �������� �� 1 �� 29 !!!";
			cout << "\n���� - "; cin >> day1;
		}		
	}
		
}

void Enter_Date2()
{
	do
	{
		cout << "\n\n\t������� ������ ����:\n ��� -"; cin >> year2;

	} while (!Check_Year(year2));

	do
	{
		cout << "\n����� - "; cin >> month2;

	} while (!Check_Month(month2));


	cout << "\n���� - "; cin >> day2;

	if ((month2 < 8 && month2 % 2 != 0) || (month2 >= 8 && month2 % 2 == 0))
	{

		while (day2 < 0 || day2>31)
		{
			cout << "\n\n\t� ���� ������ 31 ����. ������� �������� �� 1 �� 31 !!!";
			cout << "\n���� - "; cin >> day2;
		}
	}
	if ((month2 > 8 && month2 % 2 != 0) || (month2 < 8 && month2 % 2 == 0 && month2 != 2))
	{
		while (day2 < 0 || day2>30)
		{
			cout << "\n\n\t� ���� ������ 30 ����. ������� �������� �� 1 �� 30 !!!";
			cout << "\n���� - "; cin >> day2;
		}
	}

	if ((month2 == 2) && (year2 % 4 != 0))
	{
		while (day2 < 0 || day2 > 28)
		{
			cout << "\n\n\t� ���� ������ 28 ����. ������� �������� �� 1 �� 28 !!!";
			cout << "\n���� - "; cin >> day2;
		}
	}

	if ((year2 % 4 == 0) && (month2 == 2))
	{
		while (day2 < 0 || day2 > 29)
		{
			cout << "\n\n\t� ���� ������ 29 ����. ������� �������� �� 1 �� 29 !!!";
			cout << "\n���� - "; cin >> day2;
		}
	}
		
}


bool Check_Year(int X)
{
	if (X < 0 || X>99)
	{
		cout << "\n\n\t������� ���������� �����!!!";
		return false;
		
	}
		return true;		
}

bool Check_Month(int X)
{
	if (X < 0 || X>12)
	{
		cout << "\n\n\t� ���� 12 �������. ������� �������� �� 1 �� 12 !!!";
		return false;

	}
	return true;
}







/*bool Check_Day(int D, int M, int Y)
{
	

	if ((M < 8 && M%2 != 0) || (M >= 8 && M % 2 == 0))
	{
		Check_Day_31(D);
		return true;
		
	}

	else if((M > 8 && M%2 != 0) ||(M < 8 && M%2 == 0 && M != 2))
	{
		Check_Day_30(D);
		return true;
		
	}

	else if (M == 2)
	{
		Check_Day_28(D, Y);
		return true;
		
	}
	return false;
}*/


/*bool Check_Day_31(int D)
{
	if (D < 0 || D>31)
	{
		cout << "\n\n\t� ���� ������ 31 ����. ������� �������� �� 1 �� 31 !!!";
		return false;

	}
	return true;
}

bool Check_Day_30(int D)
{
	if (D < 0 || D>30)
	{
		cout << "\n\n\t� ���� ������ 30 ����. ������� �������� �� 1 �� 30 !!!";
		return false;

	}
	return true;
}

bool Check_Day_28(int D, int Y)
{
	if ((D < 0 || D > 28) && (Y%4 != 0))
	{
		cout << "\n\n\t� ���� ������ 28 ����. ������� �������� �� 1 �� 28 !!!";
		return false;

	}

	if ((D < 0 || D > 29) && (Y%4 == 0))
	{
		cout << "\n\n\t� ���� ������ 29 ����. ������� �������� �� 1 �� 29 !!!";
		return false;

	}
	return true;
}*/



/*

bool Check_Day(int D, int M, int Y)
{


	if ((M < 8 && M%2 != 0) || (M >= 8 && M % 2 == 0))
	{
		Check_Day_31(D);
		return true;

	}

	else if((M > 8 && M%2 != 0) ||(M < 8 && M%2 == 0 && M != 2))
	{
		Check_Day_30(D);
		return true;

	}

	else if (M == 2)
	{
		Check_Day_28(D, Y);
		return true;

	}
	//return false;
}

*/