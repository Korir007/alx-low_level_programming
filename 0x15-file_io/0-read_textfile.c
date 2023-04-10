#include "main.h"

/**
 * read_textfile - this func reads a text file then prints it
 *                to standard outputs
 *
 * @filename: files to be processed by read_textfile
 * @letters: number of letters to be processed by read_textfile
 *
 * Return: 0 on fail or output processed by @letters
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_check, wordcount;
	char *buffer;

	if (filename == NULL) 
		return (0);
	
	file = open(filename, O_RDONLY); 

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_check = read(file, buffer, letters); 
	if (read_check == -1)
		return (0);

	wordcount = write(STDOUT_FILENO, buffer, read_check);
	if (wordcount == -1 || read_check != wordcount)
		return (0);

	free(buffer);

	close(file);

	return (wordcount);
}
