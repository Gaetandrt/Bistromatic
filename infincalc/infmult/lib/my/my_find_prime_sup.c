/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** my_find_prime_sup
*/

static int primes(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    for (int i = nb - 1; i > 1; i--) {
        if (nb % i == 0) {
            return (0);
        }
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    while (nb < 2147483647) {
        if (primes(nb)) {
            return (nb);
        }
        nb++;
    }
    return (0);
}
