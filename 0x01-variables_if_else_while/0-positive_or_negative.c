#include <stdlib.h>
#include <time.h>
/* can contain more headers*/
#include <stdio.h>
/*
 * main - used to check the condition
 *
 * Description - to check and return result of the function
 *
 * Return: success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes in there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{ printf("%d is negative\n", n);
	}
	else
	{ printf("%d is zero\n", n);
	}
	return (0);
}
