/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:50:47 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/08 17:13:09 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			k = i;
			j = 0;
			while (to_find[j] && (str[k] == to_find[j]))
			{
				k++;
				j++;
			}
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", strstr("bonjou", "journee"));
// 	printf("%s", ft_strstr("bonjou", "journee"));
// 	return (0);
// }