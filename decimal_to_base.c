/*
** EPITECH PROJECT, 2021
** decimal to base
** File description:
** decimal_to_base
*/

#include "include/bistromatic.h"
#include <stdio.h>

char *decimal_to_base(char **argv, char *result)
{
    replace_zero_base(argv, (char **) &result);
    replace_open_parent_base(argv, (char **) &result);

    return (result);
}
