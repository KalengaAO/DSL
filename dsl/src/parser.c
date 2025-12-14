#include "../inc/dsl.h"

static void define_type(t_token **head)
{
	t_token	*token;

	token = *head;
	while(token)
	{
		token = token->next;
	}
}

static t_token *creat_list(t_token *head, char **cmd)
{
	int			it;

	it = 0;
	head = NULL;
	while (cmd[it])
	{
		add_new(&head, cmd[it]);
		++it;
	}
	return (head);
}

t_token	*parser(char *input)
{
	t_token		*head;
	char		**cmd;

	head = NULL;
	cmd = ft_split(input, SEP);
	input = free_ptr(input);
	head = creat_list(head, cmd);
	define_type(&head);
	cmd = free_mat(cmd);
	return (head);
}
