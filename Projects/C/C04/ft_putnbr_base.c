/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:25:13 by hslai             #+#    #+#             */
/*   Updated: 2025/03/10 20:17:59 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	is_valid_base(char *b)
{
	int	i;
	int	j;

	if (*b == '\0' || get_base_len(b) == 1)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '-' || b[i] == '+')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	n = nbr;
	if (!(is_valid_base(base)))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	base_len = get_base_len(base);
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, base);
	}
	ft_putchar(base[n % base_len]);
}

/*
int	main(void)
{
	int nbr = 42;
	char dec_base[] = "0123456789";
	//char binary_base[] = "01";
	//char hex_base[] = "0123456789ABCDEF";
	//char octal_base[] = "poneyvif";
	
	ft_putnbr_base(nbr, dec_base);

	return (0);
}*/
