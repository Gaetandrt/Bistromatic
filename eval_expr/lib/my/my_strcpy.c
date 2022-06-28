/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** mystrcpy
*/

void my_putchar(char ch);

int my_strlen(char const *str);

char *my_strcpy(char *dest , char const *src)
{
    int i = 0;
    int n = my_strlen(src);

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n == i) {
        dest[i] = '\0';
    }
    return (dest);
}
