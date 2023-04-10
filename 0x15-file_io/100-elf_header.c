#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <studio.h>
#include <unsistd.h>

void print_error(char *msg);
void print_header_info(Elf64_Endr *hdr);

/**
 * main - entry point. show the elf header
 * @argc: the number of arguments passed
 * @argv: array of pointer to the argument
 *
 * Return: 0 on success
 */
int main(int argc, char argv[])
{

