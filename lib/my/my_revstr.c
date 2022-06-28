/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** print reverse string
*/
#include <stdio.h>
#include "../../include/bistromatic.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str)-1;
    char temp;

    while (i < j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
        i++;
    }
    return (str);
}
