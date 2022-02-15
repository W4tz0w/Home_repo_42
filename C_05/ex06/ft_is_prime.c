/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:02:07 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/13 19:02:31 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	if (ft_is_prime(13) == 1)
// 		printf("C'est bien un nombre premier, chacalito <3\n");
// 	else
// 		printf("Alors oui, mais non. C'en est pas.\n");
// 	return (0);
// }