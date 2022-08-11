#include <unistd.h>
/**
 * _putchar - function to write out stdout
 * @c: parameter mber
 * Return: success 1 and error -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
