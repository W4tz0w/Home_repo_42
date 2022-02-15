/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:58:05 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/08 17:12:29 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

//#include <stdio.h>

//int	main(void)
//{
//	char dest[200] = "Handsome dude : ";
//	char *src = "Juleeeeen <3";
//
//	ft_strcat(dest, src);
//	printf("%s", dest);
//}
