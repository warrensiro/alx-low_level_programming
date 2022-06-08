#include "main.h"
/**
 * times_table - call in the table form
 *
 * descrption - call out the products
 *
 * Return: always 0
 */
void times_table(void)
{
	int num1, num2, prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2+++)
		{
			prod = num1 * num2;

			if (prod == 0)
			{
				_putchar((prod % 10) + '0');
			}
			else if (prod >= 1 && prod <= 9)
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (num2 I= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
