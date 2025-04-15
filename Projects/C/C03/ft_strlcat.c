/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:39:00 by hslai             #+#    #+#             */
/*   Updated: 2025/03/09 16:26:02 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	size_left;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	size_left = size - dest_len - 1;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	i = 0;
	while (src[i] != '\0' && i < size_left)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>
int	main(void)
{
	char d[20] = "hello";
	char s[] = "world";
	unsigned int result;
	
	result = ft_strlcat(d, s, 8);
	printf("Result = %d\n", result);
	printf("Result string: %s\n", d);
	return (0);
}*/
