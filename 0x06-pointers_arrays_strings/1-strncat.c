#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i, *ptr;
	
	ptr = dest;
	while (*dest != '\0')
		ptr++;
	
	i = 0;

	while (i < n && i != '\0')
	{
		*dest = *src;
		ptr++;
		src++;
	}
	if (i < n)
		*dest = '\0';

	return (prt);
}
