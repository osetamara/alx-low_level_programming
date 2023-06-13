#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * word_count - Counts the number of words in a string.
 * @str: Input string
 * Return: Number of words in the string
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: Input string
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int word_count_value = word_count(str);
	int i, j, k, len, index;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count_value = word_count(str);
	if (word_count == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (word_count_value + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
			continue;
		}
		len = 0;
		for (j = i; str[j] != '\0' && str[j] != ' ' &&
				str[j] != '\t' && str[j] != '\n'; j++)
			len++;
		words[index] = malloc(sizeof(char) * (len + 1));
			if (words[index] == NULL)
			{
				for (k = 0; k < index; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
		strncpy(words[index], &str[i], len);
		words[index][len] = '\0';
		i = j;
		index++;
	}
	words[index] = NULL;
	return (words);
}
