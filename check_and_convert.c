/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_convert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:16:55 by mpirela-          #+#    #+#             */
/*   Updated: 2024/05/07 16:52:17 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Check if there's any duplicate numbers in the array
int	check_duplicate(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strncmp(argv[i], argv[j], sizeof(*argv)) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

//Check and convert ints
t_list	*check_and_convert(char *argv[])
{
	t_list	*array_a;
	t_list	*node;
	int		nb;
	int		i;

	i = 1;
	nb = 0;
	array_a = NULL;
	if (argv[i] == NULL)
		return (NULL);
	if (!check_duplicate(argv))
		return (NULL);
	while (argv[i])
	{
		nb = atoi_modify(argv[i]);
		if (nb == 0)
			return (NULL);
		node = ft_lstnew((void *)(intptr_t)nb);
		if (!node)
			return (NULL);
		ft_lstadd_back(&array_a, node);
		i++;
	}
	return (array_a);
}
