/*
** EPITECH PROJECT, 2021
** replace decimal with the base
** File description:
** replace_decimal_1
*/

#include "../include/bistromatic.h"
#include <stdio.h>

int replace_zero(char **argv, char **expr)
{
    char *str;

    if (**expr == '\0') {
        return (0);
    }
    if (**expr == DECIMAL[DEC_ZERO]) {
        **expr = '0';
        str = *expr + 1;
        replace_zero(argv, &str);
    }
    replace_one(argv, expr);
    return (0);
}

void replace_one(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_ONE]) {
        **expr = '1';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    replace_two(argv, expr);
}

void replace_two(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_TWO]) {
        **expr = '2';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    replace_three(argv, expr);
}

void replace_three(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_THREE]) {
        **expr = '3';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    replace_four(argv, expr);
}

void replace_four(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_FOUR]) {
        **expr = '4';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    replace_five(argv, expr);
}
