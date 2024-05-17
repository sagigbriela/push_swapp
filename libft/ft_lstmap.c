/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:25:08 by mpirela-          #+#    #+#             */
/*   Updated: 2024/01/08 10:24:23 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*aux;
	void	*temp;

	new_node = NULL;
	while (lst)
	{
		temp = f(lst->content);
		aux = ft_lstnew(temp);
		if (!aux)
		{
			ft_lstclear(&new_node, del);
			del(temp);
			return (new_node);
		}
		ft_lstadd_back(&new_node, aux);
		lst = lst->next;
	}
	return (new_node);
}

// void *transform_content(void *content)
// {
//     char *old_content = (char*)content;
//     char *new_content = strdup(old_content);
//     strcat(new_content, " (transformed)");
//     return new_content;
// }

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

//     printf("Original list:\n");
//     t_list *current_node = head;
//     while (current_node != NULL)
//     {
//         printf("%s\n", (char*)current_node->content);
//         current_node = current_node->next;
//     }

//     t_list *new_list = ft_lstmap(head, transform_content, del);

//     printf("\nTransformed list:\n");
//     current_node = new_list;
//     while (current_node != NULL)
//     {
//         printf("%s\n", (char*)current_node->content);
//         current_node = current_node->next;
//     }

//     return 0;
// }