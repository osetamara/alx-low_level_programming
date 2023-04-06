#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that read text file and prints to standard output
 * @filename: Text file to read
 * @letters: number of letter to be read
 *
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t w;
	ssize_t f;
	ssize_t fp;

	fp = open(filename, O_RDONLY);
	/* processing of file */
	if (fp == -1)
		return (0);
	/* allocating space */
	buf = malloc(sizeof(char) * letters);
	f = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, f);
	free(buf);
	/*end of processing */
	close(fp);
	return (w);
}
