/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 19:26:50 by hvuorine          #+#    #+#             */
/*   Updated: 2019/11/27 11:12:54 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		ft_putchar(s[x]);
		x++;
	}
}