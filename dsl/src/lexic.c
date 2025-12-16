
#include "../inc/dsl.h"

static int	removed_tab(char c)
{
	return (c == '\t' || c == '\n');
}

static void	trim_input(char *input)
{
	int		it;

	it = 0;
	while (input[it])
	{
		if (removed_tab(input[it]))
			input[it] = 32;
		++it;
	}
}

void	lexic(char *input)
{
	int		it;

	it = 0;
	trim_input(input);
	while (input[it])
	{
		if (isspace(input[it]))
			input[it] = SEP;
		if (input[it] == '\"')
		{
			input[it] = '\a';
			while (input[it] && input[it] != '\"')
				++it;
			input[it] = '\a';
		}
		++it;
	}
}
