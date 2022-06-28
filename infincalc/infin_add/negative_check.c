/*
** EPITECH PROJECT, 2021
** negative_check
** File description:
** check for negative str
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/bistromatic.h"

char *malloc_strsub(char *str, char *str2);

int str_comp(char *str1, char *str2)
{
    str1 = less_sub(str1);
    str2 = less_sub(str2);
    if (my_strlen(str1) < my_strlen(str2))
        return (2);
    if (my_strlen(str1) > my_strlen(str2))
        return (0);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] < str2[i])
            return (1);
        if (str1[i] > str2[i])
            return (0);
    }
    return (1);
}

char *negative_check(char *argv1, char *argv2, int i)
{
    char *str1 = NULL;
    if (argv2[0] == 45 && i == 2 && str_comp(argv2, argv1) != 0){
        str1 = malloc_strsub(argv2, argv1);
    } else if (argv1[0] == 45 && i == 1 && str_comp(argv1, argv2) != 0){
        str1 = malloc_strsub(argv2, argv1);
    } else {
        if (argv2[0] == 45 && str_comp(argv2, argv1) == 0 && i == 1)
            str1 = malloc_strsub(argv2, argv1);
        else if (argv1[0] == 45 && str_comp(argv1, argv2) == 0 && i == 2)
            str1 = malloc_strsub(argv2, argv1);
        else
            str1 = malloc_strsub(argv1, argv2);
    }
    return (str1);
}
