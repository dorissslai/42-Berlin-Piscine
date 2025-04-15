/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:34:01 by hslai             #+#    #+#             */
/*   Updated: 2025/03/08 17:10:43 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int a)
{
	char	*hex;
	char	first;
	char	second;

	hex = "0123456789abcdef";
	first = hex[a / 16];
	second = hex[a % 16];
	write(1, "\\", 1);
	write(1, &first, 1);
	write (1, &second, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*
int	main(void)
{
	char s[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(s);
	return (0);
}*/
