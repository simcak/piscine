/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:18:36 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/19 15:38:49 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(int argc, char *argv)
{
	int	i;

	i = 0;
	while (argv[i] && argc)
		write(1, &argv[i++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	ft_print_program_name(argc, argv[0]);
	return (0);
}
