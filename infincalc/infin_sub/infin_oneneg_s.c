/*
** EPITECH PROJECT, 2021
** infin_oneneg_s
** File description:
** calcul with 1 arg negativ
*/

#include "../../include/bistromatic.h"

char *malloc_str_s(char *str, char *str2);

char *infin_oneneg_s(char *argv1, char *argv2)
{
    int retenue = 0;
    char *str1 = argv1;
    char *str2 = argv2;

    str1 = malloc_str_s(argv1, argv2);
    str2 = malloc_str_s(argv2, argv1);
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
