#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_current(char *file);
void close_file(int fp);

/**
 * create_current - allocation 1024 bytes for a butffer
 * @file: the name of the file buffer is storing chars for.
 *
 * Return: a pointer to the newly-allocation buffer.
 */
char *create_current(char *file)
{
	char *current;
/* allocating space*/
	current = malloc(sizeof(char) * 1024);

	if (current == NULL)
	{
		dprintf(STDERR_FILENO,
				"error. cant write to %s\n", file);
		exit(99);
	}
	return (current);
}
/**
 * close_file - cloes file
 * @fp: the file description
 */
void close_file(int fp)
{
	int d;

	d = close(fp);

	if (d == -1)
	{
		dprintf(STDERR_FILENO,
				"error: can't close fp %d\n", fp);
			exit(100);
	}
}
/**
 * main - copies the contents of a file to anther file
 * @argc: number of argument
 * @argv: an array of pointers to argument
 *
 * Return: 0 on success.
 * Description: if the argument count is incorrect - exit code 97
 *     if file_from does not exist or cannot be read - exit code 98.
 *     if file_to cannot be created or writtrn to - exit code 99.
 *     if file_to or file_from cannot be close - exit code 100.
 */
int main(int argc, char *argv[])
{
	/* declaring variables*/
	int from, to, r, w;
	char *current;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_form file_to\n");
		exit(97);
	}

	current = create_current(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, current, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"error: can't read from file %s\n", argv[1]);
			free(current);
			exit(98);
		}

		w = write(to, current, r);

		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"error: can't write to %s\n", argv[2]);
			free(current);
			exit(99);
		}
		r = read(from, current, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (r > 0);

	free(current);
	close_file(from);
	close_file(to);
	return (0);
}
