/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:45:56 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/20 12:13:43 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb >= 2)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	if (nb < 0)
		return (0);
	return (1);
}
