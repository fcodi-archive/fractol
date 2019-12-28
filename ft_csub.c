/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <fcodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 18:16:14 by fcodi             #+#    #+#             */
/*   Updated: 2019/12/27 18:16:24 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_complex.h"

t_complex 		ft_csub(t_complex c1, t_complex c2)
{
	return ((t_complex){c1.re - c2.re, c1.im - c2.im});
}