#include "../inc/dsl.h"

void ft_remove_list(t_token **head)
{
	t_token		*token;
	t_token		*tmp;

	if (!head || !*head)
		return ;
	token = *head;
	while (token)
	{
		tmp = token;
		tmp->cmd = free_ptr(tmp->cmd);
		token = token->next;
		free(tmp);
	}
	*head = NULL;
}

void add_new(t_token **head, char *cmd)
{
	t_token		*new;
	t_token		*tmp;

	new = calloc(ONE, sizeof(t_token));
	new->next = NULL;
	new->prev = NULL;
	new->type = ZERO;
	new->cmd = strdup(cmd);
	if (!*head)
	{
		*head = new;
		return ;
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
}
