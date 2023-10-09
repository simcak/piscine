/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:46:39 by peta              #+#    #+#             */
/*   Updated: 2023/06/29 15:32:33 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point point)
{
	point.x = 42;
	point.y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(point);
	return (0);
}
