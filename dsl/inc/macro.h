#ifndef MACRO_H
#define MACRO_H

#include "dsl.h"

# define		MANY_ARG	"DSL: error argument: try ./dsl"
# define		ERROR_FILE	"error to open file"
# define		LINE_LONG	"line to long"
# define		DSL_BUF		"dsl_buf"
# define		BUFFER_SIZE	42
# define		SEP			-1
# define		VAR_ERROR	"\033[31m dsl: syntax error: more var or no argument \033[0m"
# define		ARG_REQ		"\033[31m dsl: syntax error: missing argument after var \033[0m"
# define		PRINT_ERROR	"\033[31m dsl: syntax error: There's no argument after print \033[0m"
# define		OP_ERROR	"\033[31m dsl: syntax error: require arguments after if \033[0m"
# define		IF_ERROR	"\033[31m dsl: syntax error: larger condition structure \033[0m"

#endif
