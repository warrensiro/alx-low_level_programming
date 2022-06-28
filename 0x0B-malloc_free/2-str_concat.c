#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string to be concatenated
 *
 * Return: the concatenated two strings
 */
char *str_concat(char *s1, char *s2)
{
	int m = 0, n = 0, p = 0, q = 0;
       char *s;

       if (s1 == NULL)
	       s1 = "";

       if (s2 == NULL)
	       s2 = "";

       while (s1[m])
	       m++;

       while (s2[n])
	       n++;

       q = m + n;
       s = malloc((sizeof(char) * q) + 1);

       if (s == NULL)
       {
	       return (NULL);
       }
       n = 0;

       while (p < q)
       {
	       if (p <= m)
		       s[p] = s1[p];

	       if (p >= m)
	       {
		       s[p] = s2[n];
		       n++;
	       }
	       p++;
       }

       s[p] = '\0';
       return (s);
}
