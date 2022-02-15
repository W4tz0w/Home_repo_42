/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:18:24 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/12 22:18:31 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb != 0)
		{
			fact = fact * nb;
			nb--;
		}
		return (fact);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Le resultat est : %d\n", ft_iterative_factorial(6));
// 	return (0);
// }