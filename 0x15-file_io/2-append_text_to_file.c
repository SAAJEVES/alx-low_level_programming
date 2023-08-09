#include "main.h"

/**
 * append_text_to_file - append text to a file
 *
 * @filename: name of file
 *
 * @text_content: arrays of characters
 *
 * Return: an integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileD;
	ssize_t textLen, writtenBytes;

	if (filename == NULL)
		return (-1);

	fileD = open(filename, O_WRONLY | O_APPEND);
	if (fileD == -1)
		return (-1);

	if (text_content != NULL)
	{
		textLen = strlen(text_content);
		writtenBytes = write(fileD, text_content, textLen);

		if (writtenBytes != textLen)
		{
			close(fileD);
			return (-1);
		}
	}
	close(fileD);
	return (1);
}
