/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:39:37 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/24 02:46:02 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	n;
	size_t	str_len;

	str_len = ft_strlen(str);
	n = 0;
	while (n <= str_len)
	{
		if (str[n] == (char)c)
			return ((char *)&str[n]);
		n++;
	}
	return (0);
}
