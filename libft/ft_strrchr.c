/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:19:40 by aledru            #+#    #+#             */
/*   Updated: 2017/11/09 21:02:29 by aledru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		n;

	n = ft_strlen(str);
	while (n >= 0)
	{
		if (str[n] == (unsigned char)c)
			return ((char*)&str[n]);
		n--;
	}
	return (NULL);
}
