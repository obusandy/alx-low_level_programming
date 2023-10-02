#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int filedesc, wttn, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	filedesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wttn = write(filedesc, text_content, length);

	if (filedesc == -1 || wttn == -1)
		return (-1);

	close(filedesc);

	return (1);
}
