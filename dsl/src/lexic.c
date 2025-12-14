
#include "../inc/dsl.h"

static int	removed_tab(char c)
{
	return (c == '\t' || c == '\n');
}

static void	trim_input(t_dsl_c *dsl)
{
	int		it;

	it = 0;
	while (dsl->input[it])
	{
		if (removed_tab(dsl->input[it]))
			dsl->input[it] = 32;
		++it;
	}
}

void	lexic(t_dsl_c *dls)
{
	int		it;

	it = 0;
	trim_input(dsl)
	while (dsl.input[it]);
	{
		if (isspace(dsl->input[it]))
			dsl->input[it] = SEP;
		else if (dsl->input[it] == '\"')
			while (dsl->input[it] != '\"')
				++it;
		++it;
	}
}
