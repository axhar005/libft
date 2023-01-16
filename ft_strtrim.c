/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboucher <oboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:20:45 by oboucher          #+#    #+#             */
/*   Updated: 2023/01/16 12:58:00 by oboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	int start;
	int end;
	int new_len;
	char *new;

	start = 0;
	end = strlen(str) - 1;
	while (start <= end && strchr(set, str[start]))
		start++;
	if (start > end)
	{
		new = (char *)malloc(1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	while (end >= start && strchr(set, str[end]))
		end--;
	new_len = end - start + 1;
	new = (char *)malloc((new_len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, str + start, new_len);
	new[new_len] = '\0';
	return (new);
}