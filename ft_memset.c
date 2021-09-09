/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 22:16:02 by agurgel           #+#    #+#             */
/*   Updated: 2021/08/29 15:50:48 by agurgel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *src, int c, size_t n)
{
    unsigned char   *str;

    str = src;
    while (n-- > 0)
        *str++ = c;
    return (src);
}