#include "main.h"

/**
 * create_file - function tha create a file
 * @filename: pointer to name of file to create
 * @text_content: pointer to s string to write a file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	/* declaring three integer variables*/
	int fp, q, length = 0;
/* checking if the filename argument is null*/
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	q = write(fp, text_content, length);
/* check if either the open or write system call failled*/
	if (fp == -1 || q == -1)
		return (-1);
	/* end of processing */
	close(fp);
/* return 1*/
	return (1);
}
