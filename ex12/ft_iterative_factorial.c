/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:00:13 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/13 17:22:38 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		res = res * (nb - i);
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_iterative_factorial(atoi(av[1])));
	return (0);
}
*/