#include "main.h"
/**
 * create_file - function to create a file
 * @filename: name of file being created
 * @text_content: text in the new file
 *
 * Return: function to return 1 on success and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, n_write;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	while (text_content[i] != '\0')
		i++;
	n_write = write(fd, text_content, i);
	if (n_write == -1)
		return (-1);
	return (1);
}
