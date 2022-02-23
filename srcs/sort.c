/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:25:02 by aguay             #+#    #+#             */
/*   Updated: 2022/02/22 20:49:07 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

//	sort 3 elements of list a
static void	sort_o3(t_llists *l)
{
	t_llist	*temp;

	temp = l->start_a;
	while (sorted_a(l) != true)
	{
		if (smallest_pos_wanted(temp))
		{
			ra(l, false);
			sa(l, false);
			rra(l, false);
		}
		else if (smallest_pos_wanted(temp->next) && biggest_pos_wanted(temp->next->next))
			sa(l, false);
		else if  (smallest_pos_wanted(temp->next))
			ra(l, false);
		else if (smallest_pos_wanted(temp->next->next) && biggest_pos_wanted(temp->next))
			rra(l, false);
		else
		{
			sa(l, false);
			rra(l, false);
		}
	}
}

//	sort 5 element of list a
static void	sort_o5(t_llists *l)
{
	int	i;

	i = 5;
	while (i > 0)
	{
		if (l->start_a->position_wanted < 2)
			pb(l);
		else
			ra(l, false);
		i--;
	}
	if (l->start_b->position_wanted == 4)
		sb(l, false);
	sort_o3(l);
	pa(l);
	pa(l);
}

//	sort the list


// Solve efficiently the sorting of integer agument
// with specified actions.
void	sort_ll(t_llists *l)
{
	if (sorted_a(l))
		return;
	if (l->option == 3)
		sort_o3(l);
	else if (l->option == 5)
		sort_o5(l);
	// else
	// 	sort(l);
}
