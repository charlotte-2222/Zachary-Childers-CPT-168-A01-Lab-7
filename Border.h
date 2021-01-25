#pragma once
#include <iostream>
#include <conio.h>
#include <dos.h>
#include <iomanip>
#include <cmath>

class Border
{
	void main()
	{
		int i, j, k, l;
		system("cls");
		for (i = 1; i < 79; i++)
		{
			gotoxy(i, 2);
			cout << char(178);
			delay(10);



		}

		for (j = 2; j <= 22; j++)
		{
			gotoxy(1, j);
			cout << char(178);
			delay(10);
		}

		for (k = 1; k < 79; k++)
		{
			gotoxy(k, 23);
			cout << char(178);
			delay(10);

		}
		for (l = 22; l >= 2; l--)
		{
			gotoxy(79, l);
			cout << char(178);
			delay(10);
		}
		
		getch();
	}
};

