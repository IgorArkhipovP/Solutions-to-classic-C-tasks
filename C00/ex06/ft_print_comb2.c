/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:27:05 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/17 20:54:42 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first_pair;
	int	second_pair;

	first_pair = 0;
	second_pair = 0;
	while (first_pair < 100)
	{
		second_pair = first_pair + 1;
		while (second_pair < 100)
		{
			ft_putchar(first_pair / 10 + '0');
			ft_putchar(first_pair % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second_pair / 10 + '0');
			ft_putchar(second_pair % 10 + '0');
			if ((first_pair / 10 != 9) || (first_pair % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_pair++;
		}
		first_pair++;
	}
}
