#include <unistd.h>
/**
* return - prints out the character
*@c - takes in the character
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
