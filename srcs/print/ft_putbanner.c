/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbanner.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 17:47:17 by jpinyot           #+#    #+#             */
/*   Updated: 2018/06/05 17:58:19 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblem.h"

void	ft_putbanner(void)
{
	ft_putstr("\x1b[97m  ___\x1b[0m\n");
	ft_putstr("\x1b[97m /\\_ \\                                   __\x1b[0m\n");
	ft_putstr("\x1b[96m \\//\\ \\       __     ___ ___\x1b[0m");
	ft_putstr("\x1b[96m            /\\_\\     ___\x1b[0m\n");
	ft_putstr("\x1b[95m   \\ \\ \\    /'__`\\ /' __` __`\\\x1b[0m");
	ft_putstr("\x1b[95m   _______\\/\\ \\  /' _ `\\\x1b[0m\n");
	ft_putstr("\x1b[93m    \\_\\ \\_ /\\  __/ /\\ \\/\\ \\/\\\x1b[0m");
	ft_putstr("\x1b[93m \\ /\\______\\\\ \\ \\ /\\ \\/\\ \\\x1b[0m\n");
	ft_putstr("\x1b[92m    /\\____\\\\ \\____\\\\ \\_\\ \\_\\\x1b[0m");
	ft_putstr("\x1b[92m \\_\\\\/______/ \\ \\_\\\\ \\_\\ \\_\\\x1b[0m\n");
	ft_putstr("\x1b[91m    \\/____/ \\/____/ \\/_/\\/_/\\/_/\x1b[0m");
	ft_putstr("\x1b[91m           \\/_/ \\/_/\\/_/\x1b[0m\n");
	ft_putstr("\x1b[90m\t\t\t\t\t    by: jpinyot\x1b[0m\n");
}
