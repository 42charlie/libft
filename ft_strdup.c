/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:30:28 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/17 20:42:47 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source )
{
	char	*mem;
	size_t	size;

	size = ft_strlen(source) + 1;
	mem = malloc(size);
	if (mem)
		ft_memcpy(mem, source, size);
	return (mem);
}
