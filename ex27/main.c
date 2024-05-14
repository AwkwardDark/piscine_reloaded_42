/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:24:32 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/14 13:44:20 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr("File name missing.\n");
		if (ac > 2)
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("Cannot read file.\n");
			return (1);
		}
		ft_display_file(fd);
		close(fd);
	}
	return (0);
}
