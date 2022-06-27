/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:58:12 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/17 20:18:49 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_space_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	ch[3];

	ch[0] = '0';
	while (ch[0] <= '9')
	{
		ch[1] = '1';
		while (ch[1] <= '9')
		{
			ch[2] = '2';
			while (ch[2] <= '9')
			{
				if (ch[0] < ch[1] && ch[1] < ch[2])
				{
					ft_putchar(ch[0]);
					ft_putchar(ch[1]);
					ft_putchar(ch[2]);
					if (!(ch[0] == '7' && ch[1] == '8' && ch[2] == '9'))
						ft_space_comma();
				}
				ch[2]++;
			}
			ch[1]++;
		}
		ch[0]++;
	}
}
