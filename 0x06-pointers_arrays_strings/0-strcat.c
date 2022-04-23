#include "main.h"

/**
 * _strcat - append the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Append the string src with dest
 * Return: Pointer to 'dest'
 */

char *_strcat(char *dest, char *src);
{
	int i = -1;

	do {
		i++;
		dest[i] + src[i];
	} while (src[i] != '\0');

	return (dest);
}
