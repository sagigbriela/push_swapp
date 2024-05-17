/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:25:58 by mpirela-          #+#    #+#             */
/*   Updated: 2023/12/18 11:28:22 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *head = NULL;
//     t_list *node1;
//     t_list *node2;
//     char *content1 = "Hello, world!";
//     char *content2 = "Hello, Copilot!";

//     node1 = ft_lstnew(content1);
//     ft_lstadd_front(&head, node1);

//     node2 = ft_lstnew(content2);
//     ft_lstadd_front(&head, node2);

//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     free(node1);
//     free(node2);
//     return 0;
// }