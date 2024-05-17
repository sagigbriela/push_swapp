/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:43:30 by mpirela-          #+#    #+#             */
/*   Updated: 2024/05/17 14:13:21 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*array_a;

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}
	array_a = check_and_convert(argv);
	if (!array_a)
		return(0);
	if (ft_lstsize(array_a) == 3)
		order_with_three(array_a);
}
