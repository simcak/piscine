/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:17:05 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/15 19:33:12 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	o;
	int	k;

	o = 0;
	k = 0;
	if (to_find[k] == '\0')
		return (str);
	while (str[o] != '\0')
	{
		while (str[k + o] == to_find[k] && str[o + k] != '\0')
			k++;
		if (to_find[k] == '\0')
			return (str + o);
		o++;
		k = 0;
	}
	return (0);
}

/*
int main()
{
	char str_main[] = "strom je ve stromoradi na konci";
	char to_find_main[] = "stromoradi";

	printf("%s \n", ft_strstr(str_main, to_find_main));
} 
*/