/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:53:54 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/10 19:00:28 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i + 1 < n)
		i++;
	return (s1[i] - s2[i]);
}

// #include<stdio.h>
// #include<string.h>
// int	main(void)
// {
// 	char s1[] = "dl;kgnj q";
// 	char s2[] = "dl;kgnj ";

// 	printf("%d\n", ft_strncmp(s1, s2, 15));
// 	printf("%d\n", strncmp(s1, s2, 15));
// }
