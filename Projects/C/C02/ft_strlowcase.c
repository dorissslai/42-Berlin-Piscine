/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:55:44 by hslai             #+#    #+#             */
/*   Updated: 2025/03/06 22:26:49 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char s[] = "ABC";
	char *result;

	printf("Before: %s\n", s);

	result = ft_strlowcase(s);

	printf("After: %s\n", result);

	return (0);
}*/
