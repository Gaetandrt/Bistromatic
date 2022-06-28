/*
** EPITECH PROJECT, 2021
** infin_neg_s
** File description:
** calcul with 2 arg negativ
*/

#include "../../include/bistromatic.h"

char *negative_check_s(char *argv1, char *argv2, int i);

char *infin_neg_s(char *argv1, char *argv2)
{
    int retenue = 0;
    char *str1 = negative_check_s(my_strdup(argv1), my_strdup(argv2), 1);
    char *str2 = negative_check_s(my_strdup(argv2), my_strdup(argv1), 2);
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
