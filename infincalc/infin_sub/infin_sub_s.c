/*
** EPITECH PROJECT, 2021
** infin sub
** File description:
** sub infinite number
*/

#include "../../include/bistromatic.h"

char *infin_pos_s(char *argv1, char *argv2);

char *infin_neg_s(char *argv1, char *argv2);

char *infin_oneneg_s(char *argv1, char *argv2);

char *infin_sub_s(char *argv1, char *argv2)
{
    if (argv1[0] != 45 && argv2[0] != 45)
        return (infin_pos_s(argv1, argv2));
    if (argv1[0] == 45 && argv2[0] == 45)
        return (infin_neg_s(argv1, argv2));
    if (argv1[0] == 45 || argv2[0] == 45)
        return (infin_oneneg_s(argv1, argv2));
    return ("84");
}
