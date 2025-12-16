#include "../inc/dsl.h"

static int error_syntax(char const *error)
{
	ft_erro_msg(error);
	return (ONE);
}

static int check_operator(int type)
{
 	if (type == OP_MAIOR)
		return (ONE);
	else if (type == OP_MENOR)
		return (ONE);
	else if (type == OP_RESTO)
		return (ONE);
 	else if (type == OP_MA_EQ)
		return (ONE);
	else if (type == OP_ME_EQ)
		return (ONE);
	else
		return (ZERO);
}

int	syntax_check(t_token *head)
{
	t_token *token;
	int		n_var;
	int		n_cond;

	token = head;
	n_var = ZERO;
	n_cond = ZERO;
	while (token)
	{
		if (token->type == VAR)
			++n_var;
		if (token->type == CONDICTION || token->next->type == ELSE)
			++n_cond;
		if (token->type == PRINT
			&& (!token->next || token->next->type != ARG))
			return (error_syntax(PRINT_ERROR));
		if (token->type == CONDICTION && token->next->type == TYPE
			&& !check_operator(token->next->next->type))
			return (error_syntax(OP_ERROR));
		token = token->next;
	}
	if (n_var > TWO || n_var == ONE)
		return (error_syntax(VAR_ERROR));
	if (n_cond > TWO)
		return (error_syntax(IF_ERROR));
	return (ZERO);
}
