/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:34:47 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/10 23:36:27 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strdup("Mmmhm, le caca c'est délicieux!\n"));
// 	return (0);
// }
