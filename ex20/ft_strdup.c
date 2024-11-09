/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:35 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/07 14:55:38 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar (str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dest;

	length = ft_strlen(src);
	dest = malloc((length + 1) * sizeof(char));
	ft_strcpy(dest, src);
	return (dest);
}

// int main(void)
// {
//     char *src = "Hello, world!";
//     char *dup = ft_strdup(src);

//     if (dup == NULL)
//     {
//         ft_putstr("error!\n");
//         return (1);
//     }
//     ft_putstr("og: ");
//     ft_putstr(src);
//     ft_putchar('\n');
//     ft_putstr("copie: ");
//     ft_putstr(dup);
//     ft_putchar('\n');
//     return (0);
// }