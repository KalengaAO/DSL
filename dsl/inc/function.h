#ifndef FUNCTION_H
# define FUNCTION_H

#include "dsl.h"

void		lexic(char *input);
char		*free_ptr(char *str);
t_token		*parser(char *input);
char		*get_input(char *file);
void		filter(t_token *token);
void		msg_error(char *error);
char		**free_mat(char **cmd);
void		executor(t_executor *ex);
void		free_strs(t_executor *ex);
int			syntax_check(t_token *token);
void		ft_erro_msg(char const *error);
void		ft_remove_list(t_token **head);
char		**ft_split(char const *s, char c);
void		add_new(t_token **head, char *cmd);
char		*ft_strjoin(char const *s1, char const *s2);

#endif
