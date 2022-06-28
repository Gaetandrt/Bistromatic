/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** get the number of caracter in a tring
*/

int my_atoi(char const *str)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        result = result * 10 + str[i] - '0';
    }
    return (result);
}
