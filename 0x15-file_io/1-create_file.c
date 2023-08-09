#include "main.h"


/**
 * create_file - create a file
 *
 * @filename: name of the file
 *
 * @text_content: the content to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileD, flag;
	mode_t permission;
	ssize_t textLen, writtenBytes;

	if (filename == NULL)
		return (-1);

	permission = S_IRUSR | S_IWUSR;
	flag = O_WRONLY | O_CREAT | O_TRUNC;
	fileD = open(filename, flag, permission);

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
