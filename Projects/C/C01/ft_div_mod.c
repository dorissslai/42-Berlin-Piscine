/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:47:39 by hslai             #+#    #+#             */
/*   Updated: 2025/02/26 09:54:11 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	x, y, d, m;
	
	x = 5;
	y = 2;
	d = 0;
	m = 0;
	
	printf("Before: x=%d, y=%d, d=%d, m=%d\n", x, y, d, m);
	
	ft_div_mod(x, y, &d, &m);
	
	printf("After: x=%d, y=%d, d=%d, m=%d\n", x, y, d, m);
	
	return (0);
}*/
