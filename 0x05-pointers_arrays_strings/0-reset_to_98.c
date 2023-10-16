#include "main.h"

/**
 * reset_to_98 - creates a int pointer referenced to value 98
 * @n: param1
 * Return: void
 */
void reset_to_98(int *n)
{
	int *ptr = &n;

	*ptr = 98;
}
