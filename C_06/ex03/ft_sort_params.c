/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:49:22 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/12 21:40:42 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int		i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 0;
	while (j <= argc)
	{	
		i = 1;
		while (i < argc - 1)
		{	
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	**list;

	i = 1;
	list = ft_sort(argc, argv);
	while (i < argc)
	{
		ft_print_params(list[i]);
		i++;
	}
}
