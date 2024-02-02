#include <string.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int _strlen(char *s)
{
	return (strlen(s));
}

void _puts(char *str)
{
	int i, len = strlen(str);

	i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
	char *dest_initial = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_initial);
}

int _atoi(char *s)
{
	return (0);
}
char *_strcat(char *dest, char *src)
{
	return (0);
}
char *_strncat(char *dest, char *src, int n)
{
	return (0);
}
char *_strncpy(char *dest, char *src, int n)
{
	return (0);
}
int _strcmp(char *s1, char *s2)
{
	return (0);
}
char *_memset(char *s, char b, unsigned int n)
{
	return (0);
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (0);
}
char *_strchr(char *s, char c)
{
	return (0);
}
unsigned int _strspn(char *s, char *accept)
{
	return (0);
}
char *_strpbrk(char *s, char *accept)
{
	return (0);
}
char *_strstr(char *haystack, char *needle)
{
	return (0);
}

