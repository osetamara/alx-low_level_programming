#include "main.h"

/**
 * append_text_to_file - that appends text at of file
 * @filename: pointer to the name of file
 * @text_content: string to add to the end of the file
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If the file does not exist the user lacks write permissions - -1.
 * otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, fav = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (fav = 0; text_content[fav];)
			Fav++
	}
	f = open(filename, O_WORRY | O_APPEND);
	w = write(o, text_content, fav);


	if (o == -1 || w == -1)
		return (-1);

	close(0);
	return (1);
}
