/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:48:55 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/20 18:43:10 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	ft_sqrt(int nb)
{
	int	root_square;

	root_square = 1;
	if (nb > 0)
	{
		while (root_square <= 46341)
		{
			if (ft_iterative_power(root_square, 2) == nb)
				return (root_square);
			root_square++;
		}
	}
	return (0);
}
