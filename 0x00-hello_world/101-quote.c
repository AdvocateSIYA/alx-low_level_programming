#include<stdio.h>
#include<unistd.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
