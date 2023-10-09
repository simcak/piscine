/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:12:45 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/28 23:41:41 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BSQ.h"

int	ft_getchar(void)
{
	char	ch;
	int		bytes_read;

	bytes_read = read(0, &ch, 1);
	if (bytes_read == 0)
		return (EOF);
	return (ch);
}

char	*read_input_from_terminal(void)
{
	int		index;
	char	ch;
	char	*input;

	index = 0;
	input = (char *)malloc(MAX_LENGTH * sizeof(char));
	if (input == NULL)
	{
		ft_putstr("Memory allocation failed.\n");
		exit(1);
	}
	ft_putstr("Enter your input (press Ctrl + D to finish):\n");
	while ((ch = ft_getchar()) != EOF)
	{
		input[index++] = ch;
		if (index >= MAX_LENGTH - 1)
			break;
	}
	input[index] = '\0';
	return (input);
}
