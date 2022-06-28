/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** my strupcase
*/

int my_putstr(char const *str);

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
