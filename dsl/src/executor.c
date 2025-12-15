#include "../inc/dsl.h"

static void maior_que(int a, int b, char *yes, char *not)
{
	if (a > b)
		puts(yes);
	else
		puts(not);
}

void executor(t_token *token)
{
	t_executor	ex;
	t_token 	*tmp;
	int			it;

	ex = (t_executor){0};
	tmp = token->next;
	it = 0;
	while (tmp)
	{
		if (tmp->prev->type == IQUAL && tmp->type == ARG_NUMBER)
		{
			ex.num1 = atoi(tmp->cmd);
			while (tmp->type != ARG_NUMBER)
				tmp = tmp->next;
			ex.num2 = atoi(tmp->cmd);
		}/*
		else if (tmp->prev->type == IQUAL && tmp->type == ARG_STR)
		{
			ex.str1 = strdup(tmp->cmd);
			while (tmp->type != ARG_STR)
				tmp = tmp->next;
			ex.str2 = strdup(tmp->cmd);
		}
		else if (tmp->type == OP_MAIOR)
			ex.type = tmp->type;
		else if (tmp->type == ARG && tmp->next->type == ELSE)
			ex.arg1 = strdup(tmp->cmd);
		else if (tmp->type == ARG && !tmp->next)
			ex.arg2 = strdup(tmp->cmd);*/
		tmp = tmp->next;
	}
	maior_que(ex.num1, ex.num2, ex.arg1, ex.arg2);
}
