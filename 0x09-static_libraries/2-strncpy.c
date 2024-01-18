#include "main.h"


/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @num: input value
 *
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int num)
{
	int j;


	j = 0;
	while (j < num && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);
}
