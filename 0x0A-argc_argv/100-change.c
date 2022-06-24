#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * make_change - check code for lowest number of coins
 * @m: the amount to decide change
 *
 * Return: the coins
 */
int make_change(int m)
{
	int coin, quater, tens, fives, twos, bob;

	coin = 0;
	quater = 0;
	tens = 0;
	fives = 0;
	twos = 0;
	bob = 0;

	while (m > 0)
	{
		if (m >=25)
		{
			m -= 25;
			quater += 1;
		}
		else if (m >= 10)
		{
			m -= 10;
			tens += 1;
		}
		else if (m >= 5)
		{
			m -= 5;
			fives += 1;
		}
		else if (m >= 2)
		{
			m -= 2;
			twos += 1;
		}
		else
		{
			m -= 1;
			bob += 1;
		}
	}
	coin = quater + tens + fives + twos + bob;
	return (coin);
}
/**
 * main - check code
 * @argc: number of command line arguments in argv
 * @argv: array being reffered to by argc
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coin;
	if (argc != 2)
	{
		printf("syntax\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		coin = make_change(atoi(argv[1]));
		printf("%d\n", coin);
	}
	return (0);
}
