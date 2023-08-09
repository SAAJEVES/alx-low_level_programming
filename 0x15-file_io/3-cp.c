#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024

/**
 * display_error - display error message
 *
 * @code: an integer
 *
 * @message: the message
 *
 * Return: void
 */
void display_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * main - display result
 *
 * @argc: number of cli argument
 *
 * @argv: list of cli arguments
 *
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	const char *fromFile, *toFile;
	int fileDF, fileDT;
	char buffer[BUFFER_SIZE];
	ssize_t readBytes, writtenBytes;

	if (argc != 3)
		display_error(97, "Usage: cp fromFile toFile");
	fromFile = argv[1];
	toFile = argv[2];
	fileDF = open(fromFile, O_RDONLY);
	if (fileDF == -1)
		display_error(98, strerror(errno));
	fileDT = open(toFile, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileDT == -1)
	{
		close(fileDF);
		display_error(99, strerror(errno));
	}
	while ((readBytes = read(fileDF, buffer, BUFFER_SIZE)) > 0)
	{
		writtenBytes = write(fileDT, buffer, readBytes);
		if (writtenBytes == -1)
		{
			close(fileDF);
			close(fileDT);
			display_error(99, strerror(errno));
		}
	}
	if (readBytes == -1)
	{
		close(fileDF);
		close(fileDT);
		display_error(98, strerror(errno));
	}
	if (close(fileDF) == -1 || close(fileDT) == -1)
	{
		display_error(100, strerror(errno));
	}
	return (0);
}
