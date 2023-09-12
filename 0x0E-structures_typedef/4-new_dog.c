#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * strlen - find the length of a string
 * @str: string to be measured
 * 
 * Return: string length
 */

int _strlen(char *str)
{
int len = 0;
while (*str++)
	len++;
return (len);
}

/**
 * strcpy - copies a strin to a new destination
 * @dest: destination file
 * @src: source file
 *
 * Return: new destination
 */

char *strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i]; i++)
	dest[i] = src[i];
dest[i] = '\0';
return (dest);
}


/**
 * new_dog - information of new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new struct dog
 */

