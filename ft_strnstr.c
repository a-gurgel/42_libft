/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:27:08 by agurgel           #+#    #+#             */
/*   Updated: 2021/09/17 21:50:17 by agurgel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	needle_len;

	if (*str2 == '\0')
		return ((char *) str1);
	needle_len = ft_strlen(str2);
	while (*str1 != '\0' && len >= needle_len)
	{
		if (ft_strncmp(str1, str2, needle_len) == 0)
			return ((char *)str1);
		str1++;
		len--;
	}
	return (NULL);
}
