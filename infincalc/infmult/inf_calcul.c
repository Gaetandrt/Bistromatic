/*
** EPITECH PROJECT, 2021
** add.c
** File description:
** add
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/my.h"

int long_tab_final(char *tab_1, char *tab_2);

int cv(char str);

void remplir_f_res(char * f_res, int l_t);

int my_putstr_remix(char const *str);

void double_neg(char *tab_1, char *tab_2);

void multiplication(char *tab_1, char *tab_2);

void solo_neg(char *tab_1, char *tab_2);

void calcul(char *tab_1, char *tab_2)
{
    if (tab_1[0] == '-' && tab_2[0] == '-') {
        double_neg(tab_1, tab_2);
    } else if (tab_1[0] == '-' || tab_2[0] == '-') {
        solo_neg(tab_1, tab_2);
    } else {
        multiplication(tab_1, tab_2);
    }
}

void tab_copy(char **argv)
{
    char *tab_1 = malloc(sizeof(char) * (my_strlen(argv[1]) + 2));
    char *tab_2 = malloc(sizeof(char) * (my_strlen(argv[2]) + 2));

    my_strcpy(tab_1, argv[1]);
    my_strcpy(tab_2, argv[2]);
    calcul(tab_1, tab_2);
}
