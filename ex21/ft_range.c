/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:56:24 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/07 14:56:27 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	range;
	int		*tab;
	int		i;

	i = 0;
	range = max - min;
	if (range <= 0)
		return ((void *) 0);
	tab = malloc(range * sizeof(int));
	if (!tab)
		return ((void *) 0);
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main()
{
	int min = 5;
	int max = 10;
	int *range;
	int i;

	i = 0;
	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("echec allocation\n");
		return (1);
	}
	while (i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
