/*
** EPITECH PROJECT, 2024
** my_show_word_array
** File description:
** show the argument
*/

#include "include/my.h"
#include <unistd.h>

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar(' ');
    }
    return 0;
}
