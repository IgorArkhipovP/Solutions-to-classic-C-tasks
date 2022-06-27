/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:53:46 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/20 11:17:19 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned nbn;

	nbn = (unsigned)nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}	
	if (nb > 10)
	{
		ft_putchar(nb + '0');
	} else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
