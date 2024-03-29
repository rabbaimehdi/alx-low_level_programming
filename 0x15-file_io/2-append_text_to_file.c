#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrte, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrte = write(opn, text_content, len);

	if (opn == -1 || wrte == -1)
		return (-1);

	close(opn);

	return (1);
}
