#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_data(int code)
{
	printf("  %-35s", "Data:");
	code == 1 ? printf("2's complement, little endian\n")
		: code == 2 ? printf("2's complement, big endian\n")
		: printf("<unknown: %02hx>\n", code);
}

/**
 * print_type - prints elf type
 * @code: type code
 */
void print_type(int code)
{
	printf("  %-35s", "Type:");
	switch (code)
	{
	case 0x0001:
		printf("REL (Relocatable file)\n");
		break;
	case 0x0002:
		printf("EXEC (Executable file)\n");
		break;
	case 0x0003:
		printf("DYN (Shared object file)\n");
		break;
	case 0x0004:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %02hx>\n", code);
	}
}

/**
 * print_osapi - prints osAPI type
 * @code: type code
 */
void print_osapi(int code)
{
	printf("  %-35sUNIX - ", "OS/ABI:");
	switch (code)
	{
	case 0x00:
		printf("System V");
		break;
	case 0x01:
		printf("HP-UX");
		break;
	case 0x02:
		printf("NetBSD");
		break;
	case 0x03:
		printf("Linux");
		break;
	case 0x04:
		printf("GNU Hurd");
		break;
	case 0x06:
		printf("Solaris");
		break;
	case 0x07:
		printf("AIX");
		break;
	case 0x08:
		printf("IRIX");
		break;
	case 0x09:
		printf("FreeBSD");
		break;
	case 0x0A:
		printf("Tru64");
		break;
	case 0x0B:
		printf("Novell Modesto");
		break;
	case 0x0C:
		printf("OpenBSD");
		break;
	case 0x0D:
		printf("OpenVMS");
		break;
	case 0x0E:
		printf("NonStop Kernel");
		break;
	case 0x0F:
		printf("AROS");
		break;
	case 0x10:
		printf("Fenix OS");
		break;
	case 0x11:
		printf("CloudABI");
		break;
	case 0x12:
		printf("Stratus Technologies OpenVOS");
		break;
	default:
		printf("<unknown: %02hx>\n", code);
	}
	printf("\n");
}

/**
 * print_hex - prints osAPI type
 * @buffer: head
 * @size: size
 */
void print_hex(const unsigned char *buffer, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		printf("%02x ", buffer[i]);
	printf("\n");
}

/**
 * print_ident - prints osAPI type
 * @ident: head
 */
void print_ident(const unsigned char *ident)
{
	printf("  Magic:   ");
	print_hex(ident, 16);
	printf("  %-35sELF%u\n", "Class:", ident[4] == 1 ? 32 : 64);
	print_data(ident[5]);
	printf("  %-35s%u%s", "Version:", ident[6],
		ident[6] == 1 ? " (current)\n" : "\n");
	print_osapi(ident[7]);
	printf("  %-35s%u\n", "ABI Version:", ident[8]);
	print_type(*(uint16_t *)(ident + 16));
	printf("  %-35s0x%lx\n", "Entry point address:",
		*(uint64_t *)(ident + 24));
}

/**
 * main - prints elf header
 * @argc: arg count
 * @argv: arg values
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		printf("Usage: %s <elf_file>\n", argv[0]);
		exit(98);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Failed to open file: %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(file, &header, sizeof(header));
	if (bytes_read == -1 || bytes_read != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Failed to read file: %s\n", argv[1]);
		close(file);
		exit(98);
	}
	close(file);
	printf("ELF Header:\n");
	print_ident(header.e_ident);
	return (0);
}
