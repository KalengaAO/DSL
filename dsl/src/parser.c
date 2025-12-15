#include "../inc/dsl.h"

static void define_type(t_token **head)
{
	t_token	*token;

	token = *head;
	while(token)
	{
		if (!strncmp(token->cmd, "var", FOUR))
			token->type = VAR;
		else if (!strncmp(token->cmd, "se", THREE))
			token->type = CONDICTION;
		else if (!strncmp(token->cmd, "se_não", FIVE))
			token->type = ELSE;
		else if (!strncmp(token->cmd, "imprime", EIGHT))
			token->type = PRINT;
		else if (!strncmp(token->cmd, "%", TWO))
			token->type = OP_RESTO;
		else if (!strncmp(token->cmd, ">", TWO))
			token->type = OP_MAIOR;
		else if (!strncmp(token->cmd, "<", TWO))
			token->type = OP_MENOR;
		else if (!strncmp(token->cmd, ">=", THREE))
			token->type = OP_MA_EQ;
		else if (!strncmp(token->cmd, "<=", THREE))
			token->type = OP_MA_EQ;
		else if (!strncmp(token->cmd, "=", TWO))
			token->type = IQUAL;
		else if (token->prev->type == IQUAL && isdigit(token->cmd[ZERO]))
			token->type = ARG_NUMBER;
		else if (token->prev->type == IQUAL && isalpha(token->cmd[ZERO]))
			token->type = ARG_STR;
		else if (token->prev->type == VAR)
			token->type = TYPE;
		else
			token->type = ARG;
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
