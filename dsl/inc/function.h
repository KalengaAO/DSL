#ifndef FUNCTION_H
# define FUNCTION_H

#include "dsl.h"

void		lexic(t_dsl_c *dsl);
char		*free_ptr(char *str);
t_dsl_c		get_input(char *file);
void		msg_error(char *error);
char		*ft_strjoin(char *s1, char *s2);

#endif
