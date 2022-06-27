/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:25:53 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/17 20:26:38 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbn;

	nbn = (unsigned int)nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbn = nbn * -1;
	}	
	if (nbn >= 10)
	{
		ft_putnbr(nbn / 10);
		ft_putnbr(nbn % 10);
	}
	else
		ft_putchar(nbn + '0');
}
