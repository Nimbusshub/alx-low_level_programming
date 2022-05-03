#include "main.h"

/**
 * create_file - create new file
 * @filename: name of file to be created
 * @text_content: content of the text
 * Return: 1 (Success) -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int file, wCount;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wCount = write(filename, text_content, strlen(text_content));
	if (wCount < 0)
		return (-1);
	close(file);
	return (1);
}
