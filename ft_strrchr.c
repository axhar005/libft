/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboucher <oboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:33:25 by oboucher          #+#    #+#             */
/*   Updated: 2023/01/13 16:35:29 by oboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t i;

	i = ft_strlen(str);
	if (!str)
		return (NULL);
	while (i > 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
}