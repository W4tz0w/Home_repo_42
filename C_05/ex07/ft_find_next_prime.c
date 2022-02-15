/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiovann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:53:21 by egiovann          #+#    #+#             */
/*   Updated: 2022/02/13 21:53:26 by egiovann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//////////
#include <stdio.h>
int ft_is_prime(int nb)
{
    int i;
    i = 3;
    if (nb < 2)
        return (0);
    if (nb == 2)
        return (1);
    else if (nb % 2 == 0)
        return (0);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i = i + 2;
    }
    return (1);
}
int ft_atoi(char *str)
{
    int i;
    int minus;
    int result;
    i = 0;
    minus = 1;
    result = 0;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i]
        == '\v' || str[i] == '\f' || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            minus = minus * (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (result * minus);
}
int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return (2);
    if (nb % 2 == 0)
    {
        nb = nb + 1;
    }
    while (!(ft_is_prime(nb)))
    {
        nb = nb + 2;
    }
    return (nb);
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        return (0);
    }
    printf("%d\n", ft_find_next_prime(ft_atoi(argv[1])));
    return (0);
}





////////

// int	ft_is_prime(int nb)
// {
// 	int	i;

// 	i = 3;
// 	if (nb < 2)
// 		return (0);
// 	if (nb == 2)
// 		return (1);
// 	else if (nb % 2 == 0)
// 		return (0);
// 	while (i <= nb / i)
// 	{
// 		if (nb % i == 0)
// 			return (0);
// 		nb = nb + 2;
// 	}
// 	return (1);
// }

// int	ft_find_next_prime(int nb)
// {
// 	if (nb <= 2)
// 		return (2);
// 	if (nb % 2 == 0)
// 	{
// 		nb = nb + 1;
// 	}
// 	while (!(ft_is_prime(nb)))
// 	{
// 		nb = nb + 2;
// 	}
// 	return (nb);
// }

// #include <stdio.h>

// int ft_atoi(char *str)
// {
//     int i;
//     int minus;
//     int result;
//     i = 0;
//     minus = 1;
//     result = 0;
//     while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i]
//         == '\v' || str[i] == '\f' || str[i] == ' ')
//         i++;
//     while (str[i] == '-' || str[i] == '+')
//     {
//         if (str[i] == '-')
//             minus = minus * (-1);
//         i++;
//     }
//     while (str[i] >= '0' && str[i] <= '9')
//     {
//         result = result * 10 + (str[i] - 48);
//         i++;
//     }
//     return (result * minus);
// }

// int main(int argc, char **argv)
// {
//     if (argc != 2)
//     {
//         return (0);
//     }
//     printf("%d\n", ft_find_next_prime(ft_atoi(argv[1])));
//     return (0);
// }

// ORIGINAL ORIGINAL ORIGINAL

// int	ft_is_prime(int nb)
// {
// 	int		i;

// 	i = 3;
// 	if (nb < 2)
// 		return (2);
// 	if (nb % 2 == 0)
// 		return (0);
// 	while (i < nb / 2)
// 	{
// 		if (nb % i == 0)
// 			return (0);
// 		i += 2;
// 	}
// 	return (1);
// }

// int	ft_find_next_prime(int nb)
// {
// 	if (nb <= 2)
// 		return (2);
// 	if (nb % 2 == 0)
// 		nb++;
// 	while (!(ft_is_prime(nb) == 1))
// 	{
// 		nb += 2;
// 	}
// 	return (nb);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;

// 	nb = 2147483642;
// 	if (ft_is_prime(nb) == 1)
// 		printf("%d c'est un premier, chacalito <3\n", ft_find_next_prime(nb));
// 	else
// 		printf("C'en est pas. %d est le prochain.\n", ft_find_next_prime(nb));
// 	return (0);
// }

// int	ft_find_next_prime(int nb)
// {
// 	int	i;

// 	i = 3;
// 	if (nb <= 1)
// 		return (2);
// 	if (nb % 2 == 0)
// 		return (0);
// 	while (i <= nb / 2)
// 	{
// 		if (nb % i == 0)
// 			nb = nb + 1;
// 		i += 2;
// 	}
// 	return (nb);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int	result;

// 	result = ft_find_next_prime(2147483643);
// 	printf("%d est le prochain.\n", result);
// 	return (0);
// }
