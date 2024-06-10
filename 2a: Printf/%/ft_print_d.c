/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waziz <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:34:18 by waziz             #+#    #+#             */
/*   Updated: 2023/11/02 15:34:20 by waziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int n)
{
	int	count;

	count = 0;
	count += ft_putnbr(n);
	if (count < 0)
		return (-1);
	return (count);
}