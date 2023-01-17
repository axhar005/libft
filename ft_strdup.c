/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboucher <oboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:32:21 by oboucher          #+#    #+#             */
/*   Updated: 2023/01/17 16:48:28 by oboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(src) + 1;
	copy = (char *)malloc(sizeof(char) * (len));
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, src, len);
	return (copy);
}
