/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:36:12 by alexgonz          #+#    #+#             */
/*   Updated: 2026/11/16 18:10:14 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_lector selection_sort(t_list **a, t_list **b)
{
	int	max;
	t_lector	registre;

	registre = register_innit();
	while (ft_lstsize(*a) > 0)
	{
		max = find_max(a);
		if ((*a)->content == find_max(a))
			oper_put(&registre, a, b, "pb");
		else
		{
			if ((size_t)count_index(a, max) > ft_lstsize(*a) / 2)
			 	oper_r_rot(&registre, a, b, "rra");
			else
				oper_rot(&registre, a, b, "ra");
		}
	}
	return (registre);
}
