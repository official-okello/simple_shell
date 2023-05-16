#include "shell.h"

/**
*greetings - greets the user
*@uname: username to be greeted
*Return: none
*/

void greetings(uname)
{
	printf("Hello, %s", uname);
}

/**
*main - main entry point
*Return: 0
*/

int main(void)
{
	char *uname = "Julius;

	greetings(uname);
	return (0);
}
