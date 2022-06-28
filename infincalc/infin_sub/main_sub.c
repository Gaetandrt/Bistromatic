/*
** EPITECH PROJECT, 2021
** main
** File description:
** main of infin_sub_s program
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/bistromatic.h"

char *infin_sub_s(char *argv1, char *argv2);

char *my_putresult_s(char *str1, char *str2)
{
    if (str1[1] == '0' && str2[1] == '0'){
        return (infin_sub_s(str1, str2));
    } else{
        return add_less(infin_sub_s(str1, str2));
    }
    return (infin_sub_s(str1, str2));
}

int result_neg(char *av1, char *av2)
{
    av1 = less_sub(av1);
    av2 = less_sub(av2);

    if (my_strlen(av1) < my_strlen(av2))
        return (0);
    if (my_strlen(av1) > my_strlen(av2))
        return (1);
    for (int i = 0; av1[i] != '\0'; i++) {
        if (av1[i] < av2[i])
            return (0);
        if (av1[i] > av2[i])
            return (1);
    }
    return (2);
}

char *main_sub(char *str1, char *str2)
{
    if (str1[0] != '-' && str2[0] != '-'){
        if (result_neg(str2, str1) == 1){
            return add_less(infin_sub_s(str1, str2));
        } else
            return (infin_sub_s(str1, str2));
    }
    if (str1[0] == '-' && str2[0] == '-'){
        if (result_neg(str2, str1) == 1 || result_neg(str2, str1) == 2){
            return (infin_sub_s(str1, str2));
        } else
            return (my_putresult_s(str1, str2));
    } else if (str1[0] == '-' || str2[0] == '-') {
        if (str2[0] == '-'){
            return (infin_sub_s(str1, str2));
        } else if (str1[1] == 48) {
            return (infin_sub_s(str1, str2));
        } else
            return (my_putresult_s(str1, str2));
    }
    return (infin_sub_s(str1, str2));
}

