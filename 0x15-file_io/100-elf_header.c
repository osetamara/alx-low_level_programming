#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
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
		if (e_ident[num] != 127 &&
			e_ident[num] != 'E' &&
			e_ident[num] != 'L' &&
			e_ident[num] != 'F')
		{
			dprintf(STDERR_FILENO,
					"Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_magic - print magis number of elf header
 * @e_ident: pointer to array container the ELF magic number
 *
 * Description: magic number are seperated space
 */
void print_magic(unsigned char *e_ident)
{
	int index;/*declare variable*/

	printf(" magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_class - print class of elf header
 * @e_ident: pointer to an array container
 */
void print_class(unsigned char *e_ident)
{
	printf(" class        ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unkown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - print the data of an Elf header.
 * @e_ident: A pointerer to an array containing the elf class
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_version - prints the version of elf heqader.
 * @e_ident: A pointer to an array containing the elf version
 */
void print_version(unsigned char *e_ident)
{
	printf(" version:           %d",
		e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * print_osabi - prints the OS\ABI of an ELF header
 * @e_ident: A pointer to an  array containing the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI:           ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - system V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX- HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FREEBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("standalone APP\n");
		break;
	default:
		printf("<unknown:%x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * print_abi - print the ABI version of an ELF header
 * @e_ident: A pointer to an array containing the ELF ABI version.
 *
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI VERSION:       %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an ELF header
 * @e_type: The ELF type
 * @e_ident:  pointer to an array containing the ELF class
 *
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type:         ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unkown: %x>\n", e_type);
	}
}
/**
 * print_entry - prints the entry point of an ELF header
 * @e_entry: The address of thr ELF entry point
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" ENTRY point address:        ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * close_elf - close an ELF file
 * @elf: The file descriptor of the ELF file.
 *
 * Desciption: if thr file cannot be closed - exit code 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of argumens supplied to the program.
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success.
 * Description: If the file is not an ELF file or
 *    the function fails -exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int p, s;

	p = open(argv[1], O_RDONLY);
	if (p == -1)
	{
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: cant't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
		exit(98);
	}
	s = read(p, header, sizeof(Elf64_Ehdr));
	if (s == -1)
	{
		free(header);
		close_elf(0);
		dprintf(STDERR_FILENO, "Error:  `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(0);
	return (0);
}
