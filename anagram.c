/*
** EPITECH PROJECT, 2019
** solo2
** File description:
** anagram
*/

#include "my.h"

int     my_is_alph(char *str)
{
    int i = 0;
    int a = 0;

    while (str[i] != 0) {
        if ((str[i] >= 65 && str[i] <= 90) ||
        (str[i] >= 97 && str[i] <= 122)) {
            a = a + 1;
        }
        i = i + 1;
    }
    return (a);
}

int     check_letter(t_sflist *lt)
{
    int i = 0;

    while (lt->w2[i] != 0) {
        if ((lt->w1[lt->i] >= 65 && lt->w1[lt->i])
        && (lt->w1[lt->i] == lt->w2[i] ||lt->w1[lt->i] == lt->w2[i] - 32)) {
            lt->w2[i] = 32;
            lt->count = lt->count + 1;
            return (1);
        }
        if ((lt->w1[lt->i] >= 97 && lt->w1[lt->i] <= 122)
        && (lt->w1[lt->i] == lt->w2[i] || lt->w1[lt->i] == lt->w2[i] + 32)) {
            lt->w2[i] = 32;
            lt->count = lt->count + 1;
            return (1);
        }

        i = i + 1;
    }
    return (1);
}

void     check_word(t_sflist *lt)
{
    lt->i = 0;
    while (lt->w1[lt->i] != 0) {
        if ((lt->w1[lt->i] >= 97 && lt->w1[lt->i] <= 122) ||
        (lt->w1[lt->i] >= 65 && lt->w1[lt->i] <= 90)) {
            lt->i = lt->i + check_letter(lt);
        } else {
            lt->i = lt->i + 1;
        }
    }
}

int     my_anagram(t_sflist *lt)
{
    lt->count = 0;
    if ((lt->len1 = my_is_alph(lt->w1)) != (lt->len2 = my_is_alph(lt->w2))) {
        write(1, "no anagrams.\n", 13);
        return (0);
    }
    check_word(lt);
    if (lt->len1 == lt->count) {
        write(1, "anagram!\n", 9);
    } else {
        write(1, "no anagrams.\n", 13);
    }
    return (0);
}