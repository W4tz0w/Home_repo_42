/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:28:38 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/12 21:39:57 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = argc - 1;
	while (j > 0)
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
		i = 0;
	}
}

int	main(int argc, char *argv[])
{
	ft_rev_params(argc, argv);
	return (0);
}
