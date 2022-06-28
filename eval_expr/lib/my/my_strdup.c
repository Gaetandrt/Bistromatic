/*
** EPITECH PROJECT, 2021
** my str dup
** File description:
** my_strdup
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/bistromatic.h"

char *my_strdup(char *str)
{
    char *str2 = NULL;
    str2 = malloc(my_strlen(str) + 1);
    str2[my_strlen(str)] = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        str2[i] = str[i];
    }
    return (str2);
}
