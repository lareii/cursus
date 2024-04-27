/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabaogl <ebabaogl@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:50:00 by ebabaogl          #+#    #+#             */
/*   Updated: 2024/04/27 16:52:38 by ebabaogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "hello";
	printf("%p", ft_strchr(str, 'e'));
}
