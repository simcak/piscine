/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:24:41 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/22 21:25:13 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		i;

	i = 0;
	duplicate = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!duplicate)
		return (0);
	while (src[i])
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

/* int	main(void)
{
	char original[] = "Hello, World!";
	char *duplicate = ft_strdup(original);

	if (duplicate != NULL) {
		printf("Original: %s its adress: %p\n", original, original);
		printf("Duplicate: %s its adress: %p\n", duplicate, duplicate);
		free(duplicate);
	}
	return (0);
} */
