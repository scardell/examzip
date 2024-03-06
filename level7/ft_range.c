/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:54:19 by scardell          #+#    #+#             */
/*   Updated: 2024/03/06 13:14:56 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int        *ft_range(int start, int end)
{
		long    i;
		long    len;
		int     *numbers;

		i = 0;
		if (start > end)
			len = (long)start - (long)end + 1;
		else
			len = (long)end - (long)start + 1;

		numbers = (int *)malloc(sizeof(int) * len);
		if (!numbers)
			return (NULL);

		while (i < len)
		{
			if (start <= end)
				numbers[i++] = start++;
			else
				numbers[i++] = start--;
		}
		return (numbers);
}

 #include <stdio.h>

int        main(void)
{
	int *prueba;
		
	prueba = ft_range(-2147483648, 2147483647);
	printf("%d\n", prueba[0]);
	printf("%d\n", prueba[1]);
	printf("%d\n", prueba[2]);
	printf("%d\n", prueba[3]);
return (0);
}