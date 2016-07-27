/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseveno <eseveno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 12:57:58 by eseveno           #+#    #+#             */
/*   Updated: 2015/02/17 12:58:37 by eseveno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] == s2[i])
		{
			if (s1[i + 1] == s2[i + 1] && s1[i + 1] == '\0')
				return (1);
			i++;
		}
	}
	return (0);
}
