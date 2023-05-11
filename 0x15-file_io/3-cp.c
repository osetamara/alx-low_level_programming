#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*function prototype*/
char *create_buffer(char *file);
void closed_file(int fd);

/**
 * create_buffer - allocate 1024 bytes for  buffer
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
	int d;/*close the file descriptor with the given ID*/

	d = close(fd);
/*if the file descriptor couldnt be closed, print*/
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
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
	int from, to, s, x;/*declare variables*/
	char *buffer;
	/* check if the argument is correct*/
	if (argc != 3)
	{
		/* print an message to stder*/
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*create a buffer for coping the file content*/
	buffer = create_buffer(argv[2]);
	/*open the file*/
	from = open(argv[1], O_RDONLY);
	/*read the first 1024 bytes from the file*/
	s = read(from, buffer, 1024);
	/*open the frile to copy to*/
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* copy the contents of the source file to the destination file */
	do {
		/*check if file_from or s failed*/
		if (from == -1 || s == -1)
		{
			/*print an error message to stderr*/
			dprintf(STDERR_FILENO,
					"Error can't read from file %s\n", argv[1]);
			/*free the buffer memory*/
			free(buffer);
			exit(98);
		}
		x = write(to, buffer, s);

		if (to == -1 || x == -1)
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
