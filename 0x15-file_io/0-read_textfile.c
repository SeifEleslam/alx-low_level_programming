/**
 * read_textfile - prints file
 * @filename: nfile name
 * @letters: n of letters
 * Return: n of read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, writtenLen, readLen;
	char *buff;

	buff = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buff);
		return (0);
	}
	readLen = read(file, buff, letters);
	if (readLen == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	writtenLen = write(STDOUT_FILENO, buff, readLen);
	free(buf);
	close(file);
	if (writtenLen != readLen)
		return (0);
	return (readLen);
}
