/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:34:33 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/13 18:46:23 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (max <= min)
		return (NULL);
	tab = malloc(sizeof(int) * (1 + max - min));
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	min;
	int	max;

	i = 0;
	min = atoi(av[1]);
	max = atoi(av[2]);
	if (ac == 3)
	{
		while (i < max - min)
		{
			printf("%d, ", ft_range(min, max)[i]);
			i++;
		}
	}
	return (0);
}
*/