/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:54:51 by scardell          #+#    #+#             */
/*   Updated: 2024/03/01 15:57:56 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int step = 1;
	int n = end - start;

	if (n < 0)
		(n *= -1);
	n++;

	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		if (start < end)
			step = -1;
		while (i < n)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
	}
	return (range);
}
