#include "main.h"
#include <stdio.h>

/**
 * error_file - checks for errors in the operation.
 * @source_file: source file.
 * @dest_file: destination file.
 * @argv: arguments vector.
 * Return: no value.
 */
void error_file(int source_file, int dest_file, char *argv[])
{
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - code check.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int source_file, dest_file, error_st;
	ssize_t wr_length = 1024, file_end;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp source_file dest_file");
		exit(97);
	}
	source_file = open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(source_file, dest_file, argv);
	while (wr_length == 1024)
	{
		wr_length = read(source_file, buffer, 1024);
		if (wr_length == -1)
			error_file(-1, 0, argv);
		file_end = write(dest_file, buffer, wr_length);
		if (file_end == -1)
			error_file(0, -1, argv);
	}
	error_st = close(source_file);
	if (error_st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}
	error_st = close(dest_file);
	if (error_st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}
	return (0);
}
