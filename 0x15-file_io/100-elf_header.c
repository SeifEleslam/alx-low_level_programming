#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>


/**
 * print_data - prints elf data
 * @code: type code
 */
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
	printf("  %-35s", "OS/ABI:");
	if (code == 0)
		printf("UNIX - System V\n");
	else if (code == 1)
		printf("UNIX - HP-UX\n");
	else if (code == 2)
		printf("UNIX - NetBSD\n");
	else if (code == 3)
		printf("UNIX - Linux\n");
	else if (code == 4)
		printf("UNIX - GNU Hurd\n");
	else if (code == 6)
		printf("UNIX - Solaris\n");
	else if (code == 7)
		printf("UNIX - AIX\n");
	else if (code == 8)
		printf("UNIX - IRIX\n");
	else if (code == 9)
		printf("UNIX - FreeBSD\n");
	else if (code == 10)
		printf("UNIX - Tru64\n");
	else if (code == 11)
		printf("UNIX - Novell Modesto\n");
	else if (code == 12)
		printf("UNIX - OpenBSD\n");
	else if (code == 13)
		printf("UNIX - Open VMS\n");
	else if (code == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (code == 15)
		printf("UNIX - AROS\n");
	else if (code == 16)
		printf("UNIX - Fenix OS\n");
	else if (code == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02x>\n", code);
}

/**
 * print_hex - prints osAPI type
 * @buffer: head
 * @size: size
 */
void print_hex(char *buffer, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		printf("%02x%s", buffer[i], i == size - 1 ? "" : " ");
	printf("\n");
}

/**
 * printentry - prints entry
 * @head: head
 */
void printentry(char *head)
{
	int i, end;

	printf("  %-35s0x", "Entry point address:");
	if (head[4] == 2)
		end = 0x1f;
	else
		end = 0x1b;
	if (head[5] == 1)
	{
		i = end;
		while (head[i] == 0 && i > 0x18)
			i--;
		printf("%x", head[i--]);
		while (i >= 0x18)
			printf("%02x", (unsigned char) head[i--]);
		printf("\n");
	}
	else
	{
		i = 0x18;
		while (head[i] == 0)
			i++;
		printf("%x", head[i++]);
		while (i <= end)
			printf("%02x", (unsigned char) head[i++]);
		printf("\n");
	}
}

/**
 * print_ident - prints osAPI type
 * @head: head
 */
void print_ident(char *head)
{

	printf("  Magic:   ");
	print_hex(head, 16);
	printf("  %-35sELF%u\n", "Class:", head[4] == 1 ? 32 : 64);
	print_data(head[5]);
	printf("  %-35s%u%s", "Version:", head[6],
		head[6] >= EV_CURRENT ? " (current)\n" : "\n");
	print_osapi(head[7]);
	printf("  %-35s%u\n", "ABI Version:", head[8]);
	print_type(head[5] == 1 ? head[16] : head[17]);
	/*printentry(head);*/
	printf("  %-35s0x%x\n", "Entry point address:", (unsigned long)(head + 24));
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
	char header[32];

	if (argc != 2)
	{
		dprintf(2, "Usage: %s <elf_file>\n", argv[0]);
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
	if (header[0] != 0x7f || header[1] != 'E' || header[2] != 'L' || header[3] != 'F')
	{
		dprintf(2, "Usage: %s <elf_file>\n", argv[0]);
		exit(98);
	}
	printf("ELF Header:\n");
	print_ident(header);
	return (0);
}
