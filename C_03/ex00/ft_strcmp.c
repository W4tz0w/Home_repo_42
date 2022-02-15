/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:47:31 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/10 19:00:45 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int		i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include<stdio.h>
// #include<string.h>
// int	main(void)
// {
// 	char s1[] = "Hello";
// 	char s2[] = "Hello World";

// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d\n", strcmp(s1, s2));
// }
