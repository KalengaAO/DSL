#include "../inc/dsl.h"

int	main(int argc, char *argv[])
{
	t_dsl_c		dsl;

	if (argc > ONE)
	{
		msg_error(MANY_ARG);
		return (ONE);
	}
	dsl = get_input(argv[ONE]);
	lexic(&dsl);
	return (ZERO);
}
