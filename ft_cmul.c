/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmul.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <fcodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 18:15:35 by fcodi             #+#    #+#             */
/*   Updated: 2019/12/27 18:15:35 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_complex.h"

t_complex 		ft_cmul(t_complex c1, t_complex c2)
{
	return ((t_complex){c1.re * c2.re - c1.im * c2.im,
						c1.re * c2.im + c1.im * c2.re});
}