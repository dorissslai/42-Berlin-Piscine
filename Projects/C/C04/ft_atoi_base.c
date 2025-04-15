/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:42:32 by hslai             #+#    #+#             */
/*   Updated: 2025/03/10 20:04:07 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_base_len(char *b)
{
	int	len;

	len = 0;
	while (b[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_valid_base(char *b)
{
	int	i;
	int	j;

	if (*b == '\0' || get_base_len(b) == 1)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '-' || b[i] == '+' || is_whitespace(b[i]))
			return (0);
		j = i + 1;
		while (b[j] != '\0')
		{
			if (b[i] == b[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	get_base_value(char c, char *b)
{
	int	i;

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	result;
	int	base_len;

	if (!(is_valid_base(base)))
		return (0);
	i = 0;
	while (str[i] != '\0' && is_whitespace(str[i]))
		i++;
	sign = 1;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	base_len = get_base_len(base);
	while (str[i] != '\0' && (get_base_value(str[i], base) != -1))
	{
		result = (result * base_len) + get_base_value(str[i], base);
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>
int	main(void)
{
	char hex_b[] = "0123456789ABCDEF";
	char s[] = "   -2F";

	int result = ft_atoi_base(s, hex_b);

	printf("Result: %d", result);
	return (0);
}*/
