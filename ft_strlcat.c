/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:45:35 by agurgel           #+#    #+#             */
/*   Updated: 2021/09/14 15:18:58 by agurgel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t len)
{
	size_t	dn;
	size_t	sn;
	size_t	i;
	size_t	j;

	dn = ft_strlen(dst);
	sn = ft_strlen(src);
	i = dn;
	j = 0;
	if (dn >= len)
		return (sn + len);
	while (src[j] && i < (len - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (sn + dn);
}
