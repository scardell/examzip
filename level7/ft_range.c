/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:54:19 by scardell          #+#    #+#             */
/*   Updated: 2024/03/06 10:31:09 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int        *ft_range(int start, int end)
{
        long    i;
        long    len;
        int     *numbers;

        if (end == start)
                len = 1;
        if (end > start)
                len = (long)end - (long)start + 1;
        if (start> end)
                len = (long)start - (long)end + 1;

        i = 0;
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
        int start = 0;
        int end = 0;
        //int start = -2147483648;
        //int end = 2147483647;
        int *prueba = ft_range(start, end);
        int i = 0;
        
        printf("%d |", prueba[i++]);
return (0);
}