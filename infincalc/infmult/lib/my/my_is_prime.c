/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    for (int i = nb - 1; i > 1; i--) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return (1);
}
