/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:41:00 by hslai             #+#    #+#             */
/*   Updated: 2025/03/08 17:09:44 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*
#include <stdio.h>
int main(void)
{
	char s[] ="Hello";
	char d[50];
	unsigned int r;
	
	printf("Before: Src: %s, Dest: %s\n", s, d);
	
	r = ft_strlcpy(d, s, 2);
	
	printf("Result: %d\n", r);
	printf("After: Src: %s, Dest: %s\n", s, d);
	return (0);
}*/
