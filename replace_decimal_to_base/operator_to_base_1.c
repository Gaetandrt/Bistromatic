/*
** EPITECH PROJECT, 2021
** operator to previous base
** File description:
** operator_to_base_1
*/

#include "../include/bistromatic.h"
#include <stdio.h>

int replace_open_parent_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '\0') {
        return (0);
    }
    if (**expr == '(') {
        **expr = OPERATOR[OP_OPEN_PARENT_IDX];
        str = *expr + 1;
        replace_open_parent_base(argv, &str);
    }
    replace_close_parent_base(argv, expr);
    return (0);
}

void replace_close_parent_base(char **argv, char **expr)
{
    char *str;

    if (**expr == ')') {
        **expr = OPERATOR[OP_CLOSE_PARENT_IDX];
        str = *expr + 1;
        replace_open_parent_base(argv, &str);
    }
    replace_plus_base(argv, expr);
}

void replace_plus_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '+') {
        **expr = OPERATOR[OP_PLUS_IDX];
        str = *expr + 1;
        replace_open_parent_base(argv, &str);
    }
    replace_sub_base(argv, expr);
}

void replace_sub_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '-') {
        **expr = OPERATOR[OP_SUB_IDX];
        str = *expr + 1;
        replace_open_parent_base(argv, &str);
    }
    replace_mult_base(argv, expr);
}
