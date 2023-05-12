#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name.
 * @text_content: written file content.
 * Return: written status.
 */
int create_file(const char *filename, char *text_content)
{
	int file_op, wr_length = 0, file_write;

	if (!filename)
		return (-1);
	file_op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_op == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[wr_length])
		wr_length++;
	file_write = write(file_op, text_content, wr_length);
	if (file_write == -1)
		return (-1);
	close(file_op);
	return (1);
}
