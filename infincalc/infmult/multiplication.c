/*
** EPITECH PROJECT, 2021
** gestion_tab.c
** File description:
** gestion_tab
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>
#include <string.h>

int cv(char str);

char *less_sub(char *str);

char *add_less(char *str);

char *remplir_zero(int len_total_tab1_2);

void calcul_mult(char *tab_1, char *tab_2, char *final_result);

void test(char *tab_1, char *tab_2);

void multiplication(char *tab_1, char *tab_2)
{
    int len_total_tab1_2 = my_strlen(tab_1) + my_strlen(tab_2);
    char *final_result = remplir_zero(len_total_tab1_2);

    calcul_mult(tab_1, tab_2, final_result);
    if (final_result[0] == '0' && final_result[1] >= 48) {
        final_result++;
    }
    my_putstr(final_result);
}

void double_neg(char *tab_1, char *tab_2)
{
    tab_1 = less_sub(tab_1);
    tab_2 = less_sub(tab_2);
    int len_1 = my_strlen(tab_1);
    int len_2 = my_strlen(tab_2);
    int len_total_tab1_2 = len_1 + len_2;
    char *final_result = remplir_zero(len_total_tab1_2);

    calcul_mult(tab_1, tab_2, final_result);
    if (final_result[0] == '0' && final_result[1] >= 48) {
        final_result++;
    }
    my_putstr(final_result);
}

void solo_neg(char *tab_1, char *tab_2)
{ 
    if (tab_1[0] == '-' && tab_1[1] == '1') {
        test(tab_1, tab_2);
    } else {
        tab_1 = less_sub(tab_1);
        tab_2 = less_sub(tab_2);
        int len_1 = my_strlen(tab_1);
        int len_2 = my_strlen(tab_2);
        int len_total_tab1_2 = len_1 + len_2;
        char *final_result = remplir_zero(len_total_tab1_2);

        calcul_mult(tab_1, tab_2, final_result);
        char *affichage = final_result;
        if (affichage[0] == '0' && affichage[1] >= 48) {
            affichage++;
        }
        char *final = add_less(affichage);
        my_putstr(final);
    }
}
