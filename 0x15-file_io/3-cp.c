#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handleFileErrs - checks if the files can be accessed.
 * @srcFile: where the files are from.
 * @destFl: where the files go to.
 * @argv: arguments.
 * Return: void.
 */
void handleFileErrs(int srcFile, int destFl, char *argv[])
{
	if (srcFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (destFl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for the school.
 * @argc: no. of args.
 * @argv: args vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int srcFile, destFl, errorClose;
	ssize_t bytesread, nwr;
	char bafr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	srcFile = open(argv[1], O_RDONLY);
	destFl = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handleFileErrs(srcFile, destFl, argv);

	bytesread = 1024;
	while (bytesread == 1024)
	{
		bytesread = read(srcFile, bafr, 1024);
		if (bytesread == -1)
			handleFileErrs(-1, 0, argv);
		nwr = write(destFl, bafr, bytesread);
		if (nwr == -1)
			handleFileErrs(0, -1, argv);
	}

	errorClose = close(srcFile);
	if (errorClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srcFile);
		exit(100);
	}

	errorClose = close(destFl);
	if (errorClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srcFile);
		exit(100);
	}
	return (0);
}
