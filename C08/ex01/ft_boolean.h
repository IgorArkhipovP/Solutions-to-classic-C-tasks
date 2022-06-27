/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:07:18 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/23 11:18:59 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOlEAN_H
#define	FT_BOOLEAN_H

#include <unistd.h>

# define TRUE		1
# define FALSE		0
# define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)
# define EVEN_MSG	"I have a pair number of arguments.\n"
# define ODD_MSG	"I have an impair number of arguments. \n"

typedef int	t_bool;
void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif
