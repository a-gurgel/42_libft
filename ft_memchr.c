/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 00:04:01 by agurgel           #+#    #+#             */
/*   Updated: 2021/09/15 00:20:27 by agurgel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *src, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	cc;

	s = (unsigned char *) src;
	cc = (unsigned char) c;
	while (len--)
	{
		if (*s == cc)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
