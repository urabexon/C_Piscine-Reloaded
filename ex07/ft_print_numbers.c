/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 03:33:47 by urabex            #+#    #+#             */
/*   Updated: 2025/06/06 03:40:23 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void);
void    ft_putchar(char c);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char c;
    c = 48;
    
    while (c <= 57) 
    {
        ft_putchar(c);
        c++;   
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}
