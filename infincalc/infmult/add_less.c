/*
** EPITECH PROJECT, 2021
** add_less
** File description:
** add less on str
*/

#include "./include/my.h"
#include <stdlib.h>

char *add_less(char *str)
{
    char *str2 = malloc(sizeof(char) * my_strlen(str) + 2);
    int j = 1;

    str2[0] = '-';
    str2[my_strlen(str) + 1] = '\0';
    for(int i = 0; str[i] != '\0'; i++)
    {
        str2[j] = str[i];
        j++;
    }
    return str2;
}
