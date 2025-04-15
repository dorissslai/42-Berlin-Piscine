/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:09:55 by hslai             #+#    #+#             */
/*   Updated: 2025/03/09 17:13:25 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str) 
	{
		write(1, str, 1);
		str++;
	}
}

/*
int	main(void)
{
	char	*s;

	s = "abcde";

	ft_putstr(s);

	return(0);
}*/
