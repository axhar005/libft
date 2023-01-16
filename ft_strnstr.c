/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboucher <oboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:00:32 by oboucher          #+#    #+#             */
/*   Updated: 2023/01/16 14:06:10 by oboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!*haystack || !haystack)
		return (NULL);
	if (needle_len == 0)
		return ((char *)haystack);
	while (i < len)
	{
		if (i + needle_len > len)
			return (NULL);
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return (char *)(&haystack[i]);
		i++;
	}
	return (NULL);
}