#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (!str)
		return (NULL);
