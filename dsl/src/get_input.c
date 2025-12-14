#include "../inc/dsl.h"

static void error_in_get_input(t_dsl_c *dsl)
{
	dsl->input = free_ptr(dsl->input);
	msg_error(LINE_LONG);
	close(dsl.fd);
	exit(ONE);
}

t_dsl_c	get_input(char *file)
{
	t_dsl_c		dsl;
	char		buffer[N_LINE];

	dsl = (t_dsl_c){ZERO};
	dsl.fd = open(file, O_READ);
	if (dsl.fd < ZERO)
	{
		msg_error(ERROR_FILE);
		exit(ONE);
	}
	while (true)
	{
		dsl.b_read = read(dsl.fd, buffer, strlen(buffer));
		if (dsl.b_read > TEN)
			error_in_get_input(&dsl);
		else if (dsl.b_read < ZERO)
			break;
		dsl.n_line++;
		dsl.input = ft_strjoin(dsl.input, buffer);
	}
	close(dsl.fd);
	return (dsl);
}
