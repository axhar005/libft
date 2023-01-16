/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboucher <oboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:13:25 by oboucher          #+#    #+#             */
/*   Updated: 2023/01/16 18:52:59 by oboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// static char	*ft_strcat(char *dest, const char *src)
// {
// 	int	i;
// 	int	dest_len;

// 	i = 0;
// 	dest_len = 0;
// 	while (dest[dest_len] != '\0')
// 		dest_len++;
// 	while (src[i] != '\0')
// 	{
// 		dest[dest_len + i] = src[i];
// 		i++;
// 	}
// 	dest[dest_len + i] = '\0';
// 	return (dest);
// }

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;

	if (!dest || size == 0)
		return (0);
	dest_len = strlen(dest);
	src_len = strlen(src);
	if (dest_len >= size)
		return (dest_len + src_len);
	if (src_len < size - dest_len)
		ft_strlcpy(dest + dest_len, src, size - dest_len - 1);
	else
	{
		ft_strlcpy(dest + dest_len, src, size - dest_len - 1);
		dest[size - 1] = '\0';
	}
	return (dest_len + src_len);
}