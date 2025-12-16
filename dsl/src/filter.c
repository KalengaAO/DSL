#include "../inc/dsl.h"

void filter(t_token *token)
{
	t_executor	ex;
	t_token 	*tmp;

	ex = (t_executor){0};
	tmp = token;
	while (tmp)
	{
		if (tmp->type == PRINT && !tmp->prev 
			&& tmp->next->type == ARG)
		{
			puts(tmp->next->cmd);
			if (!tmp->next->next)
				return ;
		}
		if (tmp->type == VAR && !tmp->prev)
		{
			if (isdigit(tmp->next->next->next->cmd[ZERO]))
				ex.num1 = atoi(tmp->next->next->next->cmd);
			if (isalpha(tmp->next->next->next->cmd[ZERO]))
				ex.str1 = strdup(tmp->next->next->next->cmd);
		}
		if (tmp->type == VAR && tmp->prev)
		{
			if (isdigit(tmp->next->next->next->cmd[ZERO]))
				ex.num2 = atoi(tmp->next->next->next->cmd);
			if (isalpha(tmp->next->next->next->cmd[ZERO]))
				ex.str2 = strdup(tmp->next->next->next->cmd);
		}
		if (tmp->type == CONDICTION)
			ex.type = tmp->next->next->type;
		if (tmp->type == PRINT && tmp->next->type == ARG
			&& tmp->next->next)
			ex.arg1 = strdup(tmp->next->cmd);
		if (tmp->type == PRINT && !tmp->next->next
			&& tmp->next->type == ARG)
			ex.arg2 = strdup(tmp->next->cmd);
		tmp = tmp->next;
	}
	executor(&ex);
}
