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
 * append_text_to_file - append to a file
 * @filename: file name
 * @text_content: text
 * Return: 1 | -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, written, contentLen;

	if (!filename)
		return (-1);
	file = open(filename, (O_WRONLY | O_APPEND));
	if (file == -1)
		return (-1);
	contentLen = text_content ? _strlen(text_content) : 0;
	written = text_content ? write(file, text_content, contentLen) : 0;
	if (close(file) == -1 || contentLen != written)
		return (-1);
	return (written);
}
