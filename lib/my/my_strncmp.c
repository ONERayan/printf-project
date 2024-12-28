/*
** EPITECH PROJECT, 2024
** ptn
** File description:
** clc
*/

#include "my.h"
#include <stdlib.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int size1 = my_strlen(s1);
    int size2 = my_strlen(s2);
    char *cp1 = malloc((size1 + 1) * sizeof(char));
    char *cp2 = malloc((size2 + 1) * sizeof(char));
    int i = 0;
    int result = 0;

    my_strcpy(cp1, s1);
    my_strcpy(cp2, s2);
    for (i = 0; (cp1[i] < n && cp2[i] < n) && (cp1[i] == cp2[i]); i++){
        i++;
    }
        result = cp1[i] - cp2[i];
        free(cp1);
        free(cp2);
        my_printf("%d", result);
        return result;
}