#include "main.h"

/**
 * _strlen - return str len
 * @s: str
 * Return: len
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}

/**
 * create_file - create or turncate a file
 * @filename: file name
 * @text_content: text
 * Return: 1 | -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, written, contentLen;

	if (!filename)
		return (-1);
	file = open(filename, (O_WRONLY | O_CREAT | O_TRUNC), 0600);
	if (file == -1)
		return (-1);
	contentLen = text_content ? _strlen(text_content) : 0;
	written = text_content ? write(file, text_content, contentLen) : 0;
	if (close(file) == -1 || contentLen != written)
		return (-1);
	return (1);
}
