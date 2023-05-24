#include "shell.h"

/**
  * tokenize - extracts tokens from a string
  * @str: string
  * @del: delimiter
  * @len: token number
  *
  * Return: array of tokens
  */
char **tokenize(char *str, char *del, int len)
{
	char **tokens = NULL, *token = NULL, *temp = NULL;
	int i = 0;

	tokens = malloc(sizeof(char *) * (len + 1));
	if (!tokens)
		return (NULL);

	str = remove_new_line(str);
	temp = _strdup(str);
	token = strtok(temp, del);

	while (token)
	{
		tokens[i] = _strdup(token);
		token = strtok(NULL, del);
		i++;
	}

	tokens[i] = NULL;
	free(temp);
	return (tokens);
}
