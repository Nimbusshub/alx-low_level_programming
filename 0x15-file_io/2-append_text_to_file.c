#include "main.h"

/**
 * append_text_to_file - append text to an existing file
 * @filename: name of file to append to
 * @text_content: string to append to file
 * Return: 1 (succes) -1 (faiure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wCount;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);
	wCount = write(file, text_content, strlen(text_content));
	if (wCount < 0)
		return (-1);
	close(file);
	return (1);
}
