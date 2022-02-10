/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:25:02 by aguay             #+#    #+#             */
/*   Updated: 2022/01/20 12:50:53 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

// Push the first element of the stack b to the
// First element of the stack a.
void	pa(t_llist **a, t_llist **b, int *len_a, int *len_b)
{
	if ((*len_b) > 0)
	{
		add_top(a, b[0]->content, len_a);
		delete_top(b, len_b);
	}
	ft_printf("pa\n");
}

// Push the first element of the stack a to the
// first element b.
void	pb(t_llist **a, t_llist **b, int *len_a, int *len_b)
{
	if ((*len_a) > 0)
	{
		add_top(b, a[0]->content, len_b);
		delete_top(a, len_a);
	}
	ft_printf("pb\n");
}