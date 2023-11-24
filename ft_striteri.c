/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:03:45 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/17 17:49:53 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		n;

	if (!s || !f)
		return ;
	n = 0;
	while (s[n])
	{
		f(n, &s[n]);
		n++;
	}
}
