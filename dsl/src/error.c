#include "../inc/dsl.h"

char	*free_ptr(char *str)
{
	if (!str)
		return (NULL);
	free(str);
	return (NULL);
}

void	msg_error(char *error)
{
	write(STDERR_FILENO, error, strlen(error));
}
