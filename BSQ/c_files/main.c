/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:00:19 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/28 23:48:43 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BSQ.h"

void	process_args_2()
{
	char*	inputString;
	t_our_struct	mystruct;
	char		*str;

	inputString = read_input_from_terminal();
	ft_putstr("\n");
	str = inputString;
	mystruct = struct_init(str);
	mystruct = ft_search_alg(mystruct);
	ft_print_solution(&mystruct);
	free(inputString);
}

void	process_args(int argc, char **argv)
{
	t_our_struct	mystruct;
	char			*str;
	int				i;

	if (argc < 2)
		process_args_2();
	i = 1;
	while (i < argc)
	{
		str = read_file(argv[i]);
		++i;
		if (str == 0)
		{
			ft_putstr("map error\n");
			continue ;
		}
		mystruct = struct_init(argv[i]);
		printf("error value: %i\n", mystruct.error);
		if (mystruct.error == 1)
		{
			ft_putstr("map error\n");
			continue ;
		}
		mystruct = ft_search_alg(mystruct);
		if (mystruct.error == 1)
		{
			write(2,"map error\n", 10);
			continue ;
		}
		ft_print_solution(&mystruct);
	}
}

int	main(int argc, char **argv)
{
	process_args(argc, argv);
	return (0);
}
