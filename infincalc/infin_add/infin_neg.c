/*
** EPITECH PROJECT, 2021
** infin_neg
** File description:
** calcul with 2 negative str
*/

#include "../../include/bistromatic.h"

char *malloc_strneg(char *str, char *str2);

char *infin_neg(char *av1, char *av2)
{
    int retenue = 0;
    char *str1 = av1;
    char *str2 = av2;

    str1 = malloc_strneg(av1, av2);
    str2 = malloc_strneg(av2, av1);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (retenue + str1[i] + str2[i] > 105) {
            retenue += ((str1[i] + str2[i] - 96) / 10);
            str1[i + 1] += retenue;
            str1[i] = ((str1[i] + str2[i] - 96) % 10) + 48;
        } else
            str1[i] += (str2[i] - 48);
        retenue = 0;
    }
    for (int j = my_strlen(str1); str1[j] == 0 && j != 1; j--) {
        if (str1[my_strlen(str1) - 1] == 48)
            str1[my_strlen(str1) - 1] = '\0';
    }
    return (my_revstr(str1));
}
