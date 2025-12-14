#include "../inc/dsl.h"

int	main(int argc, char *argv[])
{
	char	*input;
	t_token	*token;

	if (argc == ONE)
	{
		msg_error(MANY_ARG);
		return (ONE);
	}
	input = get_input(argv[ONE]);
	lexic(input);
	token = parser(input);
	ft_remove_list(&token);
	return (ZERO);
}
