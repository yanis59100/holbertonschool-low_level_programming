#include <stdio.h>
#include <stdlib.h>
/**
  *_strdup - Entry point
  *@str: string we need to duplicated
  *Return: a pointer to the duplicated string or NULL
  */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	for (i = 0; str[i]; i++)
	{
		size++;
	}
	dup = malloc(++size);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
	free(dup);
}
