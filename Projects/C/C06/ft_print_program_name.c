/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:22:45 by hslai             #+#    #+#             */
/*   Updated: 2025/03/12 18:28:27 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		i = 0;
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
