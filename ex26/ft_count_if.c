/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:07:25 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/13 19:13:22 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
/*
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
			return (0);
		i++;
	}
	return (1);
}

int	main (int ac, char **av)
{
	if (ac > 1)
		printf("%d\n", ft_count_if(av, &ft_str_is_numeric));
	return (0);
}
*/