/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 17:00:15 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/23 17:00:17 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i + 1], tab[i]) < 0)
			return (0);
		i += 1;
	}
	return (1);
}