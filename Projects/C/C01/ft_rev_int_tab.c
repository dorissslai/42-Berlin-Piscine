/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:38:21 by hslai             #+#    #+#             */
/*   Updated: 2025/02/26 11:26:04 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	size;
	int	x;
	int	integers[] = {1, 2 ,3, 4};
	
	size = sizeof(integers)/sizeof(integers[0]);
	
	ft_rev_int_tab(integers, size);
	
	x = 0;
	while(x < size)
	{
		printf("%d", integers[x]);
		x++;
	}

	return (0);
}*/
