/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:57:21 by hslai             #+#    #+#             */
/*   Updated: 2025/02/26 10:25:35 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_value;
	int	b_value;

	if (b != NULL && *b != 0)
	{
		a_value = *a;
		b_value = *b;
		*a = a_value / b_value;
		*b = a_value % b_value;
	}
}

/*int     main(void)
{
	int	x;
	int	y;
	
	x = 5;
	y = 2;
	
	printf("Before: x = %d, y = %d\n", x, y);
	
	ft_ultimate_div_mod(&x, &y);
	
	printf("before: x = %d, y = %d\n", x, y);
	
	return (0);
}*/
