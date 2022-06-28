/*
** EPITECH PROJECT, 2021
** infin_sub
** File description:
** calcul with 1 of 2 str negativ
*/

#include "../../include/bistromatic.h"

char *negative_check(char *argv1, char *argv2, int i);

char *infin_sub(char *av1, char *av2)
{
    int retenue = 0;
    char *str1 = negative_check(my_strdup(av1), my_strdup(av2), 1);
    char *str2 = negative_check(my_strdup(av2), my_strdup(av1), 2);
    for (int i = 0; str1[i] != '\0'; i++) {
        if ((retenue + str1[i] - str2[i] + 48) < 48){
            retenue += 1;
            str2[i + 1] += retenue;
            str1[i] = str1[i] - str2[i] + 58;
        } else {
            str1[i] -= str2[i] - 48;
        }
        retenue = 0;
    }
    for (int j = my_strlen(str1); str1[j] == 0 && j != 1; j--) {
        if (str1[my_strlen(str1) - 1] == 48)
            str1[my_strlen(str1) - 1] = '\0';
    }
    return (my_revstr(str1));
}
