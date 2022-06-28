/*
** EPITECH PROJECT, 2021
** operator to base
** File description:
** operator_to_base_2
*/

#include "../include/bistromatic.h"

void replace_mult_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '*') {
        **expr = OPERATOR[OP_MULT_IDX];
        str = *expr + 1;
        replace_open_parent_base(argv, &str);
    }
    replace_div_base(argv, expr);
}

void replace_div_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '/') {
        **expr = OPERATOR[OP_DIV_IDX];
        str = *expr + 1;
        replace_open_parent_base(argv, &str);
    }
    replace_mod_base(argv, expr);
}

void replace_mod_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '/') {
        **expr = OPERATOR[OP_MOD_IDX];
        str = *expr + 1;
        replace_open_parent_base(argv, &str);
    }
    str = *expr + 1;
    replace_open_parent_base(argv, &str);
}

