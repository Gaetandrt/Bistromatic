/*
** EPITECH PROJECT, 2021
** parsing function for operator
** File description:
** operator_parse
*/

#include <stdio.h>
#include "include/bistromatic.h"

char *base_check(char **argv, char *expr)
{
    replace_open_parent(argv, (char **) &expr);
    replace_zero(argv, (char **) &expr);
    return (expr);
}
