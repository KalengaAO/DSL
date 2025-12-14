#include "../inc/dsl.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		it;
	int		ij;
	int		len;

	str = NULL;
	len = strlen(s1) + strlen(s2) + ONE;
	str = calloc(len, sizeof(char));
	if (!str)
	{
		perror("dsl: in strjoin: ");
		exit(ONE);
	}
	ij = 0;
	it = -1;
	if (s1)
		while (s1[ij])
			str[++it] = s1[ij++];
	ij = 0;
	if (s2)
		while (s2[ij])
			str[it++] = s2[ij++];
	str[it] = '\0';
	s1 = free_ptr(s1);
	return (str);
}
