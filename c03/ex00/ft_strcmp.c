/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:36:29 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/14 21:25:04 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && (str1[i] != '\0' || str2[i] != '\0'))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

/*
int main()
{
	printf("%d \n", ft_strcmp("Hello", "Hello"));
	printf("%d \n", ft_strcmp("Hell", "Hello"));
	printf("%d \n", ft_strcmp("Hello", "He"));
	printf("%d \n", ft_strcmp("Hello", "ahoj"));
}
*/