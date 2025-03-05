#include "main.h"


/**
 * create_array - function that creates arrays with an array of characters
 * @size: size of the array
 * @c: character
 * Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	array[index] = '\0';
	return (array);
}

