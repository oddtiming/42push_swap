/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:25:02 by aguay             #+#    #+#             */
/*   Updated: 2022/02/18 13:37:50 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

// Shift down every element of the
// stack a. The last element become
// the first one.
void	rra(t_llists *l, bool rrr)
{
	t_llist	*l_temp;

	if (l->len_a < 2)
		return;
	l_temp = l->start_a;
	l->start_a = l->start_a->next;
	l->start_a->prev = NULL;
	l_temp->next = NULL;
	while (l->start_a->next != NULL)
		l->start_a = l->start_a->next;
	l->start_a->next = l_temp;
	l_temp->prev = l->start_a;
	while (l->start_a->prev != NULL)
		l->start_a = l->start_a->prev;
	if (rrr == false)
		ft_printf("rra\n");
}

// Shift down every element of the
// stack b. The last element become
// the first one.
void	rrb(t_llists *l, bool rrr)
{
	t_llist	*l_temp;

	if (l->len_b < 2)
		return;
	l_temp = l->start_b;
	l->start_b = l->start_b->next;
	l->start_b->prev = NULL;
	l_temp->next = NULL;
	while (l->start_b->next != NULL)
		l->start_b = l->start_b->next;
	l->start_b->next = l_temp;
	l_temp->prev = l->start_b;
	while (l->start_b->prev != NULL)
		l->start_b = l->start_b->prev;
	if (rrr == false)
		ft_printf("rra\n");
}

// Shift down every element of the
// stack a and b. The last element 
// become the first one.
void	rrr(t_llists *l)
{
	rra(l, true);
	rrb(l, true);
	ft_printf("rrr\n");
}
