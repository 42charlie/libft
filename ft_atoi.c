/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:01:05 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/03 15:56:13 by ahsadik          ###   ########.fr       */
/*																			*/
/* ************************************************************************** */
#include "libft.h"

static	int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static	int	check(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	result;

	sign = 1;
	result = 0;
	while (*str)
	{
		while (ft_isspace(*str))
			str++;
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		while (ft_isdigit(*str))
		{
			result = result * 10 + (*str - 48);
			if (result > LLONG_MAX)
				return (check(sign));
			str++;
		}
		return (result * sign);
	}
	return (0);
}
