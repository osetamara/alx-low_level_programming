#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*function prototype*/
char *construct_buffer(char *file);
void closed_file(int fd);

/**
 * construct_buffer - allocate 1024 bytes for a buffer
 * @file: name the file buffer storing char
 *
 * Return: pointer to the newly-allocationed buffer
 */
char *construct_buffer(char *file)
{
	char *buffer;

	/* allocating space */
	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close file descriptors
 * @fd: the file descriptor to be close
 */
void close_file(int fd)
{
	int s;

	s = close(fd);

	if (s == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: cant close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy content of a file to another file
 * @argc: number of argument
 * @argv: array of pointer to argument
 *
 * Return: 0 on success 97 if  incorrect number of arguments
 * 98 if file_from cannot be read
 * 99 if file_to cannot be created or written
 * 100 if file descriptor cannot be closed
 */
int main(int argc, char *argv[])
{
	int from, to, f, q;
	char *buffer;
	/* check if the argument is correct*/
	if (argc != 3)
	{
		/* print an message to stder*/
		dprintf(STDERR_FILENO, "Usage: cp file_ from file_to\n");
		exit(97);
	}
	/* construct a buffer for coping the file content*/
	buffer = construct_buffer(argv[2]);

	/*open the file*/
	from = open(argv[1], O_RDONLY);

	f = read(from, buffer, 1024);

	/*open the frile to copy to*/
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || f == -1)
		{
			/*print an error message to stderr*/
			dprintf(STDERR_FILENO,
					"Error can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		/*write the byte destination file*/
		q = write(to, buffer, f);
		/* check if file_to or q failed*/
		if (to == -1 || q == -1)
		{
			dprintf(STDERR_FILENO,
					"Error can't write to %s\n", argv[2]);
			/*free the buffer memory*/
			free(buffer);
			exit(99);
		}
		q = read(from, buffer, 1024);

		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (f > 0);

	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
