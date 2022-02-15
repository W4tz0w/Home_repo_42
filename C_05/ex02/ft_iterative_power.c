/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:02:31 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/12 23:02:35 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
		return (result);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Le resultat est : %d\n", ft_iterative_power(9, 3));
// 	return (0);
// }
