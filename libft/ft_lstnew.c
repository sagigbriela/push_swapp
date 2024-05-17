/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:40:24 by mpirela-          #+#    #+#             */
/*   Updated: 2023/12/18 11:25:49 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = (t_list *) malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}

// int main()
// {
//     t_list *node;
//     char *content = "Hello, world!";
//     node = ft_lstnew(content);
//     if (node != NULL) {
//         printf("%s\n", (char *)node->content);
//     }
//     free(node);
//     return 0;
// }