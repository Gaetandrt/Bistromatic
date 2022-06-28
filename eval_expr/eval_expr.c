/*
** EPITECH PROJECT, 2021
** eval_expr.c
** File description:
** all_calculs
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "./include/my.h"
#include "../include/bistromatic.h"

bool is_digit(char c);

char *parse_expression(char **str);

char *number(char **str);

char *parse_digit(char **str)
{
    char *result;

    if (is_digit(**str) || **str == '-') {
        result = number(str);
    }
    return (result);
}

char *parse_factor(char **str)
{
    char *result;

    if (**str == '(') {
        *str += 1;
        result = parse_expression(str);
        *str += 1;
        return (result);
    } else {
        return (parse_digit(str));
    }
}

char *parse_term(char **str)
{
    char *result = parse_factor(str);

    while (true) {

        if (**str == '/') {
            *str += 1;
            //result = main_div(result, parse_factor(str));
        }
        if (**str == '*') {
            *str += 1;
            //result = main_mult(result, parse_factor(str));
        } else if (**str == '%') {
            *str += 1;
            //result = main_mod(result, parse_factor(str));
        } else {
            break;
        }
    }
    return (result);
}

char *parse_expression(char **str)
{
    char *result = parse_term(str);

    while (true) {
        if (**str == '+') {
            *str += 1;
            result = main_add(result, parse_term(str));
        } else if (**str == '-') {
            *str += 1;
            result = main_sub(result, parse_term(str));
        } else
            break;
    }
    return (result);
}
