/*
** EPITECH PROJECT, 2021
** main
** File description:
** main of infin_add program
*/
#include <unistd.h>
#include <stdio.h>
#include "../../include/bistromatic.h"

char *infin_add(char *av1, char *av2);

int str_comp(char *str1, char *str2);

char *my_putresult2(char *str1, char *str2)
{
    if (str1[1] == '0' && str2[1] == '0'){
        return infin_add(str1, str2);
    } else{
        return add_less(infin_add(str1, str2));
    }
    return (0);
}

int condition_check(char *str1, char *str2)
{
    if (str1[0] != 45 && str2[0] == 45)
        return (1);
    if (str1[0] == 45 && str2[0] != 45)
        return (1);
    return (0);
}

int result_negative(char *av1, char *av2)
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

char *main_add(char *str1, char *str2)
{
    if (condition_check(str1, str2) == 1){
        if (result_negative(str1, str2) == 1 && str1[0] == '-'){
            return add_less(infin_add(str1, str2));
        } else if (result_negative(str2, str1) == 1 && str2[0] == '-'){
            return add_less(infin_add(str1, str2));
        } else {
            return infin_add(str1, str2);
        }
    } else if (str1[0] == 45 && str2[0] == 45){
        my_putresult2(str1, str2);
    } else {
        return infin_add(str1, str2);
    }
    return (infin_add(str1, str2));
}
