/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:06:49 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/12 23:06:51 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power < 1)
	{
		return (1);
	}
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Le resultat est : %d\n", ft_recursive_power(9, 3));
// 	return (0);
// }
