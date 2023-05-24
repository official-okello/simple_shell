#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: 1 or -1,sets errnor appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
  * _puts - prints a string
  * @str: string
  *
  * Return: None
  */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

/**
  * _strncmp - Compares the first n bytes of str1 and str2
  * @s1: first string
  * @s2: second string
  * @len: The limit bytes of comparison
  *
  * Return: an integer
  */
int _strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int pos = 0;
	int diff = 0;

	while (pos < len)
	{
		if (s1[pos] == s2[pos])
		{
			pos++;
			continue;
		}
		else
		{
			diff = s1[pos] - s2[pos];
			break;
		}

		pos++;
	}

	return (diff);
}

/**
  * _realloc - Resize the pointer previously allocated
  * @ptr: pointer previously allocated
  * @old_size: old size of the pointer
  * @new_size: new size of the new pointer
  *
  * Return: new pointer to the memory block allocated with the new size
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nptr);
}
