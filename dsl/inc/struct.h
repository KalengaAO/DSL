#ifndef STRUCT_H
# define STRUCT_H

#include "dsl.h"

typedef struct s_dsl_c
{
	int		fd;
	int		b_read;
	char	*buffer;
	char	*input;
}			t_dsl_c;

typedef struct s_token
{
	int		type;
	char	**cmd;
	struct	s_token *next;
	struct	s_token *prev;
}				t_token;

typedef enum {
	ZERO,  ONE, TWO, THREE,
	FOUR, FIVE, SIX, SEVEN,
	EIGHT, NINE, TEN
} t_number;

typedef enum t_type{
	CONDICTION, ARG_STR,
	ARG_NUMBER, VAR, IQUAL,
	OP_MAIOR, OP_MENOR, OP_RESTO,
	OP_MAQ, OP_MEQ, PRINT, ARG
}		t_type;

#endif
