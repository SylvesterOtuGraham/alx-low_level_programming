#include <unistd.h>

/**
* This is my _putchac.c 
*/

int _putchar(char c)
{
    return write(1, &c, 1);
}
