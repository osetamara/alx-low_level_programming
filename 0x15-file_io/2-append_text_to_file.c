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
	/* declring three variable*/
	int f, j, count = 0;
/* checking if the ilename argument is null*/
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	f = open(filename, O_WRONLY | O_APPEND);
	j = write(f, text_content, count);


	if (f == -1 || j == -1)
		return (-1);

	close(0);
	return (1);
}
