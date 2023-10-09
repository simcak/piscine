/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_alg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:48:45 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/28 23:34:13 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BSQ.h"

int	max_sqr_size(t_our_struct bsq, int i)
{
	int	max_sq_size;
	int	u;
	int	d;
	int	l;

	max_sq_size = 0;
	u = i - bsq.line_length - 1;
	d = u - 1;
	l = i - 1;
	if (bsq.matrix[l] <= bsq.matrix[u] && bsq.matrix[l] <= bsq.matrix[d])
		max_sq_size = bsq.matrix[l] + 1;
	else if (bsq.matrix[d] <= bsq.matrix[u] && bsq.matrix[d] <= bsq.matrix[l])
		max_sq_size = bsq.matrix[d] + 1;
	else if (bsq.matrix[u] <= bsq.matrix[d] && bsq.matrix[u] <= bsq.matrix[l])
		max_sq_size = bsq.matrix[u] + 1;
	return (max_sq_size);
}

int	find_value(t_our_struct bsq, int i, int column, int line)
{
	if (bsq.map[i] != bsq.obs && bsq.map[i] != bsq.empt)
		bsq = ft_errors(1, bsq);
	if ((column == 1 || line == 1) && bsq.map[i] != bsq.obs)
		return (1);
	else if (bsq.map[i] == bsq.obs)
		return (0);
	else
		return (max_sqr_size(bsq, i));
	return (-1);
}

t_our_struct	new_maxsqr(t_our_struct bsq, int i)
{
	if (bsq.matrix[i] > bsq.maxsqr_size)
	{
		bsq.maxsqr_size = bsq.matrix[i];
		bsq.maxsqr_pos = i - (bsq.maxsqr_size - 1) * (bsq.line_length + 1)
			- (bsq.maxsqr_size - 1);
	}
	return (bsq);
}

t_our_struct	ft_search_alg(t_our_struct bsq)
{
	int	line;
	int	column;
	int	i;

	line = 1;
	i = 0;
	while (bsq.map[i] != '\0')
	{
		column = 1;
		while (bsq.map[i] != '\n' && bsq.map[i] != '\0')
		{	
			bsq.matrix[i] = find_value(bsq, i, column, line);
			bsq = new_maxsqr(bsq, i);
			i++;
			column++;
		}
		if ((column != bsq.line_length + 1) || (bsq.map[i] != '\n'))
			bsq = ft_errors(1, bsq);
		line++;
		i++;
	}
	return (bsq);
}
