/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:49:16 by agurgel           #+#    #+#             */
/*   Updated: 2021/09/14 23:15:26 by agurgel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dst;
	s = src;
	if (dst <= src)
		return (ft_memcpy(dst, src, n));
	d += n;
	s += n;
	while (n--)
		*--d = *--s;
	return (dst);
}
