#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - entry point for the cp program
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 * Return: 0 on success, or the appropriate error code
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, n_read, n_written, close_return;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close_return = close(fd_to);
			if (close_return == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
				exit(100);
			}
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close_return = close(fd_to);
		if (close_return == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
		exit(98);
	}

	close_return = close(fd_from);
	if (close_return == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	close_return = close(fd_to);
	if (close_return == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

