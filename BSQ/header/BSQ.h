/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:06:24 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/28 23:47:35 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define MAX_LENGTH 10000
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_t_our_struct{
	char	*map;
	int		error;
	char	full;
	char	obs;
	char	empt;
	int		size;
	int		line_length;
	int		pos;
	int		maxsqr_size;
	int		maxsqr_pos;
	int		*matrix;
	char	*standard;
}	t_our_struct;

t_our_struct	truct_init(char *grid);
t_our_struct	ft_errors(int error_num, t_our_struct bsq);
void			ft_putchar(char a);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_search(t_our_struct *boardstruct);
void			ft_print_solution(t_our_struct *boardstruct);
void			ft_to_full(t_our_struct *boardstruct);
char			*ft_strcpy(char *dest, char *src);
char			*read_file(char *file_name);
int				ft_strlen(char *str);
int				ft_char_is_alphanumeric(char c);
int				ft_atoi(char *str);
t_our_struct	ft_search_alg(t_our_struct bsq);
t_our_struct	struct_init(char *grid);
int				max_sqr_size(t_our_struct bsq, int i);
char			*read_input_from_terminal(void);
int				ft_getchar(void);

#endif