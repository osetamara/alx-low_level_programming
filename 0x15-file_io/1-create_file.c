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
	int fp, w, fav = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (fav = 0; text_content[fav];)
			fav++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_conten, fav);

	if (fp == -1 || w == -1)
		return (-1);
	/*end of processing */
	close(fp);
	return (1);
}
