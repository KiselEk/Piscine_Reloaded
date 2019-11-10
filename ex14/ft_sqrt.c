/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:29:36 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/08 13:47:36 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int res;

	res = 0;
	if (nb <= 0)
		return (0);
	while (nb > (res * res))
	{
		res++;
	}
	if (nb % res == 0)
	{
		return (res);
	}
	else
	{
		return (0);
	}
}
