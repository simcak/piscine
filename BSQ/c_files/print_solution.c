/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:50:33 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/28 23:34:13 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BSQ.h"

void	ft_to_full(t_our_struct *boardstruct)
{
	int	i;
	int	j;
	int	full_ind;

	i = 0;
	while (i < boardstruct->maxsqr_size)
	{
		j = 0;
		while (j < boardstruct->maxsqr_size)
		{
			full_ind = boardstruct->maxsqr_pos + j;
			full_ind += i * (boardstruct->line_length + 1);
			boardstruct->map[full_ind] = boardstruct->full;
			j++;
		}
		i++;
	}
}

void	ft_print_solution(t_our_struct *boardstruct)
{
	int	i;

	i = 0;
	ft_to_full(boardstruct);
	while (boardstruct->map[i])
	{
		printf("%c", boardstruct->map[i]);
		i++;
	}
}
