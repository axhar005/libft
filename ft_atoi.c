/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboucher <oboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:35:05 by oboucher          #+#    #+#             */
/*   Updated: 2023/01/12 15:45:12 by oboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int res;
	int sign;
	int i;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}