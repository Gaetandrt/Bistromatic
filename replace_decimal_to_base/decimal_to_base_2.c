/*
** EPITECH PROJECT, 2021
** decimal to the original base
** File description:
** decimal_to_base_2
*/

#include <stdio.h>
#include "../include/bistromatic.h"

void replace_five_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '5') {
        **expr = DECIMAL[DEC_FIVE];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_six_base(argv, expr);
}

void replace_six_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '6') {
        **expr = DECIMAL[DEC_SIX];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_seven_base(argv, expr);
}

void replace_seven_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '7') {
        **expr = DECIMAL[DEC_SEVEN];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_eight_base(argv, expr);
}

void replace_eight_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '8') {
        **expr = DECIMAL[DEC_EIGHT];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    replace_nine_base(argv, expr);
}

void replace_nine_base(char **argv, char **expr)
{
    char *str;

    if (**expr == '9') {
        **expr = DECIMAL[DEC_NINE];
        str = *expr + 1;
        replace_zero_base(argv, &str);
    }
    str = *expr + 1;
    replace_zero_base(argv, &str);
}
