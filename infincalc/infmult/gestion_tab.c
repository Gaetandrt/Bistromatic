/*
** EPITECH PROJECT, 2021
** gestion_tab.c
** File description:
** gestion_tab
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/my.h"

char *less_sub(char *str);

char *add_less(char *str);

int cv(char str)
{
    int a = str - 48;

    return (a);
}

char *remplir_zero(int len_total_tab1_2) 
{
    char *buffer = malloc(len_total_tab1_2 + 2);

    for (int i = 0; i < len_total_tab1_2; i++) {
        buffer[i] = '0';
    }
    buffer[len_total_tab1_2] = '\0';
    return buffer;
}

void calcul_mult(char *tab_1, char *tab_2, char *final_result)
{
    for (int a = 0; a < my_strlen(tab_2); a++) {
        int retenue_prod = 0;
        int retenue_somme = 0;

        for (int i = my_strlen(tab_1) - 1; i >= 0; i--) {
            int calc_prod = (tab_1[i] - '0') * cv(tab_2[a]) + retenue_prod;

            retenue_prod = calc_prod / 10;
            int calc_som = (calc_prod % 10)  + (final_result[i + a + 1] - '0') + retenue_somme;

            final_result[i + a + 1] = calc_som % 10 + '0';    
            retenue_somme = calc_som / 10;
        }
        retenue_somme += retenue_prod;
        for (int j = a; retenue_somme > 0 && j >= 0; j--) {
            int v = (final_result[j] - '0') + retenue_somme;

            final_result[j] = v % 10 + '0';
            retenue_somme = v / 10;
        }
    }
}

void test(char *tab_1, char *tab_2)
{
    if (tab_1[0] == '-' && tab_1[1] == '1') {
        if (tab_2[0] == '0') {
        my_putchar('0');
        } else {
            char *affichage0 = add_less(tab_2);
            my_putstr(affichage0);
        }
    } 
    if (tab_2[0] == '-' && tab_2[1] == '1') {
        if (tab_1[0] == '0') {
            my_putchar('0');
        } else {
            char *affichage1 = add_less(tab_1);
            my_putstr(affichage1);
        }
    } 
    if ((tab_1[0] == '-' && tab_1[1] == '0') || (tab_2[0] == '-' && tab_2[1] == '0')) {
        my_putchar('0');
    }
}
