/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:19:26 by hslai             #+#    #+#             */
/*   Updated: 2025/03/08 17:16:26 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char s[] = "Hello";
	char d[50];
	int n = 3;
	char *result;
	
	printf("Before: source = %s, dest = %s\n", s, d);

	result = ft_strncpy(d, s, n);

	printf("After: source = %s, dest = %s\n", s, result);
}
*/
