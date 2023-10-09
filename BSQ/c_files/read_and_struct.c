/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:44:58 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/28 23:34:13 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BSQ.h"

t_our_struct	struct_init(char *grid)
{
	int				i;
	int				j;
	t_our_struct		map;

	map.size = 0;
	map.maxsqr_size = 0;
	map.maxsqr_pos = 0;
	map.line_length = 0;
	map.error = 0;
	i = 0;
	j = 0;
	while (grid[++i] != '\n')
		;
	map.full = grid[--i];
	map.obs = grid[--i];
	map.empt = grid[--i];
	while (ft_char_is_alphanumeric(grid[j]) == 3 && j < i)
		map.size = (map.size * 10) + (grid[j++] - '0');
	while (grid[i++] != '\n')
		;
	while (grid[map.line_length + i] != '\0' && grid[map.line_length + i] != '\n')
		map.line_length++;
	map.map = (char *)malloc(ft_strlen(grid + i) * sizeof(char));
	map.matrix = (int *)malloc(ft_strlen(grid + i) * sizeof(int));
	map.map = ft_strcpy(map.map, (grid + i));
	return (map);
}

char	*read_file(char *file_name)
{
	int				file;
	int				bytes_read;
	char			*grid;

	grid = (char *)malloc(MAX_LENGTH);
	if (grid == NULL)
		return (0);
	file = open (file_name, O_RDONLY);
	if (file == -1)
		return (0);
	bytes_read = read (file, grid, MAX_LENGTH - 1);
	if (bytes_read == -1)
		return (0);
	grid[bytes_read] = '\0';
	close(file);
	return (grid);
}
