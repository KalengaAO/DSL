#include "../inc/dsl.h"

int	main(int argc, char *argv[])
{
	char	*input;

	if (argc == ONE)
	{
		msg_error(MANY_ARG);
		return (ONE);
	}
	input = get_input(argv[ONE]);
	lexic(input);
	parser(input);
	return (ZERO);
}
