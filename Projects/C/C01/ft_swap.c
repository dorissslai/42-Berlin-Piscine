/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:17:21 by hslai             #+#    #+#             */
/*   Updated: 2025/02/26 09:44:01 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	a_value;	

	a_value = *a;
	*a = *b;
	*b = a_value;
}

/*int	main(void)
{
	int	first;
	int	second;
	
	first = 1;
	second = 2;
	
	printf("Before swap: first = %d, second = %d\n", first, second);
	
	ft_swap(&first, &second);

	printf("After swap: first = %d, second = %d\n", first, second);
	
	return(0);
}*/
