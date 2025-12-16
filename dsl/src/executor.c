#include "../inc/dsl.h"

static void op_maior(t_executor *ex)
{
	if (ex->num1 > ex->num2)
		write(STDOUT_FILENO, ex->arg1, strlen(ex->arg1));
	else
		write(STDOUT_FILENO, ex->arg2, strlen(ex->arg2));
   free_strs(ex);
}

static void op_menor(t_executor *ex)
{
	if (ex->num1 < ex->num2)
		write(STDOUT_FILENO, ex->arg1, strlen(ex->arg1));
	else
		write(STDOUT_FILENO, ex->arg2, strlen(ex->arg2));
	free_strs(ex);
}

static void op_resto(t_executor *ex)
{
	if (ex->num1 % ex->num2)
		write(STDOUT_FILENO, ex->arg1, strlen(ex->arg1));
	else
		write(STDOUT_FILENO, ex->arg2, strlen(ex->arg2));
	free_strs(ex);
}

static void op_maior_q(t_executor *ex)
{
	if (ex->num1 >= ex->num2)
		write(STDOUT_FILENO, ex->arg1, strlen(ex->arg1));
	else
		write(STDOUT_FILENO, ex->arg2, strlen(ex->arg2));
	free_strs(ex);
}

static void op_menor_q(t_executor *ex)
{
	if (ex->num1 <= ex->num2)
		write(STDOUT_FILENO, ex->arg1, strlen(ex->arg1));
	else
		write(STDOUT_FILENO, ex->arg2, strlen(ex->arg2));
	free_strs(ex);
}

static void op_equal(t_executor *ex)
{
	if (ex->num1 == ex->num2)
		write(STDOUT_FILENO, ex->arg1, strlen(ex->arg1));
	else
		write(STDOUT_FILENO, ex->arg2, strlen(ex->arg2));
	free_strs(ex);
}

void	executor(t_executor *ex)
{
	if (ex->type == OP_MAIOR)
		op_maior(ex);
	if (ex->type == OP_MENOR)
		op_menor(ex);
	if (ex->type == OP_RESTO)
		op_resto(ex);
	if (ex->type == OP_MA_EQ)
		op_maior_q(ex);
	if (ex->type == OP_ME_EQ)
		op_menor_q(ex);
	if (ex->type == EQ)
		op_equal(ex);
}
