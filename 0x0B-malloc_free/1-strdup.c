#include "main.h"
/**
 * *_strdup - returns pointer to newly allocated space in mem
 * @str: string to be stored
 * Return: returns mem location
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

