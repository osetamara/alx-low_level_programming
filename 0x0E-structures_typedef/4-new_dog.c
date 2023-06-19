#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int i;


	i = 0;


	/*Iterate until end of string ('\0') is reached*/
	while (s[i] != '\0')
	{
		i++;/*Increment the counter*/
	}

	return (i);/* Return the length of the string*/
}

/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len, i;


	len = 0;


	/*Iterate until end of source string ('\0') is reached*/
	while (src[len] != '\0')
	{
		len++;
	}
	/*Copy each character from src to dest*/
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';/* Add terminating null byte at end of dest*/


	return (dest);
}


/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	/*Get the length of the name string*/
	len1 = _strlen(name);
	len2 = _strlen(owner);

	/*allocate memory for dog structure*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/*Allocate memory for the name string*/
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);/*Free previously allocated memory*/
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);/*Copy name string to dog->name*/
	_strcpy(dog->owner, owner);/*Copy owner string to dog->owner*/
	dog->age = age;/*assign age valua*/


	return (dog);
}
