/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:57:48 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/15 14:57:52 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_calc_t_len(int size, char **strs, char *sep)
{
	int	t_len;
	int	i;

	i = 0;
	t_len = 1;
	while (i < size)
	{
		t_len = t_len + ft_strlen(strs[i]);
		if (i < size - 1)
			t_len = t_len + ft_strlen(sep);
		i++;
	}
	return (t_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_len;
	char	*result;
	int		i;

	i = 0;
	t_len = ft_calc_t_len(size, strs, sep);
	result = malloc(t_len * sizeof(char));
	if (!(result))
		return (NULL);
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, sep);
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**strs;
// 	int		size;

// 	size = 5;
// 	strs[0] = "Une question?";
// 	strs[1] = "Un strip-poker?";
// 	strs[2] = "Un cocktail chic?";
// 	strs[3] = "Un week-end au ski, avec soirée peau-de-bête / raclette?";
// 	strs[4] = "Une blaguounette? SAFI <3!\n";
// 	printf("%s", ft_strjoin(size, strs, " Safi. "));
// 	return (0);
// }
