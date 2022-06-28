/*
** EPITECH PROJECT, 2021
** my_compute_power_square.c
** File description:
** my compute power square
*/

int my_compute_square_root(int nb)
{
    double stock = nb / 2;
    double tmp = 0;

    if (nb < 0) {
        return (0);
    }
    if (nb == 1) {
        return (1);
    }
    for (;stock != tmp;) {
        tmp = stock;
        stock = (nb / tmp + tmp) / 2;
    }
    if ((int) stock != stock) {
        return (0);
    }
    return (stock);
}
