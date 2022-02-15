/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:12:35 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/12 21:39:34 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_program_name(int argc, char **list)
{
	int		i;

	(void) argc;
	i = 0;
	while (list[0][i])
		i++;
	write(1, list[0], i);
	write(1, "\n", 1);
}

int	main(int nombre_arg, char *listee[])
{
	ft_print_program_name(nombre_arg, listee);
	return (0);
}
