/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:25:33 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/17 14:23:24 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*
int main()
{
	printf("1a %d \n", ft_strncmp("Hello", "Hello", 500000));
	printf("1b %d \n", strncmp("Hello", "Hello", 500000));
	printf("2a %d \n", ft_strncmp("Hell", "Hello", 3));
	printf("2b %d \n", strncmp("Hell", "Hello", 3));
	printf("3a %d \n", ft_strncmp("Hello", "He", 3));
	printf("3b %d \n", strncmp("Hello", "He", 3));
	printf("4a %d \n", ft_strncmp("Hello", "ahoj", 4));
	printf("4b %d \n", strncmp("Hello", "ahoj", 4));
}
*/