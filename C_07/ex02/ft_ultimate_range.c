/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:20:09 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/16 00:20:12 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*dest;
	int		i;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	dest = (int *)malloc(sizeof(*dest) * (max - min));
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	*range = dest;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	**range;
// 	int i = 0;
// 	int min = -89;
// 	int max = 758;
// 	int x = ft_ultimate_range(range, min, max);

// 	while (i < max - min)
// 	{
// 		printf("%d ", range[0][i]);
// 		i++;
// 	}
// 	return (0);
// }
