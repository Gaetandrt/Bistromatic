/*
** EPITECH PROJECT, 2021
** less sub
** File description:
** remove negativ sign
*/

char *less_sub(char *str)
{
    if (str[0] == 45)
        str++;
    return (str);
}