#include "main.h"

/**
 * main - Copy one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, size;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	file_from = open(argv[1], O_RDONLY, 0);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	while ((size = read(file_from, buf, 1024)) > 0)
	{
		if (write(file_to, buf, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from), exit(100);
	}

	if (close(file_to) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to), exit(100);
	}

	return (0);
}

