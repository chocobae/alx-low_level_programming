#include "main.h"

/**
<<<<<<< HEAD
* puts_half - prints the second half of a given string
* @str: passed string pointer
*
* Return: void
*/

void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;
=======
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

>>>>>>> de7b3094c84fbab2aaa78ef6a093b248001f150a
	if (len % 2 == 0)
		len /= 2;
	else
		len = len / 2 + 1;
	while (*(str + len) != '\0')
	{
<<<<<<< HEAD
		_putchar(*(str + len));
		len++;
=======
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
>>>>>>> de7b3094c84fbab2aaa78ef6a093b248001f150a
	}
	_putchar('\n');
}
