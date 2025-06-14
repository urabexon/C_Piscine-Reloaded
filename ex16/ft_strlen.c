/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:36:53 by urabex            #+#    #+#             */
/*   Updated: 2025/06/14 09:24:57 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char *input;
    int   expected;
} TestCase;

int ft_strlen(char *str);

int ft_strlen(char *str)
{
    int i;
    i = 0;

    if (!str)
        return (0);
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(void)
{
    TestCase tests[] = {
        { "",              0 },
        { "Hello, World!", 13 },
        { "42Tokyo",        7 },
        { "Test\0Hidden",   4 },
        { NULL,             0 }, 
        { NULL,             0 }
    };

    for (int i = 0; tests[i].input != NULL || i == 4; i++) {
        char *s = tests[i].input;
        int   expect = tests[i].expected;
        int   actual = ft_strlen(s);
        printf("Test %d: ", i);
        if (s)
            printf("\"%s\"", s);
        else
            printf("NULL");
        printf(" → expected=%d, actual=%d : %s\n",
               expect, actual,
               (expect == actual) ? "OK" : "NG");
    }
    return 0;
}
