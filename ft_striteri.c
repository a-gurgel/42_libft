/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:44:59 by agurgel           #+#    #+#             */
/*   Updated: 2021/09/18 00:31:50 by agurgel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len && s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
