/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:19:23 by mpirela-          #+#    #+#             */
/*   Updated: 2023/12/18 12:08:49 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*dest;
	t_list	*next_node;

	dest = *lst;
	while (dest)
	{
		next_node = dest->next;
		ft_lstdelone(dest, del);
		dest = next_node;
	}
	*lst = NULL;
}

// void del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew(strdup("First node"));
//     t_list *node2 = ft_lstnew(strdup("Second node"));
//     t_list *node3 = ft_lstnew(strdup("Third node"));

//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);

//     printf("Before clearing:\n");
//     t_list *current_node = head;
//     while (current_node != NULL)
//     {
//         printf("%s\n", (char*)current_node->content);
//         current_node = current_node->next;
//     }

//     ft_lstclear(&head, del);

//     printf("\nAfter clearing:\n");
//     if (head == NULL)
//     {
//         printf("List is empty.\n");
//     }

//     return 0;
// }