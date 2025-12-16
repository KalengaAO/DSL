#include "../inc/dsl.h"

int	syntax_error(t_token *head)
{
	t_token *token;
	int		n_var;

	token = head;
	n_var = ZERO;
	while (token)
	{
		if (token->type == VAR)
			++n_var;
		token = token->next;
	}
	if (n_var > TWO || n_var == ONE)
	{
		ft_erro_msg(VAR_ERROR);
		return (ONE);
	}
	return (ZERO);
}
