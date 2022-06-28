/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display the string
*/

#include <stdio.h>

void my_putchar(char ch);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return *str;
}
