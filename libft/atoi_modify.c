/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_modify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:25:38 by mpirela-          #+#    #+#             */
/*   Updated: 2024/03/05 19:56:19 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//if there's anything that is not a number make it NULL (line 31)
int	atoi_modify(const char *str)
{
	int		i;
	int		result;	

	i = 0;
	result = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
	}
	if ((str[i] >= 58 && str[i] <= 126) || (str[i] >= 33 && str[i] <= 47))
		return (0);
	return (result);
}
