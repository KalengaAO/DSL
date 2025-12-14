#include "../inc/dsl.h"

char	*free_ptr(char *str)
{
	if (!str)
		return (NULL);
	free(str);
	return (NULL);
}

char	**free_mat(char **cmd)
{
	int		it;

	it = -1;
	if (!cmd)
		return (NULL);
	while (cmd[++it])
		free(cmd[it]);
	if (cmd)
		free(cmd);
	return (NULL);
}

void	msg_error(char *error)
{
	write(STDERR_FILENO, error, strlen(error));
}
