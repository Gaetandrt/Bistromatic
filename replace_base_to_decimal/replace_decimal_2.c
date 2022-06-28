/*
** EPITECH PROJECT, 2021
** replace decimal with the base given as argument
** File description:
** replace_decimal_2
*/

#include "../include/bistromatic.h"
#include <stdio.h>

void replace_five(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_FIVE]) {
        **expr = '5';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    replace_six(argv, expr);
}

void replace_six(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_SIX]) {
        **expr = '6';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    replace_seven(argv, expr);
}

void replace_seven(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_SEVEN]) {
        **expr = '7';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    replace_eight(argv, expr);
}

void replace_eight(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_EIGHT]) {
        **expr = '8';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    replace_nine(argv, expr);
}

void replace_nine(char **argv, char **expr)
{
    char *str;
    if (**expr == DECIMAL[DEC_NINE]) {
        **expr = '9';
        str = *expr + 1;
        replace_zero(argv, &str);
        return;
    }
    str = *expr + 1;
    replace_zero(argv, &str);
}
