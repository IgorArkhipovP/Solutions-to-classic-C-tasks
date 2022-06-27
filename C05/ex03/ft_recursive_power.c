/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:26:46 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/20 18:27:13 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	number;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		number = ft_recursive_power(nb, power - 1);
		result = nb * number;
	}
	return (result);
}
