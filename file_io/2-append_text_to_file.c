#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Function Main
 * @filename: Name of the file.
 * @text_content: The Content.
 * Return: Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, i = 0;
ssize_t bytes_written;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
while (text_content[i] != '\0')
i++;
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);
bytes_written = write(file, text_content, i);
if (bytes_written == -1)
{
close(file);
return (-1);
}
close(file);
return (1);
}
