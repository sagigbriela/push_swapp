/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_with.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:08:12 by mpirela-          #+#    #+#             */
/*   Updated: 2024/05/17 16:43:51 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*copy_node(t_list *node)
{
	t_list	*new_node;

	if (node == NULL)
		return (NULL);
	new_node = ft_lstnew(node->content);
	return (new_node);
}

void	order_with_three(t_list *array_a)
{
	t_list	*second_node;
	t_list	*third_node;

	second_node = copy_node(array_a->next);
	third_node = copy_node(array_a->next->next);
}
