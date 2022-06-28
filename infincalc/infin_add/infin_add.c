/*
** EPITECH PROJECT, 2021
** infin add
** File description:
** add infinite number
*/

int my_strlen(char const *str);

char *infin_pos(char *av1, char *av2);

char *infin_neg(char *av1, char *av2);

char *infin_sub(char *av1, char *av2);

char *infin_add(char *av1, char *av2)
{
    if (av1[0] != 45 && av2[0] != 45)
        return (infin_pos(av1, av2));
    if (av1[0] == 45 && av2[0] == 45)
        return (infin_neg(av1, av2));
    if (av1[0] == 45 || av2[0] == 45)
        return (infin_sub(av1, av2));
    return (av1);
}
