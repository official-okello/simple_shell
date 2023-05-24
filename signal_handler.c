#include "shell.h"

/**
  * signal_handler - Handles signals
  * @sig_id: signal identifier
  *
  * Return: None
  */
void signal_handler(int sig_id)
{
	if (sig_id == SIGINT)
		write(STDOUT_FILENO, "\n($) ", 5);
}
