#include "shell.h"

/**
 * bfree - frees a ptr and changes address to NULL
 * @ptr: address of ptr
 * Return: 1 or 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
