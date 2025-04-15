/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:03:12 by hslai             #+#    #+#             */
/*   Updated: 2025/03/08 17:08:57 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check(int *first_letter, char *str)
{
	if (*first_letter == 1 && (*str >= 'a' && *str <= 'z'))
	{
		*str = *str - 'a' + 'A';
		*first_letter = 0;
	}
	else if (*first_letter == 0 && (*str >= 'A' && *str <= 'Z'))
	{
		*str = *str - 'A' + 'a';
		*first_letter = 0;
	}
	else if ((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
	{
		*first_letter = 0;
	}
	else
	{
		*first_letter = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	first_letter;
	int	i;

	first_letter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		check(&first_letter, &str[i]);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*result;
	
	printf("Before: %s\n", s);
	
	result = ft_strcapitalize(s);
	
	printf("Result: %s\n", result);
}*/
