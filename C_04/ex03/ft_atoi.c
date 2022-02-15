/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:30:08 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/08 17:32:36 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	int		sti;

	sti = 0;
	i = 0;
	j = 0;
	while ((str[i] >= 0) && (str[i] <= 32))
		i++;
	while ((str[i] == 45) || (str[i] == 43))
	{
		if (str[i] == 45)
			j++;
		i++;
	}
	while (('0' <= str[i]) && (str[i] <= '9'))
	{
		sti = sti * 10 + (str[i] - 48);
		i++;
	}
	if (!((j % 2) == 0))
		sti = -sti;
	return (sti);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_atoi("    ---++-+-+45fhjgh-+ 454	d45454"));
// 	return (0);
// }