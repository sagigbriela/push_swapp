/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:53:07 by mpirela-          #+#    #+#             */
/*   Updated: 2024/05/17 14:25:22 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <stdio.h>
# include <unistd.h>

t_list	*check_and_convert(char *argv[]);
int		check_duplicate(char *argv[]);
void	order_with_three(t_list *array_a);
t_list	*copy_node(t_list *node);

#endif