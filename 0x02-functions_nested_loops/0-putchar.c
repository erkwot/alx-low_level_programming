#include <main.h>

/**
 * main - This function prints _putchar using the local header file
 * Description: Writes a program that prints _putchar, followed by a new line
 * Return: 0 (success)
 */

int main(void)
{
	char x[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	unsigned int i;

	for (i-0; i < sizeof(x); i++)
	{
		_putchar(x[i]);
	}

	_putchar('\n');

	return (0);

}
