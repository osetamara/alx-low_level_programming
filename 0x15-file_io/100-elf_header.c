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
		case elfclassnone:
			printf("none\n");
			break;
		case elfclass32:
			printf("elf32\N");
			break;
		case elfclass64:
			printf("elf64\n");
			break;
		default:
			print("<unkown: %x>\n", e_ident[el_claas]);
	}
}
/**
 * print_data - print the data of an Elf header.
 * @e_ident: A pointerer to an array containing the elf class
 */
void print_dat(unsigned char *e_ident)
{
	printf(" Data:              ");
	switch(e_ident[El_DATA])
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
			printf("<unknown: %x>\n", e_ident[El_CLASS]);
	}
}
/**
 * print_version - prints the version of elf heqader.
 * @e_ident: A pointer to an array containing the elf version
 */
void print_version(unsigned char*e_ident)
{
	printf(" version:           %d",
		e_ident[EI_VERSION]);
	switch(e_ident[EI_VERSION])
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
	print(" OD/ABI:           ");

	switch(e_ident[EI_OSABI])
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
		printf("UNIX - IRIX\N");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FREEBSD\N");
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
		print("<unknown:%x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * print_abi - print the ABI version of an ELF header
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
	print(" ABI VERSION:       %d\n",
			e_ident[EI_ABIVERSION]);
}
/**
 * Print_type - prints the type of an ELF header
 * @e_type: The ELF type
 * @e_ident:  pointer to an array containing the ELF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if(e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	print(" Type:         ");

	switch(e_type)
	{
	case ET_NONE:
		printf("NONE(None))\n");
		break;
	case ET_REL:
		print("REL(Relocatable file)\n");
		break;
	case ET EXEC:
		printf("EXEC(Executable file)\n");
		break;
	case ET_DYN:
		print("DYN(shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE(Core file)\n");
		break;
	default:
		print("<unkown:%x>\n", e_type);
	}
}
