/*
** EPITECH PROJECT, 2021
** syntax_error
** File description:
** syntax_error
*/

#include <stdlib.h>
#include "include/bistromatic.h"

void error_parent(char *expr)
{
    int i = 0;

    if (expr[0] == '8') {
        my_putstr(SYNTAX_ERROR_MSG);
        exit (EXIT_BASE);
    }
    while (expr[i] != '(') {
        i++;
    }
    if (is_digit(expr[i - 1])) {
        my_putstr("syntax error");
        exit (EXIT_SYNTAX);
    }
}
