/*
** EPITECH PROJECT, 2021
** number.c
** File description:
** number **expr
*/

#include <stdbool.h>
#include <string.h>
#include "./include/my.h"
#include <stdlib.h>
#include "../include/bistromatic.h"

char *parse_expression(char **expr);

int my_lennbr(char *str)
{
    int i = 0;

    while (is_digit(str[i])) {
        i++;
    }
    return (i);
}

char *number(char **expr)
{
    int signe = 1;
    char *result = malloc(sizeof(char) * my_lennbr(*expr) + 1);
    char *begin = result;

    while ('-' == **expr && **expr == '+') {
        if ('-' == **expr)
            signe = signe * (-1);
        *expr += 1;
    }
    if (**expr == '(') {
        *expr += 1;
        result = parse_expression(expr);
        *expr += 1;
    }
    if (signe == -1)
        *result++ = '-';
    while (is_digit(**expr)) {
        *result = **expr;
        *expr += 1;
        result++;
    }
    *result = '\0';
    return (begin);
}
