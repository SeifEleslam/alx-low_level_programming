#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>


/**
 * handle_close - return str len
 * @fileD: int
 * Return: int
 */
int handle_close(int fileD)
{
	int fileClose;

	fileClose = close(fileD);
	if (fileClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileD);
		return (100);
	}
	return (0);
}

/**
 * exit_err - return str len
 * @dest: destination
 * @code: return val
 * @err: err message
 * @fileName: file name
 * @fileD1: descriptior1
 * @fileD2: descriptior2
 * Return: err code
 */
int exit_err(int dest, int code, char *err, char *fileName, int fileD1, int fileD2)
{
	dprintf(dest, err, fileName ? fileName : "");
	if (fileD1 > -50)
		handle_close(fileD1);
	if (fileD2 > -50)
		handle_close(fileD2);
	return (code);
}

/**
 * handle_close - return str len
 * @fileName: int
 * @op: int
 * @fileD1: int
 * @fileD2: int
 * Return: int
 */
int ops_err(char *fileName, int fileD1, int fileD2, int op)
{
	return op == 1 ? exit_err(STDERR_FILENO, 98,
				"Error: Can't read from file %s\n", fileName, fileD1, fileD2)
			: exit_err(STDERR_FILENO, 99,
				"Error: Can't write to %s\n", fileName, fileD1, fileD2);
}

/**
 * main - copy one file to another
 * @ac: number of arg
 * @av: list of args
 * Return: 0 or err code
 */
int main(int ac, char **av)
{
    char buff[1024];
    int lenRead, lenWrite, fileFrom, fileTo, errCode;

    if (ac != 3)
        return exit_err(STDERR_FILENO, 97,
                        "Usage: cp file_from file_to\n", NULL, -100, -100);
    fileFrom = open(av[1], O_RDONLY);
    if (fileFrom == -1)
        return ops_err(av[1], -100, -100, 1);
    fileTo = open(av[1], (O_WRONLY | O_CREAT | O_TRUNC), 0662);
    if (fileTo == -1)
        return ops_err(av[2], fileFrom, -100, 2);

    for (lenRead = 1024; lenRead == 1024;)
    {
        lenRead = read(fileFrom, buff, 1024);
        if (lenRead == -1)
            return ops_err(av[1], fileFrom, fileTo, 1);
        lenRead = read(fileFrom, buff, 1024);
        if (lenRead == -1)
            return ops_err(av[2], fileFrom, fileTo, 2);
    }
    errCode = handle_close(fileFrom);
    errCode += handle_close(fileTo);
    return (errCode == 0 ? 0 : 100);
}
