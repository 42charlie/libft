/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:18:37 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/23 23:45:57 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *m_block, int chr, size_t size )
{
	char	*str;

	str = (char *)m_block;
	while (size > 0)
	{
		if (*str == (char)chr)
			return (str);
		str++;
		size--;
	}
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	const int arr[] = {1,2,3, 200, 3, 5};
// 	int *new = ft_memchr(arr, 200, sizeof(arr));
// 	int i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d " , *((int *)new + i));
// 		i++;
// 	}
// }