/*
 Виневский Максим Викторович
 Лабораторная работа №2.
 Вариант №5
 Задание: Написать программу, которая вычисляет произведение отрицательных элементов
 массива. Массив и его длина вводятся пользователем.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <conio.h>

#define MAX_LENGTH 100
#define MIN_LENGTH 0
void main()
{
	setlocale(LC_ALL, "Rus");
	float k = 1;
	float array[MAX_LENGTH];
	int length;
	printf("Введите длину массива:");
	while (!scanf("%d", &length) || (length > MAX_LENGTH) || (length < MIN_LENGTH))
	{
		printf("Ошибка ввода!Длина массива не должна содержать буквы, превышать 100 и быть меньше 0!\nПовторите попытку ввода: ");
		while (getchar() != '\n');
	}
	int a = 0;
	for (int i = 0; i < length; i++)
	{
		printf("Введите элемент массива:", i);
		while (!scanf("%f", &array[i]))
		{
			printf("Ошибка ввода!!!\nПовторите попытку ввода: ", i);
			while (getchar() != '\n');
		}
		if (array[i] < 0)
		{
			k = k  * array[i];
			a = a + 1;
		}
	}
	if (a != 0)
	{
		printf("Произведение отрицательных элементов массива равно %f", k);
	}
	else printf("Ошибка!Массив не содержит отрицательных элементов");
	_getch();
}