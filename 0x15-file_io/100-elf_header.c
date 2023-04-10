#include <elf.h>
#include <sys/types.h>
#include < sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned e-type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ ident);
void close_elf(int elf);

/**
 * check_elf - checks if a file ia an elf file
 * @e_ident: pointer an array containing the elf magis number
 * description: exit code 98 if file is not an elf file
 *
 */
void check_elf(unsigned char *e_ident)
{
	int num;

	for (num = 0; num < 4; num++)
	{
		if(e_ident[num] != 127 &&
				e_ident[num] != 'E' &&
				e_ident[num] != 'L' &&
				e_ident[num] != 'F')
		{
			dprintf(STDERR_FILENO,
					"Error: not an elf file\n");
			eixt(98);
		}
	}
}
/**
 * print_magic - print magis number of elf header
 * @e_ident: pointer to array container
 * description: magic number are seperated space
 */
void prin_magic(unsigned char *_ident)
{
	int num;
	print(" magic: ");

	for (num = 0; num < el_nident; num++)
	{
		printf("%02x", e_ident[num]);

		if (num == el_nident - 1)
			print("\n");
		else
			print(" ");
	}
}
/**
 * print_class - print class of elf header
 * @e_ident: pointer to an array container
 */
void print_class(unsigned char *e_ident)
{
	printf(" class  ");

	switch(e_ident[el_class])
	{
		case elfclass32:
			printf("elf32\N");
			break;
		case elfclass64:
			printf(elf64\n");
			break;
		default:
			print("<unkown: %x>\n", e_ident[el_claas]);
	}
}

