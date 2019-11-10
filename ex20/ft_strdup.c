/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:25:08 by jsabina           #+#    #+#             */
/*   Updated: 2019/09/08 10:08:57 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		a;

	a = 0;
	if (!src)
		return (NULL);
	while (src[a] != '\0')
	{
		a++;
	}
	tmp = (char*)malloc(sizeof(char) * (a + 1));
	a = 0;
	while (src[a] != '\0')
	{
		tmp[a] = src[a];
		a++;
	}
	tmp[a] = '\0';
	return (tmp);
}
