#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		rw = write(fd, text_content, i);
		if (rw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
