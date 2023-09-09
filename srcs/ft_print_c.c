/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:49:23 by kchan             #+#    #+#             */
/*   Updated: 2023/05/02 14:23:14 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_c(t_print *tab)
{
	char	a;

	a = va_arg(tab->args, int);
	(*tab).tl += write(1, &a, 1);
}