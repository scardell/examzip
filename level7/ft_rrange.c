/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:54:51 by scardell          #+#    #+#             */
/*   Updated: 2024/03/06 13:15:22 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	long len;
	long	i;
	int *numbers;
	
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
		if (start < end)
			numbers[i++] = end--;
		else
			numbers[i++] = end++;
	}
	return (numbers);
}

 #include <stdio.h>
 int        main(void)
{
	int *prueba;
		
	prueba = ft_rrange(-2147483648, 2147483647);
	printf("%d\n", prueba[0]);
	printf("%d\n", prueba[1]);
	printf("%d\n", prueba[2]);
	printf("%d\n", prueba[3]);
return (0);
}