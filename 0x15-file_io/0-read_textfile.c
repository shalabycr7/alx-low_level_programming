#include "main.h"

/**
 * read_textfile - reads a text file and prints the POSIX
 * standard output.
 * @filename: text filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_op;
	ssize_t file_rd, file_end;
	char *buffer;

	if (!filename)
		return (0);
	file_op = open(filename, O_RDONLY);
	if (file_op == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	file_rd = read(file_op, buffer, letters);
	file_end = write(STDOUT_FILENO, buffer, file_rd);
	close(file_op);
	free(buffer);
	return (file_end);
}
