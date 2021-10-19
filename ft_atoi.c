/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:59:23 by arowe             #+#    #+#             */
/*   Updated: 2021/10/08 12:59:23 by arowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isspace(const char c)
{
	return (c == ' ' || c == '\n'
		|| c == '\t' || c == '\v'
		|| c == '\f' || c == '\r');
}

int	ft_over_max(long n, const char c, int neg)
{
	return ((n > 922337203685477580
			|| (n == 922337203685477580 && c > 55)) && neg == 1);
}

int	ft_under_min(long n, const char c)
{
	return (n > 922337203685477580
		|| (n == 922337203685477580 && c > 56));
}

int	ft_atoi(const char *str)
{
	int		index;
	int		res;
	long	temp;

	index = 0;
	res = 1;
	temp = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			res *= -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		if (ft_over_max(temp, str[index], res))
			return (-1);
		if (ft_under_min(temp, str[index]))
			return (0);
		temp *= 10;
		temp += (str[index++] - '0');
	}
	return (temp * res);
}
