/*
** EPITECH PROJECT, 2019
** solo2
** File description:
** anagram
*/

#include "my.h"

int     main(int ac, char **av)
{
    t_sflist lt;

    lt.w1 = av[1];
    lt.w2 = av[2];
    if (ac < 3) {
        write(2, "Error:  not enough arguments.\n", 30);
        return (84);
    }
    if (ac > 3) {
        write(2, "Error:  too much arguments.\n", 28);
        return (84);
    }
    if (lt.w1[0] == 0 || lt.w2[0] == 0) {
        return (84);
    }
    my_anagram(&lt);
    return (0);
}
