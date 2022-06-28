/*
** EPITECH PROJECT, 2021
** replace in a string the operator from the base
** File description:
** replace_operator_1-3
*/

#include <stdio.h>
#include "../include/bistromatic.h"

int replace_open_parent(char **argv, char **expr)
{
    char *str;
    if (**expr == '\0') {
        return (0);
    }
    if (**expr == OPERATOR[OP_OPEN_PARENT_IDX]) {
        **expr = '(';
        str = *expr + 1;
        replace_open_parent(argv, &str);
    }
    replace_close_parent(argv, expr);
    return (0);
}

void replace_close_parent(char **argv, char **expr)
{
    char *str;
    if (**expr == OPERATOR[OP_CLOSE_PARENT_IDX]) {
        **expr = ')';
        str = *expr + 1;
        replace_open_parent(argv, &str);
        return;
    }
    replace_plus(argv, expr);
}

void replace_plus(char **argv, char **expr)
{
    char *str;

    if (**expr == OPERATOR[OP_PLUS_IDX]) {
        **expr = '+';
        str = *expr + 1;
        replace_open_parent(argv, &str);
        return;
    }
    replace_sub(argv, expr);
}

void replace_sub(char **argv, char **expr)
{
    char *str;

    if (**expr == OPERATOR[OP_SUB_IDX]) {
        **expr = '-';
        str = *expr + 1;
        replace_open_parent(argv, &str);
        return;
    }
    replace_mult(argv, expr);
}
