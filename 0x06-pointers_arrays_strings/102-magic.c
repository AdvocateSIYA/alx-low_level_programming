#include <stdio.h>

/**
 * main - prints a[2] = 98, followed by a new line
 * Return: void
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	n = 98;
	*(p + n) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
