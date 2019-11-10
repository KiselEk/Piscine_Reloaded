/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:46:20 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/06 09:52:12 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fac;

	fac = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			fac *= nb--;
		}
		return (fac);
	}
}
