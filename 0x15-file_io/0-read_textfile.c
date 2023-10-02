#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Text file being read.
 * @letters: Number of letters to be read.
 * Return: Number of bytes read and printed, or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t filedesc;
	ssize_t wttn;
	ssize_t rd;

	if (filename == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(filedesc);
		return (0);
	}

	rd = read(filedesc, buf, letters);
	if (rd == -1)
	{
		close(filedesc);
		free(buf);
		return (0);
	}

	wttn = write(STDOUT_FILENO, buf, rd);
	if (wttn == -1 || wttn != rd)
	{
		close(filedesc);
		free(buf);
		return (0);
	}

	free(buf);
	close(filedesc);
	return (wttn);
}
