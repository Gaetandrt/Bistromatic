/*
** EPITECH PROJECT, 2021
** malloc_strneg
** File description:
** for malloc strneg
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/bistromatic.h"

char *add_mallocneg(char *str, int nb)
{
    char *str2;
    int i = 0;

    str = my_revstr(str);
    str2 = malloc(my_strlen(str) + nb + 1);
    while (i != my_strlen(str)) {
        str2[i] = str[i];
        i++;
    }
    while (i != my_strlen(str) + nb) {
        str2[i] = '0';
        i++;
    }
    str2[my_strlen(str) + nb] = 0;
    return (str2);
}

char *malloc_strneg(char *str, char *str2)
{
    char *str3;
    int i = 0;

    str++;
    str2++;
    if (my_strlen(str) < my_strlen(str2)) {
        str = my_revstr(str);
        str3 = malloc(my_strlen(str2) + 2);
        while (i != my_strlen(str)) {
            str3[i] = str[i];
            i++;
        }
        while (i != my_strlen(str2) + 1)
            str3[i++] = 48;
        str3[my_strlen(str2) + 1] = 0;
        return (str3);
    }
    str = add_mallocneg(str, 1);
    return (str);
}
