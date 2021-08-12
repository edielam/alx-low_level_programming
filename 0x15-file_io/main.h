#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
/**
 * read_error - function that exits the program
 * @argv: argument
 * Return: void
 */

void read_error(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}
/**
 * check_elf - function that checks the format of the file, prints magic num
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_elf(Elf64_Ehdr *header)
{
	int i = 0;

	if (header->e_ident[EI_MAG0] == 0x7f &&
	    header->e_ident[EI_MAG1] == 'E' &&
	    header->e_ident[EI_MAG2] == 'L' &&
	    header->e_ident[EI_MAG3] == 'F')
	{
		printf("ELF Header:\n");
		printf("  Magic:  ");

		for (i = 0; i < 16; i++)
			printf(" %02x", header->e_ident[i]);
		printf("\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Format error, not an ELF\n");
		exit(98);
	}
}


int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _MAIN_H_ */
