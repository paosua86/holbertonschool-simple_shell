#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to be processed
 * Return: lenght of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}


/**
 * _strcpy - Copies a string into another
 * @src: The pointer of the source string.
 * @dest: The pointer of the destination string.
* Return: Nothing.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);

}

/**
 * _strcat - Concatenates a string into another.
 * @src: The pointer of the source string.
 * @dest: The pointer of the destination string.
* Return: The concatenated destionation string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}


/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
* Return: The difference of the first two differente chars.
 */

int _strcmp(char *s1, char *s2)
{
	int len = _strlen(s1);
	int i = 0;

	while (i <= len)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
