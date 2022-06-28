/*
** EPITECH PROJECT, 2021
** replace in a string the operator from the base
** File description:
** replace_operator_5-8
*/

#include <stdio.h>
#include "../include/bistromatic.h"

void replace_mult(char **argv, char **expr)
{
    char *str;

    if (**expr == OPERATOR[OP_MULT_IDX]) {
        **expr = '*';
        str = *expr + 1;
        replace_open_parent(argv, &str);
    }
    replace_div(argv, expr);
}

void replace_div(char **argv, char **expr)
{
    char *str;

    if (**expr == OPERATOR[OP_DIV_IDX]) {
        **expr = '/';
        str = *expr + 1;
        replace_open_parent(argv, &str);
        return;
    }
    replace_mod(argv, expr);
}

void replace_mod(char **argv, char **expr)
{
    char *str;

    if (**expr == OPERATOR[OP_MOD_IDX]) {
        **expr = '/';
        str = *expr + 1;
        replace_open_parent(argv, &str);
        return;
    }
    str = *expr + 1;
    replace_open_parent(argv, &str);
}
