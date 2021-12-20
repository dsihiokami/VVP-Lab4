﻿#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char* locale = setlocale(LC_ALL, "Rus");
	int const x = 32767;

	//1)Дано целое число N (> 0). 
	//Сформировать и вывести целочисленный массив размера N, 
	//содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . .

	int n1; //Число N
	int mas1[x]; //Массив
	int j1; //Номер элемента массива

	printf("1)\nЦелое число N (> 0) = ");
	scanf_s("%d", &n1); //Ввод N

	printf("Массив размера N, содержащий N первых положительных нечетных чисел (1, 3, 5, . . .)\n");
	for (j1 = 0; j1 < n1; j1++)
	{
		mas1[j1] = mas1[j1 - 1] + 2;
		mas1[0] = 1;
		printf("%d ", mas1[j1]); //Вывод результата	
	}
	printf("\n");


	//2)Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. 
	//Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A•D, A•D2 , A•D3 , . . .

	int n2; //Число N
	int a2; //Число A
	int d2; //Число D
	int d22; //Число D^2
	int mas2[x]; //Массив
	int j2; //Номер элемента массива


	printf("\n2)\nЦелое число N (> 1) = ");
	scanf_s("%d", &n2); //Ввод N
	printf("Первый член A = ");
	scanf_s("%d", &a2); //Ввод A
	printf("Знаменатель геометрической прогрессии D = ");
	scanf_s("%d", &d2); //Ввод D

	printf("Массив размера N, содержащий N первых членов данной прогрессии (A, A•D, A•D2 , A•D3 , . . .)\n");
	d22 = d2;
	mas2[0] = a2;
	for (j2 = 1; j2 < n2; j2++)
	{
		mas2[j2] = a2 * d22;
		d22 = d22 * d2;
	}
	for (j2 = 0; j2 < n2; j2++)
	{
		printf("%d ", mas2[j2]); //Вывод результата	
	}
	printf("\n");


	//3)Даны целые числа N (> 2), A и B. 
	//Сформировать и вывести целочисленный массив размера N, 
	//первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих

	int n3; //Число N
	int a3; //Число A
	int b3; //Число B
	int mas3[x]; //Массив
	int j3; //Номер элемента массива

	printf("\n3)\nЦелое число N (> 2) = ");
	scanf_s("%d", &n3); //Ввод N
	printf("Первый элемент A = ");
	scanf_s("%d", &a3); //Ввод A
	printf("Второй элемент B = ");
	scanf_s("%d", &b3); //Ввод В

	printf("Массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих\n");
	mas3[0] = a3;
	mas3[1] = b3;
	mas3[2] = a3 + b3;
	for (j3 = 3; j3 < n3; j3++)
	{
		mas3[j3] = mas3[j3 - 1] * 2;
	}
	for (j3 = 0; j3 < n3; j3++)
	{
		printf("%d ", mas3[j3]); //Вывод результата	
	}
	printf("\n");


	//4)Дан массив A размера N. 
	//Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,

	int n4; //Размер массива
	int a4[x]; //Массив A (ввод)
	int mas4[x]; //Массив A (вывод)
	int j4; //Номер элемента массива
	int i4; //Нечетный номер элемента массива (вывод)
	int k4; //Четный номер элемента массива (вывод)

	printf("\n4)\nРазмер массива N  = ");
	scanf_s("%d", &n4); //Ввод N

	printf("Массив A размера N\n");
	j4 = 0;
	while (j4 < n4)
	{
		scanf_s("%d", &a4[j4]); //Ввод массива А
		j4++;
	}
	printf("\n");
	printf("Его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,\n");
	i4 = n4 - 1; //Номер последнего элемента массива
	k4 = 0; //Номер первого элемента массива
	for (j4 = 0; j4 < n4; j4++)
	{
		if (j4 % 2 == 0)
		{
			mas4[j4] = a4[k4];
			k4++;
		}
		else
		{
			mas4[j4] = a4[i4];
			i4--;
		}

	}
	for (j4 = 0; j4 < n4; j4++)
	{
		printf("%d ", mas4[j4]); //Вывод результата	
	}
	printf("\n");


	//5)Дан массив A размера N.
	//Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, 
	//а затем — элементы с четными номерами в порядке убывания номеров

	int n5; //Размер массива
	int a5[x]; //Массив A (ввод)
	int mas5[x]; //Массив A (вывод)
	int j5; //Номер элемента массива
	int i5; // номер элемента массива
	int k5; // номер элемента массива

	printf("\n5)\nРазмер массива N  = ");
	scanf_s("%d", &n5); //Ввод N

	printf("Массив A размера N\n");
	j5 = 0;
	while (j5 < n5)
	{
		scanf_s("%d", &a5[j5]); //Ввод массива А
		j5++;
	}
	printf("Его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров\n");
	i5 = n5 - 1; //Номер последнего элемента массива
	k5 = 0; //Номер первого элемента массива
	printf("\n");
	for (j5 = 0; j5 < n5; j5++)
	{
		if (j5 % 2 == 1)
		{
			mas5[k5] = a5[j5];
			k5++;
		}
		else
		{
			mas5[i5] = a5[j5];
			i5--;
		}

	}
	for (j5 = 0; j5 < n5; j5++)
	{
		printf("%d ", mas5[j5]); //Вывод результата	
	}
}