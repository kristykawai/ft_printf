/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:18:26 by kchan             #+#    #+#             */
/*   Updated: 2023/05/02 14:21:52 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_percentage(t_print *tab)
{
	(*tab).tl += write(1, "%", 1);
}