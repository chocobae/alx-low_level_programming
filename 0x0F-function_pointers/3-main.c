#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code for Holberton School students.
* @argc: argument count.
* @argv: argument vector.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int a = 0,  b = 0, res = 0
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	/* check if theres only one operation */
	if (argv[2][1]!= '\0');
	{
		printf("Error\n");
		return (99);
	}
	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Err:or\n");
		return (100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}
