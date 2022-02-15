/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:39:46 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/02 22:04:27 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		revi;
	int		tmp;

	i = 0;
	revi = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[revi];
		tab[revi] = tmp;
		i++;
		revi--;
	}
}
