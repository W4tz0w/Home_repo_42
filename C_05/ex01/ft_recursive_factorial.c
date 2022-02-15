/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:42:00 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/12 22:42:36 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
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
		fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Le resultat est : %d\n", ft_recursive_factorial(6));
// 	return (0);
// }
