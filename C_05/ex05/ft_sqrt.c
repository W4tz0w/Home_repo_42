/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:56:19 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/13 17:56:46 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqpower(int nb)
{
	int	result;
	int	power;

	power = 2;
	result = 1;
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

int	ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i <= (nb / 2) && i < 46341)
	{
		if (nb == ft_sqpower(i))
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Le resultat est : %d\n", ft_sqrt(35832195));
// 	return (0);
// }
