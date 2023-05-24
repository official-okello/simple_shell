#include "shell.h"

/**
  * frees_get_env - frees environment
  * @env_path: environment variable to free
  *
  * Return: None
  */
void frees_get_env(char *env_path)
{
	int i;

	for (i = 4; i >= 0; i--)
		env_path--;

	free(env_path);
}

/**
  * frees_tokens - frees tokens
  * @tokns: tokens
  *
  * Return: None
  */
void frees_tokens(char **tokns)
{
	char **temp = tokns;

	if (tokns)
	{
		while (*tokns)
			free(*tokns++);

		free(temp);
	}
}
