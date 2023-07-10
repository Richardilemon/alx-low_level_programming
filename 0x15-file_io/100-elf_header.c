#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_error - Print the error message to stderr and exit with status code 98
 * @msg: The error message to display
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Display the information contained in the ELF header
 * @elf_header: Pointer to the ELF header
 */
void print_elf_header(const unsigned char *elf_header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic: ");
	for (i = 0; i < 16; i++)
		printf("%02x ", elf_header[i]);
	printf("\n");
	printf("  Class: %s\n", elf_header[4] == 1 ? "ELF32" : "ELF64");
	printf("  Data: %s\n", elf_header[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version: %d\n", elf_header[6]);
	printf("  OS/ABI: %s\n", elf_header[7] == 0 ? "System V" : "UNIX - System V");
	printf("  ABI Version: %d\n", elf_header[8]);
	printf("  Type: 0x%04x\n", *(unsigned short *)(elf_header + 16));
	printf("  Entry point address: 0x%lx\n", *(unsigned long *)(elf_header + 24));
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	unsigned char elf_header[ELF_HEADER_SIZE];
	ssize_t bytes_read;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Cannot open file");

	bytes_read = read(fd, elf_header, ELF_HEADER_SIZE);
	if (bytes_read == -1 || bytes_read < ELF_HEADER_SIZE)
		print_error("Error: Cannot read ELF header");

	print_elf_header(elf_header);

	if (close(fd) == -1)
		print_error("Error: Cannot close file");

	return 0;
}

