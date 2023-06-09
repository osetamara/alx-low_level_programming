#include <stdio.h>
#include "main.h"
#include <libgen.h>
#include <unistd.h>

/**
 * main - print the name of the program
 *
 *
 * Return: 0 on success
 */
int main(void)
{
	char path[1024];
	ssize_t len = readlink("/proc/self/exe", path, sizeof(path) - 1);

	if (len != -1)
	{
		path[len] = '\0';
		printf("%s\n", basename(path));
	}
	return (0);
}

