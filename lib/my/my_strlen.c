/*
** EPITECH PROJECT, 2021
** Day04
** File description:
** Task03
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
