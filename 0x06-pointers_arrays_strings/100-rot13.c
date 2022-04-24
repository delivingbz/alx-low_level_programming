#include "main.h"
/**
* rot13 - encodes a string using rot13
* @s: input string.
* Return: the pointer to dest.
*/

char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{

		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
#include <stdio.h>

int main(void)
{
	  int n;
	    int a[5];
	      int *p;

	        a[2] = 1024;
		  p = &n;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
		   p[5] = 98;
/* ...so that this prints 98\n */
		     printf("a[2] = %d\n", a[2]);
		       return (0);
}
