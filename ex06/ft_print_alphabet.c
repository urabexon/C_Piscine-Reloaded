/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:48:16 by urabex            #+#    #+#             */
/*   Updated: 2025/06/06 03:08:06 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void);
void    ft_putchar(char c);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    c;
    c = 'a';
    
    while (c <= 'z')
    {
        ft_putchar(c);
        c++;  
    }
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}
