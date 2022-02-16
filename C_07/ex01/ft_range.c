/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:47:12 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/14 23:47:15 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		*dest;
	int		i;

	i = 0;
	size = (max - min);
	if (min >= max)
		return (NULL);
	dest = malloc(size * sizeof(int));
	if (dest == NULL)
		return (NULL);
	while (i <= size)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int i = 0;
// 	int min = 7;
// 	int max = 758;
// 	int *x = ft_range(min, max);

// 	while (i < max - min)
// 	{
// 		printf("%d ", x[i]);
// 		i++;
// 	}
// 	return (0);
// }
