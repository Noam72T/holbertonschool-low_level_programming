#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Function Read
 * @filename: pointers
 * @letters: letters
 * Return: The number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t files, let, read;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	files = open(filename, O_RDONLY);

	if (files == -1)
	{
		free(text);
		return (0);
	}

	let = read(files, text, letters);

	read = readrite(STDOUT_FILENO, text, let);

	close(files);

	return (read);
}