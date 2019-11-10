/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:31:42 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/08 14:34:14 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int a;
	int b;

	a = 1;
	while (ac > a)
	{
		b = 0;
		while (av[a][b])
		{
			ft_putchar(av[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
