#include <stdio.h>
/**
 *main - A program that prints alphabets in lowercase
 *Return: 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
