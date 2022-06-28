/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** return revstr
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int t = my_strlen(str) - 1, tmp, i = 0;

    while (i < t){
        tmp = str[t];
        str[t] = str[i];
        str[i] = tmp;
        t--;
        i++;
    }
    return (str);
}
