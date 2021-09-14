/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 22:20:44 by agurgel           #+#    #+#             */
/*   Updated: 2021/09/13 21:40:19 by agurgel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, char const *src, size_t len)
{
    size_t i;

    i = 0;
    if (!dst || !src)
        return (0);
    if (len == 0)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < len - 1)
    {
        dst[i] == src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}