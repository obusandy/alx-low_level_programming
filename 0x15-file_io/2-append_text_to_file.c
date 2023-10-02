#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append (can be NULL).
 * Return: 1 or, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedesc, wttn, length = 0;

	if (filename == NULL)
		return (-1);

	filedesc = open(filename, O_WRONLY | O_APPEND);

	if (filedesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;

		wttn = write(filedesc, text_content, length);

		if (wttn == -1)
		{
			close(filedesc);
			return (-1);
		}
	}

	close(filedesc);
	return (1);
}
