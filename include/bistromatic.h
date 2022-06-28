/*
** EPITECH PROJECT, 2021
** bistromatic.h
** File description:
** bistromatic
*/

#ifndef BISTROMATIC_H_
	#define BISTROMATIC_H_

#include <stdbool.h>
#define OP_OPEN_PARENT_IDX  0
#define OP_CLOSE_PARENT_IDX 1
#define OP_PLUS_IDX         2
#define OP_SUB_IDX          3
#define OP_NEG_IDX          3
#define OP_MULT_IDX         4
#define OP_DIV_IDX          5
#define OP_MOD_IDX          6

#define OPERATOR argv[2]

#define DEC_ZERO	0
#define DEC_ONE		1
#define DEC_TWO		2
#define DEC_THREE	3
#define DEC_FOUR	4
#define DEC_FIVE	5
#define DEC_SIX		6
#define DEC_SEVEN	7
#define DEC_EIGHT	8
#define DEC_NINE	9

#define DECIMAL argv[1]

#define EXIT_USAGE    84
#define EXIT_BASE     84
#define EXIT_SIZE_NEG 84
#define EXIT_MALLOC   84
#define EXIT_READ     84
#define EXIT_OPS      84
#define EXIT_SYNTAX	  84

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG        "error"

char *eval_expr(char const *base, char const *ops,
				char const *expr, unsigned int size);
int replace_open_parent(char **argv, char **expr);
void replace_close_parent(char **argv, char **expr);
void replace_plus(char **argv, char **expr);
void replace_sub(char **argv, char **expr);
void replace_mult(char **argv, char **expr);
void replace_div(char **argv, char **expr);
void replace_mod(char **argv, char **expr);
char *base_check(char **argv, char *expr);
void my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
int my_atoi(char const *str);
char *parse_expression(char **str);
char *add_less(char *str);
char *less_sub(char *str);
char *my_revstr(char *str);
char *my_strdup(char *str);
bool is_digit(char c);
char *main_add(char *str1, char *str2);
char *main_sub(char *str1, char *str2);
int replace_zero(char **argv, char **expr);
void replace_five(char **argv, char **expr);
void replace_one(char **argv, char **expr);
void replace_two(char **argv, char **expr);
void replace_three(char **argv, char **expr);
void replace_four(char **argv, char **expr);
void replace_six(char **argv, char **expr);
void replace_seven(char **argv, char **expr);
void replace_eight(char **argv, char **expr);
void replace_nine(char **argv, char **expr);
int replace_zero_base(char **argv, char **expr);
void replace_five_base(char **argv, char **expr);
void replace_one_base(char **argv, char **expr);
void replace_two_base(char **argv, char **expr);
void replace_three_base(char **argv, char **expr);
void replace_four_base(char **argv, char **expr);
void replace_six_base(char **argv, char **expr);
void replace_seven_base(char **argv, char **expr);
void replace_eight_base(char **argv, char **expr);
void replace_nine_base(char **argv, char **expr);
char *decimal_to_base(char **argv, char *result);
int replace_open_parent_base(char **argv, char **expr);
void replace_close_parent_base(char **argv, char **expr);
void replace_plus_base(char **argv, char **expr);
void replace_sub_base(char **argv, char **expr);
void replace_mult_base(char **argv, char **expr);
void replace_div_base(char **argv, char **expr);
void replace_mod_base(char **argv, char **expr);
void error_parent(char *expr);

#endif
