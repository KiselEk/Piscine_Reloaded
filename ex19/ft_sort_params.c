/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:43:19 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/08 14:34:12 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && (s1[a] == s2[a]))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

void	ft_swap(char **a, char **b)
{
	char *swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], &av[i + 1]);
			i = 1;
		}
		else
		{
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int a;
	int b;

	a = 1;
	ft_sort(ac, av);
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
