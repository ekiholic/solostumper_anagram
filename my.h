/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** countwords
*/

#ifndef MY_H_
#define MY_H_
#include <unistd.h>
#include <stdio.h>
typedef struct t_list {
    int nb_l;
    char *w1;
    char *w2;
    int len1;
    int len2;
    int count;
    int i;
} t_sflist;
int     my_anagram(t_sflist *lt);
int     my_is_alph(char *str);
void     check_word(t_sflist *lt);
int     check_letter(t_sflist *lt);

#endif
