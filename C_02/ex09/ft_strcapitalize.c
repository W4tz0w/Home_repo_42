/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:46:42 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/06 18:11:13 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_strupcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_strlowcase(str);
		i++;
	}
	i = 0;
	ft_strupcase(str, i);
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
		{
			i++;
			ft_strupcase(str, i);
		}
		else
			i++;
	}
	return (str);
}
