/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_alg_del.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:48:45 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/28 23:34:13 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BSQ.h"

t_our_struct	biggist_sqr(int x, int len, char *str)
{
	int	i;
	int	j;
	int	k;
	int p;
	int	line_length;
	t_our_struct	mystruct;

	mystruct = struct_init(read_file());
	line_length = mystruct.line_length;
	//obsticle = mystruct.obs;
	k = 0;
	p = 0;
	while (k <= (len - 1) - (x % (len - 1)))
	{
		i = 0;
		while (i <= k)
		{
			j = 0;
			while (j <= k)
			{
				//if (str[x + i * len + j] == obsticle)
				if (str[x + (i * len) + j] == 'o'
					|| (str[x + j] == '\n')
					|| x + (len * (k + 1)) > (len * (len - 1)))
					{
						mystruct.maxsqr_size = k;
						printf("x: %i ", x);
						printf("while size %i\n", mystruct.maxsqr_size);
						mystruct.maxsqr_pos = x;
						return(mystruct);
					}
				j++;
			}
			i++;
		}
		k++;
		p++;
	}
	return (mystruct);
}

// potreba ulozit prototyp do BSQ.h
int	search_alg()
{
	int	x;
	int len;
	int	temp_max;
	char pokus;
	int	num_of_lines;
	//char	*input_array;
	t_our_struct mystruct;

	mystruct = struct_init(read_file());
	x = 0;
	while (mystruct.map[x])
	{
		pokus = mystruct.map[x];
		write(1, &pokus, 1);
		x++;
	}
	x = 0;
	//len = ft_strlen(mystruct.size);
	len = 11;
	num_of_lines = 10;
	temp_max = 0;
	while (x <= len * (len - 2))
	{
		biggist_sqr(x, len, mystruct.map);
		if (mystruct.maxsqr_size > temp_max)
			temp_max = mystruct.maxsqr_size;
		x++;
		if (mystruct.map[x] < 32 && mystruct.map[x] != '\0')
			x++;
	}
	x = 0;
	while (mystruct.map[x])
	{
		pokus = mystruct.map[x];
		write(1, &pokus, 1);
		x++;
	}
	printf("Coordinates: %i, Size: %i\n", mystruct.maxsqr_pos, temp_max);
	return (0);
}
