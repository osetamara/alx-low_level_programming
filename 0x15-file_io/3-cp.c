#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/*function prototype*/
char *create_buffer(char *file);
void closed_file(int fd);

/**
 * create_buffer - allocate 1024 bytes for a buffer
 * @file: name the file buffer storing char
 *
 * Return: pointer to the newly-allocationed buffer
 */
char *create_buffer(char *file)
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
		dprintf(STDERR_FILENO, "Error: cant close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies content of a file to another file
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
	int from, to, s, q;
	char *buffer;
	/* check if the argument is correct*/
	if (argc != 3)
	{
		/* print an message to stder*/
		dprintf(STDERR_FILENO, "Usage: cp file_ from file_to\n");
		exit(97);
	}
	/* construct a buffer for coping the file content*/
	buffer = create_buffer(argv[2]);
	/*open the file*/
	from = open(argv[1], O_RDONLY);
	/*read the first 1024 bytes from the file*/
	s = read(from, buffer, 1024);
	/*open the frile to copy to*/
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* copy the contents of the source file to the destination file */
	do {
		/*check if file_from or f failed*/
		if (from == -1 || s == -1)
		{
			/*print an error message to stderr*/
			dprintf(STDERR_FILENO,
					"Error can't read file %s\n", argv[1]);
			/*free the buffer memory*/
			free(buffer);
			exit(98);
		}
		q = write(to, buffer, s);

		if (to == -1 || q == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't write %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		s = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (s > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
