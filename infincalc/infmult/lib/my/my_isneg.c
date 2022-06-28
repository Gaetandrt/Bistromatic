/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** my isneg
*/

#include <stdio.h>

void my_putchar(char ch);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
