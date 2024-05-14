/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:17:50 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/14 14:31:25 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else if (n < 0)
		ft_putchar('N');
}
/*
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2)
        ft_is_negative(atoi(av[1]));
    return (0);
}
*/