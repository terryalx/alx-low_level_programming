#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer -> file
 * @text_content: string to write
 * Return:  1 on success -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int i;
	int wrtt;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		i = 0;
		while (text_content[i])
		{
			i++;
		}
		wrtt = write(file, text_content, i);
		if (wrtt != i)
		{
			return (-1);
		}
	}

	close(file);

	return (1);
}
