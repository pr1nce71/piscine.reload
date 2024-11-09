/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:27:15 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/08 02:14:25 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

void	display_file(char *filename)
{
	int		fd;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n", 2);
		return ;
	}
	while (read(fd, &c, 1) > 0)
		write(1, &c, 1);
	if (close(fd) == -1)
		ft_putstr("Cannot read file.\n", 2);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n", 2);
	else
		display_file(argv[1]);
	return (0);
}
