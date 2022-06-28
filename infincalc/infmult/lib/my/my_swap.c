/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** my swap
*/

#include <stdio.h>

void my_swap(int *a, int *b)
{
    int swapping;

    swapping = *a;
    *a = *b;
    *b = swapping;
}
