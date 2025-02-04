﻿#include <stdio.h>
#include <math.h>
#include <locale.h>

double PowerA3(double a, double b)
{
	b = a * a * a;
	printf("A^3 = %lf\n", b);
	return b;
}

int Sign(double x)
{
	if (x < 0)
		x = -1;
	if (x == 0)
		x = 0;
	if (x > 0)
		x = 1;
	return x;

}

double RingS(double r1, double r2)
{
	r1 = (r1 * r1 - r2 * r2) * 3.14;
	printf("Плошадь кольца = %lf\n", r1);
	return r1;
}

int Quarter(double x, double y)
{
	if (x == 0 || y == 0)
		printf("Неверные данные\n");
	if (x > 0 && y > 0)
		printf("Точка находится в 1-ой четверти\n");
	if (x < 0 && y > 0)
		printf("Точка находится во 2-ой четверти\n");
	if (x < 0 && y < 0)
		printf("Точка находится в 3-ей четверти\n");
	if (x > 0 && y < 0)
		printf("Точка находится в 4-ой четверти\n");
	return 0;
}

double Fact2(int n)
{
	int j;
	int i;
	int f;
	if (n % 2 == 1)
		f = 1;
	if (n % 2 == 0)
		f = 2;
	i = f + 2;
	for (j = 2; j <= n; j++)
	{
		f = f * i;
		i = i + 2;
	}

	n = f;
	printf("N!! = %d\n", n);
	return n;
}

int main()
{
	char* locale = setlocale(LC_ALL, "Rus");

	//1)Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B 
	//(A — входной, B — выходной параметр; оба параметра являются вещественными). 
	//С помощью этой функции найти третьи степени пяти данных чисел.

	double a1; //Число A
	double b1 = 0; //Число B
	int j1;

	printf("1) PowerA3(A, B)\n");
	for (j1 = 1; j1 <= 5; j1++)
	{
		printf("A = ");
		scanf_s("%lf", &a1); //Ввод A
		PowerA3(a1, b1);
	}


	//2)Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
	//−1, если X < 0;
	// 0, если X = 0; 
	// 1, если X > 0.
	//С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.

	double a2; //Число A
	double b2; //Число B
	int c2;

	printf("\n\n2) Sign(X)\n");
	printf("A = ");
	scanf_s("%lf", &a2); //Ввод A
	printf("B = ");
	scanf_s("%lf", &b2); //Ввод B
	c2 = Sign(a2) + Sign(b2);
	printf("Sign(A) + Sign(B) = %d", c2);


	//3)Описать функцию RingS(R1, R2) вещественного типа, 
	//находящую площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). 
	//С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.

	double r31; //R1
	double r32; //R2
	int j3;

	printf("\n\n3) RingS(R1, R2)\nR1 > R2\n");
	for (j3 = 1; j3 <= 3; j3++)
	{
		printf("R1 = ");
		scanf_s("%lf", &r31); //Ввод R1
		printf("R2 = ");
		scanf_s("%lf", &r32); //Ввод R2
		RingS(r31, r32);

	}


	//4)Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, 
	//в которой находится точка с ненулевыми вещественными координатами (x, y). 
	//С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами

	double x4; //Число A
	double y4; //Число B
	int j4;

	printf("\n\n4) Quarter(x, y)\n");
	for (j4 = 1; j4 <= 3; j4++)
	{
		printf("X = ");
		scanf_s("%lf", &x4); //Ввод R1
		printf("Y = ");
		scanf_s("%lf", &y4); //Ввод R2
		Quarter(x4, y4);
	}


	//5)Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: 
	//N!!= 1•3•5•. ..•N, если N — нечетное;
	//N!!= 2•4•6•. ..•N, если N — четное
	//(N > 0 — параметр целого типа; вещественное возвращаемое значение используется для того, чтобы избежать целочисленного переполнения при больших значениях N).

	int n5; //N

	printf("\n\n5) Fact2(N)\nN > 0\n");
	printf("N = ");
	scanf_s("%d", &n5); //Ввод R1
	Fact2(n5);

}