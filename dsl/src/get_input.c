#include "../inc/dsl.h"

void	init_char(t_dsl_c *dsl)
{
	dsl->b_read = ONE;
	dsl->buffer = (char *)calloc((BUFFER_SIZE + 1), sizeof(char));
	dsl->input = (char *)calloc(ONE, sizeof(char));
	if (!dsl->buffer || !dsl->input)
	{
		perror("DSL: in get input ");
		exit(ONE);
	}
}

char	*get_input(char *file)
{
	t_dsl_c		dsl;
	char		*tmp;

	dsl = (t_dsl_c){0};
	dsl.fd = open(file, O_RDONLY);
	if (dsl.fd < ZERO)
	{
		msg_error(ERROR_FILE);
		exit(ONE);
	}
	init_char(&dsl);
	while (dsl.b_read != 0)
	{
		dsl.b_read = read(dsl.fd, dsl.buffer, BUFFER_SIZE);
		if (dsl.b_read == -1)
			break ;
		dsl.buffer[dsl.b_read] = '\0';
		tmp = dsl.input;
		dsl.input = ft_strjoin(tmp, dsl.buffer);
		tmp = free_ptr(tmp);
	}
	close(dsl.fd);
	dsl.buffer = free_ptr(dsl.buffer);
	return (dsl.input);
}
