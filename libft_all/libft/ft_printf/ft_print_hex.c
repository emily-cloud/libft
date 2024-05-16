/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:17:52 by hai               #+#    #+#             */
/*   Updated: 2024/01/31 12:25:57 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printx(long unsigned int n)
{
	int			count;
	char		*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < 16)
	{
		count = ft_print_char(symbols[n]);
		return (count);
	}
	else 
	{
		count += ft_printx(n / 16);
		count += ft_printx(n % 16);
		return (count);
	}
}

int	ft_printupx(long unsigned int n)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (n < 16)
	{
		count = ft_print_char(symbols[n]);
		return (count);
	}
	else 
	{
		count += ft_printupx(n / 16);
		count += ft_printupx(n % 16);
		return (count);
	}
}
