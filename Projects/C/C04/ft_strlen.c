/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:00:29 by hslai             #+#    #+#             */
/*   Updated: 2025/03/09 17:06:59 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s;
	int	result;

	s = "abcde";
	result = ft_strlen(s);

	printf("Result: %d", result);

	return (0);
}*/
