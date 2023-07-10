#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t total = 0;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	while (letters > 0 && (bytes_read = fread(buffer, sizeof(char), sizeof(buffer), file)) > 0)
	{
		if (bytes_read <= letters)
		{
			bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
			if (bytes_written != bytes_read)
			{
				fclose(file);
				return (0);
			}
			total += bytes_written;
			letters -= bytes_written;
		}
		else
		{
			bytes_written = fwrite(buffer, sizeof(char), letters, stdout);
			if (bytes_written != letters)
			{
				fclose(file);
				return (0);
			}
			total += bytes_written;
			letters = 0;
		}
	}

	fclose(file);
	return (total);
}

