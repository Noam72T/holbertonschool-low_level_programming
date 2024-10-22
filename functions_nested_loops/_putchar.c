#include <unistd.h>

/**
* Initier la function _putchar
* Return: 1 Its good if error return
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
