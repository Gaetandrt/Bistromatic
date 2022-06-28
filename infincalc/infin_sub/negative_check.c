/*
** EPITECH PROJECT, 2021
** negative_check
** File description:
** check for negative str
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/bistromatic.h"

char *malloc_strsub_s(char *str, char *str2);

int str_comp_s(char *str1, char *str2);

char *negative_check_s(char *argv1, char *argv2, int i)
{
    char *str1 = NULL;
    if (i == 1 && str_comp_s(argv1, argv2) == 0){
        str1 = malloc_strsub_s(argv2, argv1);
    } else if (i == 2 && str_comp_s(argv2, argv1) == 0){
        str1 = malloc_strsub_s(argv2, argv1);
    } else
        str1 = malloc_strsub_s(argv1, argv2);
    return (str1);
}
