#ifndef FUNCTION_H
# define FUNCTION_H

#include "dsl.h"

void		lexic(char *input);
char		*free_ptr(char *str);
t_token		*parser(char *input);
char		*get_input(char *file);
void		msg_error(char *error);
char		**free_mat(char **cmd);
void		ft_remove_list(t_token **head);
char		**ft_split(char const *s, char c);
void		add_new(t_token **head, char *cmd);
char		*ft_strjoin(char const *s1, char const *s2);

#endif
