#include "main.h"
/**
 * create_file - file to create file
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success and -1 if if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, file;
	size_t len;


	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < 0)
		return (-1);

	len = strlen(text_content);

	file = write(fd, text_content, len);

	close(fd);
	return ((file < 0) ? (-1) : 1);
}
