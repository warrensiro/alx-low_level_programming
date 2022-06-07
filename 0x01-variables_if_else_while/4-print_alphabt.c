#include <stdio.h>
/**
 * main - entry point of a program
 *
 * description - to call program to print letters in lowercase save for q and e
 *
 * Return: Always 0 sucess
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <='z'; alphabet++)
	{
		if (alphabet i='q' && alphabet i='e')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
