/*
** EPITECH PROJECT, 2021
** replace decimal from original base
** File description:
** decimal_to_base_1
*/

#include <stdio.h>
#include "../include/bistromatic.h"

int replace_zero_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '\0') {
        return (0);
    }
    if (**expr == '0') {
        **expr = DECIMAL[DEC_ZERO];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_one_base(argv, expr);
    return (0);
}

void replace_one_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '1') {
        **expr = DECIMAL[DEC_ONE];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_two_base(argv, expr);
}

void replace_two_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '2') {
        **expr = DECIMAL[DEC_TWO];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_three_base(argv, expr);
}

void replace_three_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '3') {
        **expr = DECIMAL[DEC_THREE];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_four_base(argv, expr);
}

void replace_four_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '4') {
        **expr = DECIMAL[DEC_FOUR];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_five_base(argv, expr);
}
