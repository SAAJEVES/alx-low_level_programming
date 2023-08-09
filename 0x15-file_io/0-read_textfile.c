#include "main.h"
#include <stdio.h>


/**
 * read_textfile - read text of a file
 *
 * @filename: name of the file to be read
 *
 * @letters: number of bytes read
 *
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *filePtr;
	ssize_t bytesRead, bytesWritten;
	char *words;

	if (filename == NULL)
		return (0);

	filePtr = fopen(filename, "r");

	if (filePtr == NULL)
		return (0);

	words = (char *)malloc(letters + 1);
	if (words == NULL)
	{
		fclose(filePtr);
		return (0);
	}
	bytesRead = fread(words, sizeof(char), letters, filePtr);
	if (bytesRead < 0)
	{
		fclose(filePtr);
		free(words);
		return (0);
	}
	words[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, words, bytesRead);
	if (bytesWritten != bytesRead)
	{
		fclose(filePtr);
		free(words);
		return (0);
	}
	fclose(filePtr);
	free(words);
	return (bytesWritten);
}
