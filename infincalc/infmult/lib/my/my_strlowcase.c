/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** my_strlowcase
*/

int my_putstr(char const *str);

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    return (str);
}
