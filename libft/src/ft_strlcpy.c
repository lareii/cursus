/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabaogl <ebabaogl@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:57:33 by ebabaogl          #+#    #+#             */
/*   Updated: 2024/04/26 17:44:22 by ebabaogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	c;

	c = 0;
	if (size != 0)
	{
		while (src[c] && c < (size - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (ft_strlen(src));
}

/*
strcpy: src uzun olursa
strncpy: n > len(dst) && len(src) > len(dst)
strlcpy: n > len(dst) && len(src) > len(dst)

zattiri zort zort oluyo bu durumlarda
*/