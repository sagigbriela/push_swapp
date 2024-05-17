/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:35:24 by mpirela-          #+#    #+#             */
/*   Updated: 2024/03/11 19:43:38 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return ((unsigned char )str1[i] - (unsigned char )str2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
