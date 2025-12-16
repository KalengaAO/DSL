#include "../inc/dsl.h"

void	ft_erro_msg(char const *error)
{
	write(STDERR_FILENO, error, strlen(error));
}

void	free_strs(t_executor *ex)
{
	ex->str1 = free_ptr(ex->str1);
	ex->str1 = free_ptr(ex->str2);
	ex->arg1 = free_ptr(ex->arg1);
	ex->arg2 = free_ptr(ex->arg2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)calloc((strlen(s1) + strlen(s2) + 1), sizeof(*s3));
	if (!s3)
		return (NULL);
	i = 0;
	while (*s1)
		s3[i++] = *s1++;
	while (*s2)
		s3[i++] = *s2++;
	s3[i] = '\0';
	return (s3);
}
