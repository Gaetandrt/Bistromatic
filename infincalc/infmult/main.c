/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main_func
*/

#include <stdlib.h>
#include "./include/my.h"
#include <unistd.h>

void tab_copy(char **argv);

void inf_calcul(char **argv)
{
    tab_copy(argv);
}

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 3) {
        return 84;
    } else {
        inf_calcul(argv);
    }
    return 0;
}
