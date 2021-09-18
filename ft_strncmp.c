/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:38:18 by agurgel           #+#    #+#             */
/*   Updated: 2021/09/17 23:57:26 by agurgel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	unsigned char	s1;
	unsigned char	s2;

	while (len-- > 0)
	{
		s1 = (unsigned char) *str1++;
		s2 = (unsigned char) *str2++;
		if (s1 != s2)
			return (s1 - s2);
		if (s1 == '\0')
			return (0);
	}
	return (0);
}
