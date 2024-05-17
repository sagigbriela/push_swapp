/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:33:51 by mpirela-          #+#    #+#             */
/*   Updated: 2023/12/18 11:30:51 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}
// int main()
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("First node");
//     t_list *node2 = ft_lstnew("Second node");
//     t_list *node3 = ft_lstnew("Third node");

//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);

//     t_list *current_node = head;
//     while (current_node != NULL)
//     {
//         printf("%s\n", (char*)current_node->content);
//         current_node = current_node->next;
//     }

//     return 0;
// }