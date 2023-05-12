#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_addr - prints point address.
 * @ptr: pointer to ELF header.
 * Return: no value.
 */
void print_addr(char *ptr)
{
	int i, begin;
	char sys = ptr[4] + '0';

	printf("  Entry point address:               0x");
	if (sys == '1')
	{
		begin = 26;
		printf("80");
		for (i = begin; i >= 22; i--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%x", 256 + ptr[i]);
		}
		if (ptr[7] == 6)
			printf("00");
	}
	else if (sys == '2')
	{
		begin = 26;
		for (i = begin; i > 23; i--)
		{
			if (ptr[i] >= 0)
				printf("%02x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%02x", 256 + ptr[i]);
		}
	}
	printf("\n");
}

/**
 * print_type - prints file pointer type.
 * @ptr: pointer to ELF header file.
 * Return: no value.
 */
void print_type(char *ptr)
{
	char type;

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:                              ");
	switch (type)
	{
	case 0:
		printf("NONE (No file type)\n");
		break;
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
		break;
	}
}

/**
 * print_osabi - prints operating system and ABI (OSABI).
 * @ptr: pointer to ELF header file.
 * Return: no value.
 */
void print_osabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                            ");
	switch (osabi)
	{
	case 0:
		printf("UNIX - System V\n");
		break;
	case 2:
		printf("UNIX - NetBSD\n");
		break;
	case 6:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("<unknown: %x>\n", osabi);
		break;
	}
	printf("  ABI Version:                       %d\n", ptr[8]);
}

/**
 * print_version - prints ELF version.
 * @ptr: pointer to ELF header file.
 * Return: no value.
 */
void print_version(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);
	if (version == EV_CURRENT)
		printf(" (current)");
	printf("\n");
}

/**
 * print_data - prints data encoding.
 * @ptr: pointer to ELF header file.
 * Return: no value.
 */
void print_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");
	else if (data == 2)
		printf(", big endian\n");
	printf("\n");
}

/**
 * print_magic - prints ELF bytes.
 * @ptr: pointer to ELF header file.
 * Return: no value.
 */
void print_magic(char *ptr)
{
	int bytes;

	printf("  Magic:  ");
	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", ptr[bytes]);
	printf("\n");
}

/**
 * check_sys - checks ELF architecture and prints its info.
 * @ptr: pointer to ELF header file.
 * Return: no value.
 */
void check_sys(char *ptr)
{
	char sys = ptr[4] + '0';

	if (sys == '0')
	{
		fprintf(stderr, "Err: Invalid ELF architecture\n");
		exit(98);
	}
	printf("ELF Header:\n");
	print_magic(ptr);
	if (sys == '1')
		printf("  Class:                             ELF32\n");
	else if (sys == '2')
		printf("  Class:                             ELF64\n");
	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_addr(ptr);
}

/**
 * check_elf - checks if file is an ELF binary or not.
 * @ptr: pointer to contents of the file.
 * Return: ELF binary state.
 */
int check_elf(char *ptr)
{
	return (ptr[0] == 0x7f && ptr[1] == 'E' && ptr[2] == 'L' && ptr[3] == 'F');
}

/**
 * main - code check.
 * @argc: argument length.
 * @argv: argument vector.
 * Return: state.
 */
int main(int argc, char *argv[])
{
	int fd, ret_read;
	char ptr[27];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Err: File %s can not be opened\n", argv[1]);
		exit(98);
	}
	ret_read = read(fd, ptr, 27);
	if (ret_read == -1)
	{
		fprintf(stderr, "Err: File %s can not be read\n", argv[1]);
		exit(98);
	}
	if (!check_elf(ptr))
	{
		fprintf(stderr, "Err: File %s is not an ELF binary\n", argv[1]);
		exit(98);
	}
	check_sys(ptr);
	close(fd);
	return (0);
}
